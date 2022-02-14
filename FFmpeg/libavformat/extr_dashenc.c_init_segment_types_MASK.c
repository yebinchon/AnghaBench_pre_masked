
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_2__** streams; TYPE_4__* priv_data; } ;
struct TYPE_11__ {scalar_t__ hls_playlist; int single_file; int segment_type_option; TYPE_3__* streams; } ;
struct TYPE_10__ {int extension_name; int format_name; scalar_t__ segment_type; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int codec_id; } ;
typedef scalar_t__ SegmentType ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ DASHContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4)
{
    DASHContext *VAR_5 = VAR_4->priv_data;
    int VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_4->nb_streams; ++VAR_7) {
        OutputStream *VAR_8 = &VAR_5->streams[VAR_7];
        SegmentType VAR_9 = FUNC_3(
            VAR_5->segment_type_option, VAR_4->streams[VAR_7]->codecpar->codec_id);
        VAR_8->segment_type = VAR_9;
        VAR_8->format_name = FUNC_2(VAR_9);
        if (!VAR_8->format_name) {
            FUNC_0(VAR_4, VAR_1, "Could not select DASH segment type for stream %d\n", VAR_7);
            return VAR_0;
        }
        VAR_8->extension_name = FUNC_1(VAR_9, VAR_5->single_file);
        if (!VAR_8->extension_name) {
            FUNC_0(VAR_4, VAR_1, "Could not get extension type for stream %d\n", VAR_7);
            return VAR_0;
        }

        VAR_6 |= VAR_9 == VAR_3;
    }

    if (VAR_5->hls_playlist && !VAR_6) {
         FUNC_0(VAR_4, VAR_2, "No mp4 streams, disabling HLS manifest generation\n");
         VAR_5->hls_playlist = 0;
    }

    return 0;
}
