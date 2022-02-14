
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char const*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_1("Write: %s - %s\n", VAR_1, VAR_2);
 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3 == -1) {
  FUNC_0("Could not open %s\n", VAR_1);
  return -1;
 }
 if (FUNC_5(VAR_3, VAR_2, FUNC_4(VAR_2)) == -1) {
  FUNC_0("Write to %s failed\n", VAR_1);
  FUNC_2(VAR_3);
  return -1;
 };
 FUNC_2(VAR_3);
 return 0;
}
