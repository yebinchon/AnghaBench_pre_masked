
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {scalar_t__ obf_timeout; } ;


 int FUNC_0 (unsigned char) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct si_sm_data*,char*) ;

__attribute__((used)) static inline int FUNC_2(struct si_sm_data *VAR_1, unsigned char VAR_2,
       long VAR_3)
{
 if (!FUNC_0(VAR_2)) {
  VAR_1->obf_timeout -= VAR_3;
  if (VAR_1->obf_timeout < 0) {
      FUNC_1(VAR_1, "OBF not ready in time");
      return 1;
  }
  return 0;
 }
 VAR_1->obf_timeout = VAR_0;
 return 1;
}
