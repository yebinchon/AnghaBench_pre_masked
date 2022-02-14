
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int ) ;
 size_t FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, char *VAR_2, int VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;

 FUNC_1("Read: %s:\n", VAR_1);
 VAR_5 = FUNC_3(VAR_1, VAR_0);
 if (VAR_5 == -1) {
  FUNC_0("open %s failed\n", VAR_1);
  return -1;
 }
 VAR_4 = FUNC_4(VAR_5, VAR_2, VAR_3 - 1);
 if (VAR_4 < 0) {
  FUNC_0("read %s failed\n", VAR_1);
  FUNC_2(VAR_5);
  return -1;
 }
 VAR_2[VAR_4] = 0;
 if (VAR_2[FUNC_5(VAR_2) - 1] == '\n')
  VAR_2[FUNC_5(VAR_2) - 1] = 0;
 FUNC_2(VAR_5);
 FUNC_1("'%s'\n", VAR_2);

 return 0;
}
