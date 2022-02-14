
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kpc_config_remote {int classes; int pmc_mask; int * configv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kpc_config_remote*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(uint32_t VAR_6, uint64_t *VAR_7)
{
 struct kpc_config_remote VAR_8 = {
  .classes = VAR_6, .configv = VAR_7,
  .pmc_mask = FUNC_2(VAR_6)
 };

 FUNC_0(VAR_7);


 if ((VAR_6 & (VAR_2)) &&
     (VAR_6 & (VAR_4)))
 {
  return VAR_1;
 }

 FUNC_5(&VAR_5);







 if (VAR_6 & VAR_3) {
  FUNC_6(&VAR_5);
  return VAR_0;
 }



 if (VAR_6 & VAR_4)
  VAR_8.classes |= VAR_2;

 FUNC_4("setting period %u\n", VAR_6);
 FUNC_3( &VAR_8 );

 FUNC_6(&VAR_5);

 return 0;
}
