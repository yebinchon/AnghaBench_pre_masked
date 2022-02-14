
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int oldlen; size_t newlen; int newptr; scalar_t__ oldptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_req*,char*,size_t) ;
 int FUNC_1 (struct sysctl_req*,char*,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct sysctl_req *VAR_2, char *VAR_3, size_t VAR_4, int VAR_5, int *VAR_6)
{
 int VAR_7;

 if (VAR_6) *VAR_6 = 0;

 if (VAR_5 && VAR_2->oldptr && VAR_2->oldlen && (VAR_2->oldlen<FUNC_2(VAR_3) + 1)) {






  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_2->oldlen-1);
  if (!VAR_7) {
   char VAR_8 = 0;
   VAR_7 = FUNC_1(VAR_2, &VAR_8, 1);
  }
 } else {

  VAR_7 = FUNC_1(VAR_2, VAR_3, FUNC_2(VAR_3) + 1);
 }


 if (VAR_7 || !VAR_2->newptr)
  return(VAR_7);


 if (VAR_4 == 0)
  return(VAR_1);


 if (VAR_2->newlen >= VAR_4)
  return(VAR_0);


 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_2->newlen);
 VAR_3[VAR_2->newlen] = '\0';

 if (!VAR_7 && VAR_6)
  *VAR_6 = 1;
 return(VAR_7);
}
