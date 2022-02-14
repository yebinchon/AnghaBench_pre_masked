
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int * Server; } ;
struct TYPE_7__ {scalar_t__ SaveType; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef int SERVER ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,TYPE_1__*) ;

UINT FUNC_5(ADMIN *VAR_6, SYSLOG_SETTING *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;

 VAR_4;

 if (FUNC_1(VAR_3) != 0 && VAR_7->SaveType != VAR_5)
 {
  return VAR_1;
 }

 if (FUNC_2(VAR_8, "b_support_syslog") == 0)
 {
  return VAR_0;
 }

 FUNC_4(VAR_8, VAR_7);

 FUNC_3(VAR_8);
 FUNC_0(VAR_6, ((void*)0), "LA_SET_SYSLOG");

 return VAR_2;
}
