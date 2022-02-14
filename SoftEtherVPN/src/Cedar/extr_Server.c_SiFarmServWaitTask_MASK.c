
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Response; int * Request; int CompleteEvent; } ;
typedef int PACK ;
typedef TYPE_1__ FARM_TASK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

PACK *FUNC_5(FARM_TASK *VAR_1)
{
 PACK *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(VAR_1->CompleteEvent, VAR_0);
 FUNC_3(VAR_1->CompleteEvent);
 FUNC_1(VAR_1->Request);

 VAR_2 = VAR_1->Response;
 FUNC_0(VAR_1);

 if (FUNC_2(VAR_2, "succeed") == 0)
 {

  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
