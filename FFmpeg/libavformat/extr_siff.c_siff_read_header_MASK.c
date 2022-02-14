
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int * priv_data; int * pb; } ;
typedef int SIFFContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5)
{
    AVIOContext *VAR_6 = VAR_5->pb;
    SIFFContext *VAR_7 = VAR_5->priv_data;
    uint32_t VAR_8;
    int VAR_9;

    if (FUNC_2(VAR_6) != VAR_2)
        return VAR_0;
    FUNC_3(VAR_6, 4);
    VAR_8 = FUNC_2(VAR_6);

    if (VAR_8 != VAR_4 && VAR_8 != VAR_3) {
        FUNC_1(VAR_5, VAR_1, "Not a VBV file\n");
        return VAR_0;
    }

    if (VAR_8 == VAR_4 && (VAR_9 = FUNC_5(VAR_5, VAR_7, VAR_6)) < 0)
        return VAR_9;
    if (VAR_8 == VAR_3 && (VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_6)) < 0)
        return VAR_9;
    if (FUNC_2(VAR_6) != FUNC_0('B', 'O', 'D', 'Y')) {
        FUNC_1(VAR_5, VAR_1, "'BODY' chunk is missing\n");
        return VAR_0;
    }
    FUNC_3(VAR_6, 4);

    return 0;
}
