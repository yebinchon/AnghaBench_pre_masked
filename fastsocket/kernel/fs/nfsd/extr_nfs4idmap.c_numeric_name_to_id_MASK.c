
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;
struct svc_rqst {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static bool
FUNC_2(struct svc_rqst *VAR_0, int VAR_1, const char *VAR_2, u32 VAR_3, uid_t *VAR_4)
{
 int VAR_5;
 char VAR_6[11];

 if (VAR_3 + 1 > sizeof(VAR_6))

  return 0;

 FUNC_0(VAR_6, VAR_2, VAR_3);
 VAR_6[VAR_3] = '\0';
 VAR_5 = FUNC_1(VAR_2, 10, (unsigned long *)VAR_4);
 return VAR_5 == 0;
}
