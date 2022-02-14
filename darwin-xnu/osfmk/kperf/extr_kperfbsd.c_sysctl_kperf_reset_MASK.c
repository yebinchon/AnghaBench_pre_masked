
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;
typedef int should_reset ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sysctl_req*,int,int,int*,int *) ;

__attribute__((used)) static int
FUNC_2(struct sysctl_req *VAR_1)
{
 int VAR_2 = 0;

 int VAR_3 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_2),
  &VAR_2, ((void*)0));
 if (VAR_3) {
  return VAR_3;
 }

 if (VAR_2) {
  FUNC_0(VAR_0);
 }
 return 0;
}
