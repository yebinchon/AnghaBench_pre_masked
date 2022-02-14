
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ dword ;
struct TYPE_3__ {int xdi_adapter; } ;
typedef TYPE_1__ diva_os_xdi_adapter_t ;
typedef int byte ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(diva_os_xdi_adapter_t * VAR_2, byte * VAR_3,
      dword VAR_4)
{
 int VAR_5;

 VAR_0 = VAR_3;
 VAR_1 = VAR_4;

 VAR_5 = FUNC_0(&VAR_2->xdi_adapter);

 VAR_0 = ((void*)0);
 VAR_1 = 0;

 return (VAR_5 ? 0 : -1);
}
