
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, char **VAR_4, off_t VAR_5,
  int VAR_6, int *VAR_7, void *VAR_8)
{


 if (VAR_6 < 2)
  return -VAR_1;

 if (FUNC_1()) {
  return FUNC_2(VAR_3, "%d\n",
    (FUNC_0(VAR_2) & VAR_0) ? 1 : 0);
 }

 return 0;
}
