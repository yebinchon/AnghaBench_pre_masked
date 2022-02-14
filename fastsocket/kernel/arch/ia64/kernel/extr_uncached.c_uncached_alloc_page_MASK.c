
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_pool {int * pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct uncached_pool*,int) ;
 struct uncached_pool* VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

unsigned long FUNC_5(int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct uncached_pool *VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_4 >= VAR_0))
  return 0;

 if (VAR_4 < 0)
  VAR_4 = FUNC_2();
 VAR_8 = VAR_4;

 do {
  if (!FUNC_1(VAR_8, VAR_1))
   continue;
  VAR_7 = &VAR_3[VAR_8];
  if (VAR_7->pool == ((void*)0))
   continue;
  do {
   VAR_6 = FUNC_0(VAR_7->pool,
       VAR_5 * VAR_2);
   if (VAR_6 != 0)
    return VAR_6;
  } while (FUNC_3(VAR_7, VAR_8) == 0);

 } while ((VAR_8 = (VAR_8 + 1) % VAR_0) != VAR_4);

 return 0;
}
