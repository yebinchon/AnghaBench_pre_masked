
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct AVFormatContext {int metadata_header_padding; int pb; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ ID3v2EncContext ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,char const*) ;
 int FUNC_2 (struct AVFormatContext*,TYPE_1__*) ;

int FUNC_3(struct AVFormatContext *VAR_0, int VAR_1,
                          const char *VAR_2)
{
    ID3v2EncContext VAR_3 = { 0 };
    int VAR_4;

    FUNC_1(&VAR_3, VAR_0->pb, VAR_1, VAR_2);
    if ((VAR_4 = FUNC_2(VAR_0, &VAR_3)) < 0)
        return VAR_4;
    FUNC_0(&VAR_3, VAR_0->pb, VAR_0->metadata_header_padding);

    return 0;
}
