
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ ldt; } ;
typedef TYPE_1__ mm_context_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (scalar_t__,int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(mm_context_t *VAR_1, mm_context_t *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2->size, 0);
 int VAR_4;

 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++)
  FUNC_1(VAR_1->ldt, VAR_4, VAR_2->ldt + VAR_4 * VAR_0);
 return 0;
}
