
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int pb; int * priv_data; } ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int pid; int cc; scalar_t__ discontinuity; } ;
typedef TYPE_1__ MpegTSWriteStream ;
typedef int MpegTSWrite ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, AVStream *VAR_2)
{
    MpegTSWrite *VAR_3 = VAR_1->priv_data;
    MpegTSWriteStream *VAR_4 = VAR_2->priv_data;
    uint8_t *VAR_5;
    uint8_t VAR_6[VAR_0];

    VAR_5 = VAR_6;
    *VAR_5++ = 0x47;
    *VAR_5++ = VAR_4->pid >> 8;
    *VAR_5++ = VAR_4->pid;
    *VAR_5++ = 0x20 | VAR_4->cc;

    *VAR_5++ = VAR_0 - 5;
    *VAR_5++ = 0x10;
    if (VAR_4->discontinuity) {
        VAR_5[-1] |= 0x80;
        VAR_4->discontinuity = 0;
    }


    VAR_5 += FUNC_4(VAR_5, FUNC_1(VAR_3, VAR_1->pb));


    FUNC_2(VAR_5, 0xFF, VAR_0 - (VAR_5 - VAR_6));
    FUNC_3(VAR_1);
    FUNC_0(VAR_1->pb, VAR_6, VAR_0);
}
