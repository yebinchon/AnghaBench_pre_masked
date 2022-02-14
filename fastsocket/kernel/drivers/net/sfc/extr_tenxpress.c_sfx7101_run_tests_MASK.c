
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static int
FUNC_2(struct efx_nic *VAR_1, int *VAR_2, unsigned VAR_3)
{
 int VAR_4;

 if (!(VAR_3 & VAR_0))
  return 0;


 VAR_4 = FUNC_1(VAR_1);
 VAR_2[0] = VAR_4 ? -1 : 1;

 FUNC_0(VAR_1);

 return VAR_4;
}
