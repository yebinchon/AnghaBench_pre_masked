
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpc_config_remote {int classes; int pmc_mask; int * configv; } ;
typedef int kpc_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kpc_config_remote*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(uint32_t VAR_5, kpc_config_t *VAR_6)
{
 int VAR_7 = 0;
 struct kpc_config_remote VAR_8 = {
  .classes = VAR_5, .configv = VAR_6,
  .pmc_mask = FUNC_1(VAR_5)
 };

 FUNC_0(VAR_6);


 if ((VAR_5 & VAR_3) && FUNC_2()) {
  return VAR_0;
 }


 if ((VAR_5 & (VAR_1)) &&
     (VAR_5 & (VAR_2)))
 {
  return VAR_0;
 }

 FUNC_4(&VAR_4);


 if (VAR_5 & VAR_2)
  VAR_8.classes |= VAR_1;

 VAR_7 = FUNC_3( &VAR_8 );

 FUNC_5(&VAR_4);

 return VAR_7;
}
