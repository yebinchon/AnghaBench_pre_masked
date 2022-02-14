
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AVFormatContext {int metadata_header_padding; int pb; TYPE_1__* priv_data; } ;
struct TYPE_2__ {int id3; scalar_t__ id3v2_version; int pics_to_write; } ;
typedef TYPE_1__ MP3Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct AVFormatContext*,int *) ;
 int FUNC_3 (struct AVFormatContext*) ;

__attribute__((used)) static int FUNC_4(struct AVFormatContext *VAR_1)
{
    MP3Context *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    if (VAR_2->id3v2_version) {
        FUNC_1(&VAR_2->id3, VAR_1->pb, VAR_2->id3v2_version, VAR_0);
        VAR_3 = FUNC_2(VAR_1, &VAR_2->id3);
        if (VAR_3 < 0)
            return VAR_3;
    }

    if (!VAR_2->pics_to_write) {
        if (VAR_2->id3v2_version)
            FUNC_0(&VAR_2->id3, VAR_1->pb, VAR_1->metadata_header_padding);
        FUNC_3(VAR_1);
    }

    return 0;
}
