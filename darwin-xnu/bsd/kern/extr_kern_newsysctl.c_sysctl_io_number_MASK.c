
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int oldlen; int newlen; int newptr; scalar_t__ oldptr; } ;
typedef int smallValue ;
typedef int bigValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_req*,void*,size_t) ;
 int FUNC_1 (struct sysctl_req*,...) ;

int
FUNC_2(struct sysctl_req *VAR_2, long long VAR_3, size_t VAR_4, void *VAR_5, int *VAR_6) {
 int VAR_7;
 int VAR_8;

 if (VAR_6) *VAR_6 = 0;
 if (((VAR_4 == sizeof(int)) ||
     ((VAR_2->oldlen == sizeof(int)) && (VAR_4 == sizeof(long long))))
   && (VAR_2->oldptr)) {
  VAR_7 = (int)VAR_3;
  if ((long long)VAR_7 != VAR_3)
   return(VAR_1);
  VAR_8 = FUNC_1(VAR_2, &VAR_7, sizeof(VAR_7));
 } else {

  VAR_8 = FUNC_1(VAR_2, &VAR_3, VAR_4);
 }

 if (VAR_8 || !VAR_2->newptr)
  return(VAR_8);


 if (VAR_5 == ((void*)0))
  return(VAR_0);


 if ((VAR_2->newlen == sizeof(int)) && (VAR_4 == sizeof(long long))) {

  VAR_8 = FUNC_0(VAR_2, &VAR_7, sizeof(VAR_7));
  if (!VAR_8)
   *(long long *)VAR_5 = (long long)VAR_7;
 } else if ((VAR_2->newlen == sizeof(long long)) && (VAR_4 == sizeof(int))) {

  VAR_8 = FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
  if (!VAR_8) {
   VAR_7 = (int)VAR_3;
   if ((long long)VAR_7 != VAR_3)
    return(VAR_1);
   *(int *)VAR_5 = VAR_7;
  }
 } else {

  VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_4);
 }
 if (!VAR_8 && VAR_6)
  *VAR_6 = 1;
 return(VAR_8);
}
