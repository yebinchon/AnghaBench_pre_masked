
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ff_asf_guid ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(AVIOContext *VAR_1, ff_asf_guid *VAR_2)
{
    int VAR_3;
    FUNC_0(sizeof(*VAR_2) == 16);
    VAR_3 = FUNC_1(VAR_1, *VAR_2, sizeof(*VAR_2));
    if (VAR_3 < (int)sizeof(*VAR_2)) {
        FUNC_2(*VAR_2, 0, sizeof(*VAR_2));
        return VAR_3 < 0 ? VAR_3 : VAR_0;
    }
    return 0;
}
