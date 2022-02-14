
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4, unsigned long VAR_5,
      unsigned long VAR_6)
{

 VAR_3 = FUNC_1(&VAR_2);
 if (!VAR_3)
  return -1;

 for (; VAR_6 > 0; VAR_6--, VAR_4 += VAR_1, VAR_5++) {
  if (FUNC_0(VAR_4, VAR_5, VAR_0))
   return -1;
 }

 return 0;
}
