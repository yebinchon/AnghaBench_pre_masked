
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int card_block ;
struct TYPE_3__ {int timeout_svc; int wait_sync_queue; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char const*) ;

s32 FUNC_9(const char *VAR_7,const char *VAR_8)
{
 u32 VAR_9,VAR_10;

 if(VAR_4) return VAR_1;
 if(VAR_7 && FUNC_8(VAR_7)<=4) FUNC_6(VAR_3,VAR_7,4);
 if(VAR_8 && FUNC_8(VAR_8)<=2) FUNC_6(VAR_2,VAR_8,2);

 FUNC_4(VAR_10);
 FUNC_0();

 FUNC_7(VAR_6,0,sizeof(card_block)*2);
 for(VAR_9=0;VAR_9<2;VAR_9++) {
  VAR_6[VAR_9].result = VAR_0;
  FUNC_1(&VAR_6[VAR_9].wait_sync_queue);
  FUNC_2(&VAR_6[VAR_9].timeout_svc);
 }
 FUNC_3(&VAR_5);
 VAR_4 = 1;
 FUNC_5(VAR_10);
 return VAR_1;
}
