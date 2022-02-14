
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int metadata; int * pb; } ;
struct TYPE_5__ {int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (char**) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5, AVStream *VAR_6, uint32_t VAR_7,
                        uint32_t VAR_8)
{
    AVIOContext *VAR_9 = VAR_5->pb;
    char VAR_10[5] = { 0 };
    char *VAR_11;

    VAR_8 += (VAR_8 & 1);

    if (VAR_8 == VAR_4)
        return FUNC_0(VAR_2);
    VAR_11 = FUNC_4(VAR_8 + 1);
    if (!VAR_11)
        return FUNC_0(VAR_3);
    if (FUNC_5(VAR_9, VAR_11, VAR_8) != VAR_8) {
        FUNC_3(&VAR_11);
        return VAR_0;
    }
    VAR_11[VAR_8] = 0;

    FUNC_1(VAR_10, VAR_7);

    return FUNC_2(VAR_6 ? &VAR_6->metadata : &VAR_5->metadata, VAR_10, VAR_11,
                       VAR_1);
}
