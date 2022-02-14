
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_0 (struct s35390a*,int ,char*,int) ;
 int FUNC_1 (struct s35390a*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct s35390a *VAR_6)
{
 char VAR_7[1];

 if (FUNC_0(VAR_6, VAR_1, VAR_7, sizeof(VAR_7)) < 0)
  return -VAR_0;

 if (!(VAR_7[0] & (VAR_4 | VAR_3)))
  return 0;

 VAR_7[0] |= (VAR_5 | VAR_2);
 VAR_7[0] &= 0xf0;
 return FUNC_1(VAR_6, VAR_1, VAR_7, sizeof(VAR_7));
}
