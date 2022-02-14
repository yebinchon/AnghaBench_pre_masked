
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * streams; } ;
struct TYPE_8__ {int channels; scalar_t__ interleaving; scalar_t__ crc; int octet_align; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_1__*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                              PayloadContext *VAR_4, const char *VAR_5)
{
    const char *VAR_6;
    int VAR_7;

    if (VAR_3 < 0)
        return 0;






    if (FUNC_1(VAR_5, "fmtp:", &VAR_6)) {
        VAR_7 = FUNC_2(VAR_2, VAR_2->streams[VAR_3], VAR_4, VAR_6, VAR_1);
        if (!VAR_4->octet_align || VAR_4->crc ||
            VAR_4->interleaving || VAR_4->channels != 1) {
            FUNC_0(VAR_2, VAR_0, "Unsupported RTP/AMR configuration!\n");
            return -1;
        }
        return VAR_7;
    }
    return 0;
}
