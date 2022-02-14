
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2()
{
 int VAR_3;

 VAR_3 = 0;
 if (VAR_2 >= 0)
 {
  VAR_3 = FUNC_1();
  if (FUNC_0(VAR_2) != 0)
  {
   VAR_3 += VAR_1 != 0 ? VAR_1 : VAR_0;
  }
  VAR_2 = -1;
 }

 return VAR_3;
}
