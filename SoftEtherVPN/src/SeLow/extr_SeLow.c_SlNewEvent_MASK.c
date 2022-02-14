
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * event; int event_handle; } ;
typedef int SL_UNICODE ;
typedef TYPE_1__ SL_EVENT ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (int) ;

SL_EVENT *FUNC_8(char *VAR_2)
{
 SL_UNICODE *VAR_3;
 SL_EVENT *VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_4 = FUNC_7(sizeof(SL_EVENT));
 if (VAR_4 == ((void*)0))
 {
  FUNC_4(VAR_3);
  return ((void*)0);
 }


 VAR_4->event = FUNC_0(FUNC_5(VAR_3), &VAR_4->event_handle);
 if (VAR_4->event == ((void*)0))
 {
  FUNC_3(VAR_4);
  FUNC_4(VAR_3);
  return ((void*)0);
 }


 FUNC_2(VAR_4->event, VAR_1, VAR_0);
 FUNC_1(VAR_4->event);


 FUNC_4(VAR_3);

 return VAR_4;
}
