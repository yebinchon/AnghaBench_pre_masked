
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UNICODE ;
struct TYPE_5__ {int * event; int event_handle; } ;
typedef TYPE_1__ NEO_EVENT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int * FUNC_7 (char*) ;
 int VAR_1 ;

NEO_EVENT *FUNC_8(char *VAR_2)
{
 UNICODE *VAR_3;
 NEO_EVENT *VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_4 = FUNC_6(sizeof(NEO_EVENT));
 if (VAR_4 == ((void*)0))
 {
  FUNC_0(VAR_3);
  return ((void*)0);
 }


 VAR_4->event = FUNC_2(FUNC_1(VAR_3), &VAR_4->event_handle);
 if (VAR_4->event == ((void*)0))
 {
  FUNC_5(VAR_4);
  FUNC_0(VAR_3);
  return ((void*)0);
 }


 FUNC_4(VAR_4->event, VAR_1, VAR_0);
 FUNC_3(VAR_4->event);


 FUNC_0(VAR_3);

 return VAR_4;
}
