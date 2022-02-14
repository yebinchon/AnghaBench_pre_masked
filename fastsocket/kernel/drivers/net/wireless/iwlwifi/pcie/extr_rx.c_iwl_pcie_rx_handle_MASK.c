
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct iwl_rxq {size_t read; size_t write_actual; struct iwl_rx_mem_buffer** queue; TYPE_1__* rb_stts; } ;
struct iwl_trans_pcie {struct iwl_rxq rxq; } ;
struct iwl_trans {int dummy; } ;
struct iwl_rx_mem_buffer {int dummy; } ;
struct TYPE_2__ {int closed_rb_num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,char*,size_t,...) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct iwl_trans*,struct iwl_rx_mem_buffer*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_2(VAR_2);
 struct iwl_rxq *VAR_4 = &VAR_3->rxq;
 u32 VAR_5, VAR_6;
 u8 VAR_7 = 0;
 u32 VAR_8 = 8;
 int VAR_9;



 VAR_5 = FUNC_6(FUNC_0(VAR_4->rb_stts->closed_rb_num)) & 0x0FFF;
 VAR_6 = VAR_4->read;


 if (VAR_6 == VAR_5)
  FUNC_1(VAR_2, "HW = SW = %d\n", VAR_5);


 VAR_9 = VAR_5 - VAR_4->write_actual;
 if (VAR_9 < 0)
  VAR_9 += VAR_1;

 if (VAR_9 > (VAR_1 / 2))
  VAR_7 = 1;

 while (VAR_6 != VAR_5) {
  struct iwl_rx_mem_buffer *VAR_10;

  VAR_10 = VAR_4->queue[VAR_6];
  VAR_4->queue[VAR_6] = ((void*)0);

  FUNC_1(VAR_2, "rxbuf: HW = %d, SW = %d (%p)\n",
        VAR_5, VAR_6, VAR_10);
  FUNC_3(VAR_2, VAR_10);

  VAR_6 = (VAR_6 + 1) & VAR_0;


  if (VAR_7) {
   VAR_8++;
   if (VAR_8 >= 8) {
    VAR_4->read = VAR_6;
    FUNC_4(VAR_2);
    VAR_8 = 0;
   }
  }
 }


 VAR_4->read = VAR_6;
 if (VAR_7)
  FUNC_4(VAR_2);
 else
  FUNC_5(VAR_2);
}
