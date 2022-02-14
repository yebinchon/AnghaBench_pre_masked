
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int auxiliary_info_entries; int auxiliary_info_size; int auxiliary_info; scalar_t__ use_subsamples; } ;
typedef TYPE_1__ MOVMuxCencContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(MOVMuxCencContext* VAR_0, AVIOContext *VAR_1,
                                   int64_t* VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_1, 0);
    FUNC_3(VAR_1, "senc");
    FUNC_1(VAR_1, VAR_0->use_subsamples ? 0x02 : 0);
    FUNC_1(VAR_1, VAR_0->auxiliary_info_entries);
    *VAR_2 = FUNC_0(VAR_1);
    FUNC_2(VAR_1, VAR_0->auxiliary_info, VAR_0->auxiliary_info_size);
    return FUNC_4(VAR_1, VAR_3);
}
