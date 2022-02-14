
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_holding_buffer {int buffer_size; int buffer; } ;
struct mgsl_struct {size_t get_tx_holding_index; int xmit_cnt; size_t num_tx_holding_buffers; int tx_timer; scalar_t__ tx_holding_count; struct tx_holding_buffer* tx_holding_buffers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mgsl_struct*,int ,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mgsl_struct*) ;

__attribute__((used)) static bool FUNC_4(struct mgsl_struct *VAR_2)
{
 bool VAR_3 = 0;

 if ( VAR_2->tx_holding_count ) {



  struct tx_holding_buffer *VAR_4 =
   &VAR_2->tx_holding_buffers[VAR_2->get_tx_holding_index];
  int VAR_5 = FUNC_3(VAR_2);
  int VAR_6 = VAR_4->buffer_size / VAR_0;
  if ( VAR_4->buffer_size % VAR_0 )
   ++VAR_6;

  if (VAR_6 <= VAR_5) {
   VAR_2->xmit_cnt = VAR_4->buffer_size;
   FUNC_0(VAR_2,VAR_4->buffer,VAR_4->buffer_size);

   --VAR_2->tx_holding_count;
   if ( ++VAR_2->get_tx_holding_index >= VAR_2->num_tx_holding_buffers)
    VAR_2->get_tx_holding_index=0;


   FUNC_1(&VAR_2->tx_timer, VAR_1 + FUNC_2(5000));

   VAR_3 = 1;
  }
 }

 return VAR_3;
}
