
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ref_idc; void* type; int gb; } ;
typedef TYPE_1__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*,void*,int ,void*) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(H2645NAL *VAR_2, void *VAR_3)
{
    GetBitContext *VAR_4 = &VAR_2->gb;

    if (FUNC_2(VAR_4) != 0)
        return VAR_0;

    VAR_2->ref_idc = FUNC_1(VAR_4, 2);
    VAR_2->type = FUNC_1(VAR_4, 5);

    FUNC_0(VAR_3, VAR_1,
           "nal_unit_type: %d(%s), nal_ref_idc: %d\n",
           VAR_2->type, FUNC_3(VAR_2->type), VAR_2->ref_idc);

    return 1;
}
