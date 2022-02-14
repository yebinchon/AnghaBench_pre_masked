
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lang ;
typedef int int64_t ;
struct TYPE_5__ {int * stream_languages; } ;
struct TYPE_4__ {TYPE_2__* priv_data; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,unsigned int,char*,int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, int64_t VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    ASFContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5;
    int VAR_6 = FUNC_3(VAR_2);
    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
        char VAR_7[6];
        unsigned int VAR_8 = FUNC_2(VAR_2);
        if ((VAR_5 = FUNC_1(VAR_2, VAR_8, VAR_7,
                                    sizeof(VAR_7))) < VAR_8)
            FUNC_4(VAR_2, VAR_8 - VAR_5);
        if (VAR_4 < 128)
            FUNC_0(VAR_3->stream_languages[VAR_4], VAR_7,
                       sizeof(*VAR_3->stream_languages));
    }

    return 0;
}
