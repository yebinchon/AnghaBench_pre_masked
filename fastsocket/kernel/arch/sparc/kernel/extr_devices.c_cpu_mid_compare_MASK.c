
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = (int) VAR_5;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, FUNC_0(), 0);
 if (VAR_7 == VAR_6
     || (VAR_1 == VAR_2 && (VAR_7 & 3) == VAR_6))
  return 0;
 return -VAR_0;
}
