
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ packet_num; } ;
struct TYPE_6__ {int lock; int pMgmt; TYPE_1__ rxManeQueue; } ;
typedef int PSRxMgmtPacket ;
typedef TYPE_2__* PSDevice ;
typedef int INT ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

INT FUNC_5(
     void * VAR_1)
{
 PSDevice VAR_2 = (PSDevice) VAR_1;
 PSRxMgmtPacket VAR_3;







 while (1)
 {





  FUNC_2(&VAR_2->lock);
   while(VAR_2->rxManeQueue.packet_num != 0)
   {
    VAR_3 = FUNC_0(VAR_2);


   FUNC_4(VAR_2, VAR_2->pMgmt, VAR_3);


   }
  FUNC_3(&VAR_2->lock);
  if (VAR_0 == 0)
  break;



 FUNC_1();

 if (VAR_0 == 0)
  break;

 }


 return 0;

}
