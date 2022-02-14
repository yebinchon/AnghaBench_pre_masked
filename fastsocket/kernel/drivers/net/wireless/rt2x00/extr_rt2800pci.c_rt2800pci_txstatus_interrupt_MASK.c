
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int txstatus_tasklet; int txstatus_fifo; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* tx; } ;
struct TYPE_3__ {int entry_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->ops->tx->entry_num; VAR_4++) {
  FUNC_3(VAR_2, VAR_0, &VAR_3);

  if (!FUNC_1(VAR_3, VAR_1))
   break;

  if (!FUNC_0(&VAR_2->txstatus_fifo, &VAR_3)) {
   FUNC_2(VAR_2, "TX status FIFO overrun, drop tx status report\n");
   break;
  }
 }


 FUNC_4(&VAR_2->txstatus_tasklet);
}
