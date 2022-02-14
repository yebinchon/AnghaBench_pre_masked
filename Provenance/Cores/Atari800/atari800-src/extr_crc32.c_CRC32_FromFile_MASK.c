
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int *,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int,int,int *) ;

int FUNC_3(FILE *VAR_1, ULONG *VAR_2)
{
 UBYTE VAR_3[VAR_0];
 ULONG VAR_4 = 0xffffffff;

 for (;;) {
  size_t VAR_5 = FUNC_2(VAR_3, 1, VAR_0, VAR_1);
  VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_5);
  if (VAR_5 < VAR_0)
   break;
 }
 *VAR_2 = ~VAR_4;
 return FUNC_1(VAR_1);
}
