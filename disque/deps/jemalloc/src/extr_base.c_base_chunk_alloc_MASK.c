
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_node_t ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_2 ;
 void* FUNC_6 (size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,int *,void*,size_t,int,int) ;

__attribute__((used)) static extent_node_t *
FUNC_8(size_t VAR_4)
{
 extent_node_t *VAR_5;
 size_t VAR_6, VAR_7;
 void *VAR_8;

 FUNC_3(VAR_4 != 0);
 VAR_5 = FUNC_5();

 VAR_7 = (VAR_5 == ((void*)0)) ? FUNC_0(sizeof(extent_node_t)) : 0;
 VAR_6 = FUNC_1(VAR_4 + VAR_7);
 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 == ((void*)0)) {
  if (VAR_5 != ((void*)0))
   FUNC_4(VAR_5);
  return (((void*)0));
 }
 VAR_1 += VAR_6;
 if (VAR_5 == ((void*)0)) {
  VAR_5 = (extent_node_t *)VAR_8;
  VAR_8 = (void *)((uintptr_t)VAR_8 + VAR_7);
  VAR_6 -= VAR_7;
  if (VAR_3) {
   VAR_0 += VAR_7;
   VAR_2 += FUNC_2(VAR_7);
  }
 }
 FUNC_7(VAR_5, ((void*)0), VAR_8, VAR_6, 1, 1);
 return (VAR_5);
}
