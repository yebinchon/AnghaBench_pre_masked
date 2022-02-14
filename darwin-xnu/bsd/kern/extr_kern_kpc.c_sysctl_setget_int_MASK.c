
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct sysctl_req {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,int*,int) ;
 int FUNC_1 (struct sysctl_req*,int*,int) ;

__attribute__((used)) static int
FUNC_2( struct sysctl_req *VAR_0,
                   int (*VAR_1)(int) )
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 VAR_2 = FUNC_0( VAR_0, &VAR_3, sizeof(VAR_3) );
 if( VAR_2 )
  return VAR_2;

 VAR_3 = VAR_1(VAR_3);

 VAR_2 = FUNC_1( VAR_0, &VAR_3, sizeof(VAR_3) );

 return VAR_2;
}
