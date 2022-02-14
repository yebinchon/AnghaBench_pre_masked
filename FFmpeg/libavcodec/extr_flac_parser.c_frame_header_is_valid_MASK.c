
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;
typedef int FLACFrameInfo ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1, const uint8_t *VAR_2,
                                 FLACFrameInfo *VAR_3)
{
    GetBitContext VAR_4;
    FUNC_1(&VAR_4, VAR_2, VAR_0 * 8);
    return !FUNC_0(VAR_1, &VAR_4, VAR_3, 127);
}
