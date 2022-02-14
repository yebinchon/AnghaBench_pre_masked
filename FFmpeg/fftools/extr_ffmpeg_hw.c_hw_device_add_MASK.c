
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWDevice ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int ***,int,int) ;
 int ** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HWDevice *FUNC_2(void)
{
    int VAR_2;
    VAR_2 = FUNC_1(&VAR_0, VAR_1 + 1,
                            sizeof(*VAR_0));
    if (VAR_2) {
        VAR_1 = 0;
        return ((void*)0);
    }
    VAR_0[VAR_1] = FUNC_0(sizeof(HWDevice));
    if (!VAR_0[VAR_1])
        return ((void*)0);
    return VAR_0[VAR_1++];
}
