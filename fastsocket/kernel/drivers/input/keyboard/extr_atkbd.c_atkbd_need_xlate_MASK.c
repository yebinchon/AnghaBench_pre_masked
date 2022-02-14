
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int,unsigned long*) ;
 unsigned char* VAR_2 ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3, unsigned char VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_4 == VAR_2[VAR_5])
   return FUNC_1(VAR_5, &VAR_3);

 return 1;
}
