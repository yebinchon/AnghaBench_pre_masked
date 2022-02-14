
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int* data; } ;
struct TYPE_7__ {int pkt_offset; int data_type; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int ** VAR_4 ;
 int** VAR_5 ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    IEC61937Context *VAR_8 = VAR_6->priv_data;
    int VAR_9 = (VAR_7->data[1] >> 3) & 3;
    int VAR_10 = 3 - ((VAR_7->data[1] >> 1) & 3);
    int VAR_11 = VAR_7->data[2] & 1;

    if (VAR_10 == 3 || VAR_9 == 1) {
        FUNC_0(VAR_6, VAR_2, "Wrong MPEG file format\n");
        return VAR_0;
    }
    FUNC_0(VAR_6, VAR_1, "version: %i layer: %i extension: %i\n", VAR_9, VAR_10, VAR_11);
    if (VAR_9 == 2 && VAR_11) {
        VAR_8->data_type = VAR_3;
        VAR_8->pkt_offset = 4608;
    } else {
        VAR_8->data_type = VAR_4 [VAR_9 & 1][VAR_10];
        VAR_8->pkt_offset = VAR_5[VAR_9 & 1][VAR_10];
    }

    return 0;
}
