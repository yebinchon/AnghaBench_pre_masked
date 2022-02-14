
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysctl_req {int dummy; } ;
struct sysctl_oid {int dummy; } ;


 int FUNC_0 (struct sysctl_oid*,int *,int ,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_1( struct sysctl_oid *VAR_0, struct sysctl_req *VAR_1,
                uint32_t VAR_2 )
{
 int VAR_3 = 0;


 VAR_3 = FUNC_0(VAR_0, &VAR_2, 0, VAR_1);

 return VAR_3;
}
