
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,struct stat*) ;

void
FUNC_6(const char * VAR_2)
{
 struct stat VAR_3;
 int VAR_4 = 0;
 VAR_1 = 0;
 VAR_4 = FUNC_5(VAR_2, &VAR_3);
 if (VAR_4 == 0) {

  FUNC_3(FUNC_0(VAR_3.st_mode), "ensure %s is a fifo", VAR_2);
 } else if (VAR_1 == VAR_0) {
  VAR_4 = FUNC_4(VAR_2, 0777);
  FUNC_2(VAR_4, "creating a fifo at path %s", VAR_2);
 } else {
  FUNC_1("stat operation on %s", VAR_2);
 }
}
