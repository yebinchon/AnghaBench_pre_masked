
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_ca_private {int next_read_slot; int slot_count; TYPE_1__* slot_info; } ;
struct TYPE_5__ {int * data; } ;
struct TYPE_4__ {scalar_t__ slot_state; TYPE_2__ rx_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,size_t*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_private *VAR_1,
         int *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 size_t VAR_7;
 int VAR_8 = -1;
 int VAR_9 = 0;
 u8 VAR_10[2];

 VAR_4 = VAR_1->next_read_slot;
 while ((VAR_5 < VAR_1->slot_count) && (!VAR_9)) {
  if (VAR_1->slot_info[VAR_4].slot_state != VAR_0)
   goto nextslot;

  if (VAR_1->slot_info[VAR_4].rx_buffer.data == ((void*)0)) {
   return 0;
  }

  VAR_6 = FUNC_0(&VAR_1->slot_info[VAR_4].rx_buffer, -1, &VAR_7);
  while (VAR_6 != -1) {
   FUNC_1(&VAR_1->slot_info[VAR_4].rx_buffer, VAR_6, 0, VAR_10, 2);
   if (VAR_8 == -1)
    VAR_8 = VAR_10[0];
   if ((VAR_10[0] == VAR_8) && ((VAR_10[1] & 0x80) == 0)) {
    *VAR_3 = VAR_4;
    VAR_9 = 1;
    break;
   }

   VAR_6 = FUNC_0(&VAR_1->slot_info[VAR_4].rx_buffer, VAR_6, &VAR_7);
  }

nextslot:
  VAR_4 = (VAR_4 + 1) % VAR_1->slot_count;
  VAR_5++;
 }

 VAR_1->next_read_slot = VAR_4;
 return VAR_9;
}
