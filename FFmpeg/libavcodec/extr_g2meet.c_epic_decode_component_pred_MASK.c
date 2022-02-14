
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unsigned_rung; int els_ctx; } ;
typedef TYPE_1__ ePICContext ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static inline int FUNC_3(ePICContext *VAR_0,
                                             int VAR_1, int VAR_2, int VAR_3)
{
    unsigned VAR_4 = FUNC_1(&VAR_0->els_ctx, &VAR_0->unsigned_rung);
    return FUNC_2(VAR_1, VAR_1 + VAR_2 - VAR_3, VAR_2) - FUNC_0(VAR_4);
}
