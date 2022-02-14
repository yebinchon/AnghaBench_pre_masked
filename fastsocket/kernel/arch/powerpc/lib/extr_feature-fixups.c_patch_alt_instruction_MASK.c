
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(unsigned int *VAR_0, unsigned int *VAR_1,
     unsigned int *VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = *VAR_0;

 if (FUNC_1(*VAR_0)) {
  unsigned int *VAR_5 = (unsigned int *)FUNC_0(VAR_0);


  if (VAR_5 < VAR_2 || VAR_5 >= VAR_3) {
   VAR_4 = FUNC_3(VAR_1, VAR_0);
   if (!VAR_4)
    return 1;
  }
 }

 FUNC_2(VAR_1, VAR_4);

 return 0;
}
