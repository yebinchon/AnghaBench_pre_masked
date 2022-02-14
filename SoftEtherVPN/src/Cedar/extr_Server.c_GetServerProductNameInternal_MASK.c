
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {TYPE_1__* Cedar; } ;
struct TYPE_4__ {scalar_t__ Bridge; } ;
typedef TYPE_2__ SERVER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;

void FUNC_1(SERVER *VAR_3, char *VAR_4, UINT VAR_5)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }
 if (VAR_3->Cedar->Bridge)
 {
  FUNC_0(VAR_4, VAR_5, VAR_1);
 }
 else
 {
  FUNC_0(VAR_4, VAR_5, VAR_2);
 }

}
