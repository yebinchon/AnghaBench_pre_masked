
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* new_extradata_size; int * new_extradata; } ;
typedef TYPE_1__ FLVContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(FLVContext *VAR_2, AVIOContext *VAR_3, int VAR_4,
                               int VAR_5)
{
    if (!VAR_5)
        return 0;

    FUNC_1(VAR_2->new_extradata[VAR_4]);
    VAR_2->new_extradata[VAR_4] = FUNC_2(VAR_5 +
                                            VAR_0);
    if (!VAR_2->new_extradata[VAR_4])
        return FUNC_0(VAR_1);
    VAR_2->new_extradata_size[VAR_4] = VAR_5;
    FUNC_3(VAR_3, VAR_2->new_extradata[VAR_4], VAR_5);
    return 0;
}
