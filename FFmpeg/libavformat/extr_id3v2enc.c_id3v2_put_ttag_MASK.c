
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef enum ID3v2Encoding { ____Placeholder_ID3v2Encoding } ID3v2Encoding ;
struct TYPE_3__ {int version; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(ID3v2EncContext *VAR_4, AVIOContext *VAR_5, const char *VAR_6, const char *VAR_7,
                          uint32_t VAR_8, enum ID3v2Encoding VAR_9)
{
    int VAR_10;
    uint8_t *VAR_11;
    AVIOContext *VAR_12;
    if (FUNC_3(&VAR_12) < 0)
        return FUNC_0(VAR_0);



    if (VAR_9 == VAR_2 && FUNC_10(VAR_6) &&
        (!VAR_7 || FUNC_10(VAR_7)))
        VAR_9 = VAR_1;

    FUNC_4(VAR_12, VAR_9);
    FUNC_8(VAR_12, VAR_6, VAR_9);
    if (VAR_7)
        FUNC_8(VAR_12, VAR_7, VAR_9);
    VAR_10 = FUNC_2(VAR_12, &VAR_11);

    FUNC_6(VAR_5, VAR_8);

    if (VAR_4->version == 3)
        FUNC_6(VAR_5, VAR_10);
    else
        FUNC_9(VAR_5, VAR_10);
    FUNC_5(VAR_5, 0);
    FUNC_7(VAR_5, VAR_11, VAR_10);

    FUNC_1(&VAR_11);
    return VAR_10 + VAR_3;
}
