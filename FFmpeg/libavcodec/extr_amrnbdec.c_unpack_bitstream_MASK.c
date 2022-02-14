
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_3__ {int bad_frame_indicator; int frame; } ;
typedef int AMRNBFrame ;
typedef TYPE_1__ AMRContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int,int const*,int ) ;
 int* VAR_4 ;

__attribute__((used)) static enum Mode FUNC_1(AMRContext *VAR_5, const uint8_t *VAR_6,
                                  int VAR_7)
{
    enum Mode VAR_8;


    VAR_8 = VAR_6[0] >> 3 & 0x0F;
    VAR_5->bad_frame_indicator = (VAR_6[0] & 0x4) != 0x4;

    if (VAR_8 >= VAR_2 || VAR_7 < VAR_4[VAR_8] + 1) {
        return VAR_1;
    }

    if (VAR_8 < VAR_0)
        FUNC_0((uint16_t *) &VAR_5->frame, sizeof(AMRNBFrame), VAR_6 + 1,
                           VAR_3[VAR_8]);

    return VAR_8;
}
