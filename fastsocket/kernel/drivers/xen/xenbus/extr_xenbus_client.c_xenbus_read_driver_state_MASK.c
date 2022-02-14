
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,char*,char*,int*,int *) ;

enum xenbus_state FUNC_1(const char *VAR_2)
{
 enum xenbus_state VAR_3;
 int VAR_4 = FUNC_0(VAR_0, VAR_2, "state", "%d", &VAR_3, ((void*)0));
 if (VAR_4)
  VAR_3 = VAR_1;

 return VAR_3;
}
