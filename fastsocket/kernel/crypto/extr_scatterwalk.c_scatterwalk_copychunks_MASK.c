
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatter_walk {int dummy; } ;


 int FUNC_0 (void*,int *,unsigned int,int) ;
 int FUNC_1 (struct scatter_walk*,unsigned int) ;
 int * FUNC_2 (struct scatter_walk*,int) ;
 int FUNC_3 (struct scatter_walk*,int,int) ;
 unsigned int FUNC_4 (struct scatter_walk*) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(void *VAR_0, struct scatter_walk *VAR_1,
       size_t VAR_2, int VAR_3)
{
 for (;;) {
  unsigned int VAR_4 = FUNC_4(VAR_1);
  u8 *VAR_5;

  if (VAR_4 > VAR_2)
   VAR_4 = VAR_2;

  VAR_5 = FUNC_2(VAR_1, VAR_3);
  FUNC_0(VAR_0, VAR_5, VAR_4, VAR_3);
  FUNC_5(VAR_5, VAR_3);

  FUNC_1(VAR_1, VAR_4);

  if (VAR_2 == VAR_4)
   break;

  VAR_0 += VAR_4;
  VAR_2 -= VAR_4;

  FUNC_3(VAR_1, VAR_3, 1);
 }
}
