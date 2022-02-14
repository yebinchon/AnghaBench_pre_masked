
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_para {int p_type; int p_len; } ;
struct smt_header {int smt_len; } ;
struct s_smc {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct s_smc*) ;
 int VAR_1 ;

void *FUNC_2(struct s_smc *VAR_2, struct smt_header *VAR_3, int VAR_4)
{
 char *VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void *VAR_8 = ((void*)0);

 FUNC_1(VAR_2) ;

 VAR_6 = VAR_3->smt_len ;
 VAR_5 = (char *)(VAR_3+1) ;
 while (VAR_6 > 0 ) {
  if (((struct smt_para *)VAR_5)->p_type == VAR_4)
   VAR_8 = (void *) VAR_5 ;
  VAR_7 = ((struct smt_para *)VAR_5)->p_len + VAR_0 ;
  VAR_5 += VAR_7 ;
  VAR_6 -= VAR_7 ;
  if (VAR_6 < 0) {
   FUNC_0("SMT : sm_to_para - length error %d\n",VAR_7,0) ;
   return ((void*)0);
  }
  if ((VAR_7 & 3) && (VAR_4 != VAR_1)) {
   FUNC_0("SMT : sm_to_para - odd length %d\n",VAR_7,0) ;
   return ((void*)0);
  }
  if (VAR_8)
   return(VAR_8) ;
 }
 return ((void*)0);
}
