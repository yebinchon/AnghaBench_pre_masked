
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, struct kernel_param *VAR_6)
{
 int VAR_7 = 0;

 if (!FUNC_2(VAR_5, "enable", FUNC_1("enable") - 1)) {
  VAR_7 = FUNC_0(VAR_4, VAR_3,
       VAR_2, 0);
  if (VAR_7)
   VAR_7 = -VAR_0;
  goto exit;
 }

 if (!FUNC_2(VAR_5, "disable", FUNC_1("disable") - 1)) {
  int VAR_8 = 0;
  VAR_7 = FUNC_0((char *)&VAR_8, VAR_3,
       VAR_2, 0);
  if (VAR_7)
   VAR_7 = -VAR_0;
  goto exit;
 }

 if (!FUNC_2(VAR_5, "1", 1)) {
  VAR_7 = FUNC_0(VAR_4, VAR_3,
       VAR_2, 1);
  if (VAR_7)
   VAR_7 = -VAR_0;
  goto exit;
 }

 VAR_7 = -VAR_1;
exit:
 return VAR_7;
}
