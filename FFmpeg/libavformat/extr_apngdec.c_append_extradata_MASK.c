
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int extradata_size; int * extradata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(AVCodecParameters *VAR_4, AVIOContext *VAR_5, int VAR_6)
{
    int VAR_7 = VAR_4->extradata_size;
    int VAR_8, VAR_9;
    uint8_t *VAR_10;

    if (VAR_7 > VAR_3 - VAR_6)
        return VAR_0;

    VAR_8 = VAR_7 + VAR_6;
    VAR_10 = FUNC_1(VAR_4->extradata, VAR_8 + VAR_1);
    if (!VAR_10)
        return FUNC_0(VAR_2);
    VAR_4->extradata = VAR_10;
    VAR_4->extradata_size = VAR_8;

    if ((VAR_9 = FUNC_2(VAR_5, VAR_4->extradata + VAR_7, VAR_6)) < 0)
        return VAR_9;

    return VAR_7;
}
