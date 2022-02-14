
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_node_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t,size_t) ;
 size_t FUNC_3 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void const* FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,uintptr_t,int const*) ;

bool
FUNC_9(const void *VAR_6, const extent_node_t *VAR_7)
{

 FUNC_0(FUNC_4(VAR_7) == VAR_6);

 if (FUNC_8(&VAR_0, (uintptr_t)VAR_6, VAR_7))
  return (1);
 if (VAR_2 && VAR_5) {
  size_t VAR_8 = FUNC_5(VAR_7);
  size_t VAR_9 = (VAR_8 == 0) ? 1 : VAR_8 / VAR_1;
  size_t VAR_10 = FUNC_1(&VAR_3, VAR_9);
  size_t VAR_11 = FUNC_3(&VAR_4);
  while (VAR_10 > VAR_11 && FUNC_2(&VAR_4, VAR_11, VAR_10)) {




   VAR_11 = FUNC_3(&VAR_4);
  }
  if (VAR_10 > VAR_11 && FUNC_7())
   FUNC_6();
 }

 return (0);
}
