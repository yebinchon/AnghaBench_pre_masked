
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct AVFormatContext {int pb; TYPE_1__* priv_data; } ;
struct TYPE_2__ {scalar_t__ xing_offset; scalar_t__ write_id3v1; scalar_t__ pics_to_write; } ;
typedef TYPE_1__ MP3Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AVFormatContext*,int ,char*) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (struct AVFormatContext*,int *) ;
 int FUNC_3 (struct AVFormatContext*) ;
 int FUNC_4 (struct AVFormatContext*) ;

__attribute__((used)) static int FUNC_5(struct AVFormatContext *VAR_2)
{
    uint8_t VAR_3[VAR_1];
    MP3Context *VAR_4 = VAR_2->priv_data;

    if (VAR_4->pics_to_write) {
        FUNC_0(VAR_2, VAR_0, "No packets were sent for some of the "
               "attached pictures.\n");
        FUNC_3(VAR_2);
    }


    if (VAR_4->write_id3v1 && FUNC_2(VAR_2, VAR_3) > 0) {
        FUNC_1(VAR_2->pb, VAR_3, VAR_1);
    }

    if (VAR_4->xing_offset)
        FUNC_4(VAR_2);

    return 0;
}
