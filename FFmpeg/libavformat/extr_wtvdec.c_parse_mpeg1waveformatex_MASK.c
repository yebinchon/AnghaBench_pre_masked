
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int channels; int channel_layout; scalar_t__ extradata; int bit_rate; int codec_id; } ;
typedef TYPE_2__ AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(AVStream *VAR_5)
{

    switch (FUNC_0(VAR_5->codecpar->extradata)) {
    case 0x0001 : VAR_5->codecpar->codec_id = VAR_2; break;
    case 0x0002 : VAR_5->codecpar->codec_id = VAR_3; break;
    case 0x0004 : VAR_5->codecpar->codec_id = VAR_4; break;
    }

    VAR_5->codecpar->bit_rate = FUNC_1(VAR_5->codecpar->extradata + 2);


    switch (FUNC_0(VAR_5->codecpar->extradata + 6)) {
    case 1 :
    case 2 :
    case 4 : VAR_5->codecpar->channels = 2;
             VAR_5->codecpar->channel_layout = VAR_1;
             break;
    case 8 : VAR_5->codecpar->channels = 1;
             VAR_5->codecpar->channel_layout = VAR_0;
             break;
    }
}
