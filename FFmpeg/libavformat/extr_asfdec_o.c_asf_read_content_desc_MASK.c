
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int * pb; TYPE_2__* priv_data; } ;
typedef int GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char const* const,int,int *,int) ;
 int FUNC_3 (int **) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, const GUIDParseTable *VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;
    int VAR_5;
    static const char *const VAR_6[] =
    { "Title", "Author", "Copyright", "Description", "Rate" };
    uint16_t VAR_7[5], VAR_8[5] = { 0 };
    uint8_t *VAR_9;
    uint64_t VAR_10 = FUNC_6(VAR_4);

    for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
        VAR_7[VAR_5] = FUNC_5(VAR_4);

        VAR_8[VAR_5] = 2 * VAR_7[VAR_5] + 1;
    }

    for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
        VAR_9 = FUNC_4(VAR_8[VAR_5]);
        if (!VAR_9)
            return(FUNC_0(VAR_0));
        FUNC_2(VAR_1, VAR_6[VAR_5], VAR_7[VAR_5], VAR_9, VAR_8[VAR_5]);
        FUNC_3(&VAR_9);
    }
    FUNC_1(VAR_4, VAR_3->offset, VAR_10);

    return 0;
}
