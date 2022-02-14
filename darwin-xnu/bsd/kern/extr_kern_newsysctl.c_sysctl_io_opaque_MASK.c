
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int newptr; } ;


 int FUNC_0 (struct sysctl_req*,void*,size_t) ;
 int FUNC_1 (struct sysctl_req*,void*,size_t) ;

int FUNC_2(struct sysctl_req *VAR_0,void *VAR_1, size_t VAR_2, int *VAR_3)
{
 int VAR_4;

 if (VAR_3) *VAR_3 = 0;


 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);


 if (VAR_4 || !VAR_0->newptr)
  return(VAR_4);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (!VAR_4 && VAR_3)
  *VAR_3 = 1;
 return(VAR_4);
}
