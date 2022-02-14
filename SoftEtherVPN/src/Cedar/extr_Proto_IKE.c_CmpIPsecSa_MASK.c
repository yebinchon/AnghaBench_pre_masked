
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Spi; int ServerToClient; } ;
typedef TYPE_1__ IPSECSA ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 IPSECSA *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(IPSECSA **)VAR_0;
 VAR_3 = *(IPSECSA **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0(VAR_2->ServerToClient, VAR_3->ServerToClient);
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->Spi, VAR_3->Spi);

 return VAR_4;
}
