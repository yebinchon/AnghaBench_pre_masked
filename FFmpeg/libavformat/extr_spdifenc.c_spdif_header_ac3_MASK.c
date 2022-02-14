
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* data; } ;
struct TYPE_6__ {int data_type; int pkt_offset; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    IEC61937Context *VAR_4 = VAR_2->priv_data;
    int VAR_5 = VAR_3->data[5] & 0x7;

    VAR_4->data_type = VAR_1 | (VAR_5 << 8);
    VAR_4->pkt_offset = VAR_0 << 2;
    return 0;
}
