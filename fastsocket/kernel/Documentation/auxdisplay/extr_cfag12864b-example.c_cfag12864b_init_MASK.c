
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_8)
{
 VAR_6 = FUNC_2(VAR_8, VAR_3);
 if (VAR_6 == -1)
  return -1;

 VAR_7 = FUNC_1(0, VAR_0, VAR_4 | VAR_5,
  VAR_2, VAR_6, 0);
 if (VAR_7 == VAR_1) {
  FUNC_0(VAR_6);
  return -2;
 }

 return 0;
}
