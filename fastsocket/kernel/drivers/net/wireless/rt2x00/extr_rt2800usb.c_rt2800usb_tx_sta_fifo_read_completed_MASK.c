
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int flags; int txstatus_timer; int txdone_work; int workqueue; int txstatus_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct rt2x00_dev*,char*,...) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static bool FUNC_10(struct rt2x00_dev *VAR_3,
       int VAR_4, u32 VAR_5)
{
 bool VAR_6;

 if (VAR_4) {
  FUNC_8(VAR_3, "TX status read failed %d\n",
       VAR_4);

  goto stop_reading;
 }

 VAR_6 = FUNC_7(VAR_5, VAR_2);
 if (VAR_6) {
  if (!FUNC_2(&VAR_3->txstatus_fifo, &VAR_5))
   FUNC_8(VAR_3, "TX status FIFO overrun\n");

  FUNC_4(VAR_3->workqueue, &VAR_3->txdone_work);


  return 1;
 }


 if (FUNC_6(VAR_3))
  FUNC_4(VAR_3->workqueue, &VAR_3->txdone_work);

 if (FUNC_5(VAR_3)) {

  FUNC_1(&VAR_3->txstatus_timer, FUNC_3(0, 250000),
         VAR_0);
  return 0;
 }

stop_reading:
 FUNC_0(VAR_1, &VAR_3->flags);





 if (FUNC_5(VAR_3) &&
     !FUNC_9(VAR_1, &VAR_3->flags))
  return 1;
 else
  return 0;
}
