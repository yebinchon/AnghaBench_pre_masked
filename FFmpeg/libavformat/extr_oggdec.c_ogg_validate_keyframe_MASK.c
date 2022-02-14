
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ogg_stream {int pflags; int* buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_8__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int codec_id; } ;
typedef TYPE_3__ AVFormatContext ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    struct ogg *VAR_6 = VAR_2->priv_data;
    struct ogg_stream *VAR_7 = VAR_6->streams + VAR_3;
    int VAR_8 = 0;
    if (VAR_5) {
        switch (VAR_2->streams[VAR_3]->codecpar->codec_id) {
        case 129:
            VAR_8 = !!(VAR_7->pflags & VAR_1) != !(VAR_7->buf[VAR_4] & 0x40);
        break;
        case 128:
            VAR_8 = !!(VAR_7->pflags & VAR_1) != !(VAR_7->buf[VAR_4] & 1);
        }
        if (VAR_8) {
            VAR_7->pflags ^= VAR_1;
            FUNC_0(VAR_2, VAR_0, "Broken file, %skeyframe not correctly marked.\n",
                   (VAR_7->pflags & VAR_1) ? "" : "non-");
        }
    }
}
