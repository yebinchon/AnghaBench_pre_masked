
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_3 = VAR_1 % FUNC_2();
 for (VAR_2 = 0; VAR_2 < FUNC_3(); VAR_2++) {
  if (FUNC_0(VAR_4)) {
   if (VAR_4 >= VAR_3)
    return VAR_4;

   VAR_4++;
  }
 }


 return FUNC_1(VAR_0);
}
