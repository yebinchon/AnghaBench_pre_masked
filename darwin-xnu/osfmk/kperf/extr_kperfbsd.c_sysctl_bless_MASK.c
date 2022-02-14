
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct sysctl_req {int newptr; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sysctl_req*,int,int,int*,int *) ;

__attribute__((used)) static int
FUNC_3(struct sysctl_req *VAR_0)
{
 int VAR_1 = FUNC_0();
 int VAR_2 = FUNC_2(VAR_0, VAR_1, sizeof(VAR_1), &VAR_1, ((void*)0));

 if (VAR_2 || !VAR_0->newptr) {
  return VAR_2;
 }

 return FUNC_1(VAR_1);
}
