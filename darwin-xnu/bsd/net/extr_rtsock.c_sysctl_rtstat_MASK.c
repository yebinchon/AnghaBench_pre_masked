
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;
struct rtstat {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct sysctl_req *VAR_1)
{
 return (FUNC_0(VAR_1, &VAR_0, sizeof (struct rtstat)));
}
