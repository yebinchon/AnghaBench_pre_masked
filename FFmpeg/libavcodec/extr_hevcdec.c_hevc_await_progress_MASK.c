
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ threads_type; } ;
struct TYPE_8__ {int tf; } ;
struct TYPE_7__ {int y; } ;
typedef TYPE_1__ Mv ;
typedef TYPE_2__ HEVCFrame ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static void FUNC_2(HEVCContext *VAR_1, HEVCFrame *VAR_2,
                                const Mv *VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_1->threads_type == VAR_0 ) {
        int VAR_6 = FUNC_0(0, (VAR_3->y >> 2) + VAR_4 + VAR_5 + 9);

        FUNC_1(&VAR_2->tf, VAR_6, 0);
    }
}
