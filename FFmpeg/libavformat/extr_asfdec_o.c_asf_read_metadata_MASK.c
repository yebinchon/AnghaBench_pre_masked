
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int metadata; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,unsigned char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *,int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, const char *VAR_2, uint16_t VAR_3,
                             unsigned char *VAR_4, uint16_t VAR_5)
{
    AVIOContext *VAR_6 = VAR_1->pb;

    FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
    if (VAR_4[0]) {
        if (FUNC_0(&VAR_1->metadata, VAR_2, VAR_4, 0) < 0)
            FUNC_1(VAR_1, VAR_0, "av_dict_set failed.\n");
    }

    return 0;
}
