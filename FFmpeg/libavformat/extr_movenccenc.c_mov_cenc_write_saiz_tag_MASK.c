
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int auxiliary_info_entries; int auxiliary_info_sizes; scalar_t__ use_subsamples; } ;
typedef TYPE_1__ MOVMuxCencContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(MOVMuxCencContext* VAR_1, AVIOContext *VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_2);
    FUNC_2(VAR_2, 0);
    FUNC_4(VAR_2, "saiz");
    FUNC_2(VAR_2, 0);
    FUNC_1(VAR_2, VAR_1->use_subsamples ? 0 : VAR_0);
    FUNC_2(VAR_2, VAR_1->auxiliary_info_entries);
    if (VAR_1->use_subsamples) {
        FUNC_3(VAR_2, VAR_1->auxiliary_info_sizes, VAR_1->auxiliary_info_entries);
    }
    return FUNC_5(VAR_2, VAR_3);
}
