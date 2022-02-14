
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum TiffType { ____Placeholder_TiffType } TiffType ;
struct TYPE_3__ {int tiff_type; } ;
typedef TYPE_1__ TiffContext ;



__attribute__((used)) static void FUNC_0(TiffContext *VAR_0, enum TiffType VAR_1) {
    if (VAR_0->tiff_type < VAR_1)
        VAR_0->tiff_type = VAR_1;
}
