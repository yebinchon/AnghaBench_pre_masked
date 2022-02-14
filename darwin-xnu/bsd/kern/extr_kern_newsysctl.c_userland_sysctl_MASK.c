
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sysctl_req {size_t oldidx; size_t oldlen; scalar_t__ oldptr; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,size_t,int*,int ,struct sysctl_req*) ;

int
FUNC_1(boolean_t VAR_3,
    char *VAR_4, size_t VAR_5,
    int *VAR_6, u_int VAR_7, struct sysctl_req *VAR_8,
                size_t *VAR_9)
{
 int VAR_10 = 0;
 struct sysctl_req VAR_11;

 do {

     VAR_11 = *VAR_8;
     if (!VAR_3)
         VAR_4[0] = '\0';

     VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_11);
 } while (VAR_10 == VAR_0);

 if (VAR_10 && VAR_10 != VAR_1)
  return (VAR_10);

 if (VAR_9) {
  if (VAR_11 && VAR_11 > VAR_11)
   *VAR_9 = VAR_11;
  else
   *VAR_9 = VAR_11;
 }
 return (VAR_10);
}
