
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXFPktType ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, GXFPktType *VAR_1, int *VAR_2) {
    if (FUNC_1(VAR_0))
        return 0;
    if (FUNC_0(VAR_0) != 1)
        return 0;
    *VAR_1 = FUNC_0(VAR_0);
    *VAR_2 = FUNC_1(VAR_0);
    if ((*VAR_2 >> 24) || *VAR_2 < 16)
        return 0;
    *VAR_2 -= 16;
    if (FUNC_1(VAR_0))
        return 0;
    if (FUNC_0(VAR_0) != 0xe1)
        return 0;
    if (FUNC_0(VAR_0) != 0xe2)
        return 0;
    return 1;
}
