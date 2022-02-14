
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int debug_matches; } ;
struct TYPE_5__ {int matches; } ;
typedef TYPE_1__ DebugMatches ;
typedef TYPE_2__ AbsoluteFrameMotion ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AbsoluteFrameMotion *VAR_0) {
    DebugMatches VAR_1;

    if (!VAR_0->debug_matches) {
        return;
    }

    while (FUNC_2(VAR_0->debug_matches) > 0) {
        FUNC_1(
            VAR_0->debug_matches,
            &VAR_1,
            sizeof(DebugMatches),
            ((void*)0)
        );

        FUNC_3(&VAR_1.matches);
    }

    FUNC_0(&VAR_0->debug_matches);
}
