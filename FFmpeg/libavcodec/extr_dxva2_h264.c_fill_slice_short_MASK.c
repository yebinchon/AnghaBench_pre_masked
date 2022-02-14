
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int BSNALunitDataLocation; unsigned int SliceBytesInBuffer; scalar_t__ wBadSliceChopping; } ;
typedef TYPE_1__ DXVA_Slice_H264_Short ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(DXVA_Slice_H264_Short *VAR_0,
                             unsigned VAR_1, unsigned VAR_2)
{
    FUNC_0(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->BSNALunitDataLocation = VAR_1;
    VAR_0->SliceBytesInBuffer = VAR_2;
    VAR_0->wBadSliceChopping = 0;
}
