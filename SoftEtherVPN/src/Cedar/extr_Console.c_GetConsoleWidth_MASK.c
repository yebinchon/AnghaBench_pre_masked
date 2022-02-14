
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int (* GetWidth ) (TYPE_1__*) ;} ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (TYPE_1__*) ;

UINT FUNC_1(CONSOLE *VAR_0)
{
 UINT VAR_1;

 VAR_1 = VAR_0->GetWidth(VAR_0);

 if (VAR_1 == 0)
 {
  VAR_1 = 80;
 }

 if (VAR_1 < 32)
 {
  VAR_1 = 32;
 }

 if (VAR_1 > 65536)
 {
  VAR_1 = 65535;
 }

 return VAR_1;
}
