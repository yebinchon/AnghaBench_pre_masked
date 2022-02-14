
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, 1);
 VAR_5 += FUNC_1(VAR_0, 1);
 VAR_5 += FUNC_1(VAR_2, 1);
 if (FUNC_0() > VAR_3) {
  VAR_5 += FUNC_1(VAR_0, 3);
  VAR_5 += FUNC_1(VAR_1, 1);
 }

 return VAR_5;
}
