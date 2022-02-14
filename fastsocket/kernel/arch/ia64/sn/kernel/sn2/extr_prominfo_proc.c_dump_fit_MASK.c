
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long,int,unsigned long*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3[2];
 int VAR_4;
 char *VAR_5;

 VAR_5 = VAR_1;
 for (VAR_4=0;;VAR_4++) {
  FUNC_0(VAR_4 * 60 > VAR_0);
  if (FUNC_2(VAR_2, VAR_4, VAR_3, ((void*)0), 0))
   break;
  VAR_5 += FUNC_1(VAR_5, VAR_3);
 }

 return VAR_5 - VAR_1;
}
