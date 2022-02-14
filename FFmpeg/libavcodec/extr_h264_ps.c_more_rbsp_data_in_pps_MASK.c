
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int profile_idc; int constraint_set_flags; } ;
typedef TYPE_1__ SPS ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;

__attribute__((used)) static int FUNC_1(const SPS *VAR_1, void *VAR_2)
{
    int VAR_3 = VAR_1->profile_idc;

    if ((VAR_3 == 66 || VAR_3 == 77 ||
         VAR_3 == 88) && (VAR_1->constraint_set_flags & 7)) {
        FUNC_0(VAR_2, VAR_0,
               "Current profile doesn't provide more RBSP data in PPS, skipping\n");
        return 0;
    }

    return 1;
}
