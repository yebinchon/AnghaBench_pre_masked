
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, unsigned int VAR_4,
                                    unsigned int VAR_5, const char *VAR_6)
{
    AVIOContext *VAR_7 = VAR_3->pb;
    char *VAR_8;
    int VAR_9;

    FUNC_5(VAR_7, VAR_4, VAR_2);

    VAR_8 = FUNC_3(VAR_5 + 1);
    if (!VAR_8)
        return FUNC_0(VAR_1);

    VAR_9 = FUNC_4(VAR_3->pb, VAR_8, VAR_5);
    if (VAR_9 < VAR_5) {
        VAR_9 = VAR_9 < 0 ? VAR_9 : VAR_0;
        goto exit;
    }

    VAR_9 = FUNC_1(&VAR_3->metadata, VAR_6, VAR_8, 0);

exit:
    FUNC_2(VAR_8);
    return VAR_9;
}
