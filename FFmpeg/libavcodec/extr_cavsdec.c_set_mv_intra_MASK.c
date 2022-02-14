
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {size_t mbidx; int * col_type_base; TYPE_2__ cur; void** mv; } ;
struct TYPE_5__ {scalar_t__ pict_type; } ;
typedef TYPE_3__ AVSContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (void**,int ) ;

__attribute__((used)) static inline void FUNC_1(AVSContext *VAR_6)
{
    VAR_6->mv[VAR_4] = VAR_5;
    FUNC_0(&VAR_6->mv[VAR_4], VAR_1);
    VAR_6->mv[VAR_3] = VAR_5;
    FUNC_0(&VAR_6->mv[VAR_3], VAR_1);
    if (VAR_6->cur.f->pict_type != VAR_0)
        VAR_6->col_type_base[VAR_6->mbidx] = VAR_2;
}
