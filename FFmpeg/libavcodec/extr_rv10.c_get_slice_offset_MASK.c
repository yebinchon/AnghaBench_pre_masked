
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* slice_offset; scalar_t__ slice_count; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    if (VAR_0->slice_count)
        return VAR_0->slice_offset[VAR_2];
    else
        return FUNC_0(VAR_1 + VAR_2 * 8);
}
