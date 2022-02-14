
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int ** mp_bh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct metapath *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->mp_bh[VAR_2] == ((void*)0))
   break;
  FUNC_0(VAR_1->mp_bh[VAR_2]);
 }
}
