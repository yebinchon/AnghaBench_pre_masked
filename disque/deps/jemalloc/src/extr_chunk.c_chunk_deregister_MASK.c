
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_node_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (int const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,uintptr_t,int *) ;

void
FUNC_5(const void *VAR_5, const extent_node_t *VAR_6)
{
 bool VAR_7;

 VAR_7 = FUNC_4(&VAR_0, (uintptr_t)VAR_5, ((void*)0));
 FUNC_0(!VAR_7);
 if (VAR_2 && VAR_4) {
  size_t VAR_8 = FUNC_3(VAR_6);
  size_t VAR_9 = (VAR_8 == 0) ? 1 : VAR_8 / VAR_1;
  FUNC_0(FUNC_1(&VAR_3) >= VAR_9);
  FUNC_2(&VAR_3, VAR_9);
 }
}
