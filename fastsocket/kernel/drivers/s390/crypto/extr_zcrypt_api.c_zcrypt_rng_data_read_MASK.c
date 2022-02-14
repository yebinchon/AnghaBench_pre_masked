
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int * VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_4, u32 *VAR_5)
{
 int VAR_6;





 if (VAR_3 == 0) {
  VAR_6 = FUNC_1((char *) VAR_2);

  if ((VAR_6 == -VAR_1) && (FUNC_0()))
   VAR_6 = FUNC_1((char *) VAR_2);
  if (VAR_6 < 0)
   return -VAR_0;
  VAR_3 = VAR_6 / sizeof *VAR_5;
 }
 *VAR_5 = VAR_2[--VAR_3];
 return sizeof *VAR_5;
}
