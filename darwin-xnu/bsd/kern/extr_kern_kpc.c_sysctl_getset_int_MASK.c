
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysctl_req {int newptr; } ;
struct sysctl_oid {int dummy; } ;


 int FUNC_0 (struct sysctl_oid*,int*,int ,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_1( struct sysctl_oid *VAR_0, struct sysctl_req *VAR_1,
                   int (*VAR_2)(void), int (*VAR_3)(int) )
{
 int VAR_4 = 0;
 uint32_t VAR_5 = 0;


 VAR_5 = VAR_2();


 VAR_4 = FUNC_0(VAR_0, &VAR_5, 0, VAR_1);
 if (VAR_4 || !VAR_1->newptr)
  return (VAR_4);


 VAR_4 = VAR_3( VAR_5 );

 return VAR_4;
}
