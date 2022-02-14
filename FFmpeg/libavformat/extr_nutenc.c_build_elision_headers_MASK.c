
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int header_count; TYPE_1__ const** header; TYPE_1__* header_len; } ;
typedef TYPE_2__ NUTContext ;
typedef TYPE_3__ AVFormatContext ;



__attribute__((used)) static void FUNC_0(AVFormatContext *VAR_0)
{
    NUTContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;


    static const uint8_t VAR_3[][5] = {
        { 3, 0x00, 0x00, 0x01 },
        { 4, 0x00, 0x00, 0x01, 0xB6},
        { 2, 0xFF, 0xFA },
        { 2, 0xFF, 0xFB },
        { 2, 0xFF, 0xFC },
        { 2, 0xFF, 0xFD },
    };

    VAR_1->header_count = 7;
    for (VAR_2 = 1; VAR_2 < VAR_1->header_count; VAR_2++) {
        VAR_1->header_len[VAR_2] = VAR_3[VAR_2 - 1][0];
        VAR_1->header[VAR_2] = &VAR_3[VAR_2 - 1][1];
    }
}
