
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kernel_param {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*,int) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_0, struct kernel_param *VAR_1)
{
 char VAR_2[64+12+12], *VAR_3 = VAR_2;
 char *VAR_4[3];
 char *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_8(VAR_0, sizeof(VAR_2)) >= sizeof(VAR_2))
  FUNC_2("parameter too long\n");

 FUNC_7(VAR_3, VAR_0);
 FUNC_1(VAR_3);

 for (VAR_8=0; VAR_8<3; VAR_8++)
  VAR_4[VAR_8] = FUNC_9(&VAR_3, ",");

 if (VAR_3)
  FUNC_2("too many arguments\n");

 if (!VAR_4[2])
  FUNC_2("not enough arguments\n");

 VAR_9 = FUNC_3(&VAR_5, VAR_4[0]);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(&VAR_6, VAR_4[1]);
 if (VAR_9) {
  FUNC_0(VAR_5);
  FUNC_2("illegal start address\n");
 }

 VAR_9 = FUNC_4(&VAR_7, VAR_4[2]);
 if (VAR_9) {
  FUNC_0(VAR_5);
  FUNC_2("illegal device length\n");
 }

 VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (!VAR_9)
  FUNC_5("%s device: %#x at %#x\n", VAR_5, VAR_7, VAR_6);

 return VAR_9;
}
