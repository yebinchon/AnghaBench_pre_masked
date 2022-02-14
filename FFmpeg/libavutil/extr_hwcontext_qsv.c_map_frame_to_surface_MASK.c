
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int TimeStamp; int Pitch; int A; int R; int G; int B; int V; int U; int Y; int UV; } ;
struct TYPE_7__ {TYPE_1__ Data; } ;
typedef TYPE_2__ mfxFrameSurface1 ;
struct TYPE_8__ {int format; int pts; int * linesize; int * data; } ;
typedef TYPE_3__ AVFrame ;






 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVFrame *VAR_1, mfxFrameSurface1 *VAR_2)
{
    switch (VAR_1->format) {
    case 130:
    case 129:
        VAR_2->Data.Y = VAR_1->data[0];
        VAR_2->Data.UV = VAR_1->data[1];
        break;

    case 128:
        VAR_2->Data.Y = VAR_1->data[0];
        VAR_2->Data.U = VAR_1->data[1];
        VAR_2->Data.V = VAR_1->data[2];
        break;

    case 131:
        VAR_2->Data.B = VAR_1->data[0];
        VAR_2->Data.G = VAR_1->data[0] + 1;
        VAR_2->Data.R = VAR_1->data[0] + 2;
        VAR_2->Data.A = VAR_1->data[0] + 3;
        break;

    default:
        return VAR_0;
    }
    VAR_2->Data.Pitch = VAR_1->linesize[0];
    VAR_2->Data.TimeStamp = VAR_1->pts;

    return 0;
}
