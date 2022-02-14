
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SwsContext {int dummy; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int*,int,int,int,int) ;
 int FUNC_3 (void*,int ,char*,int ,int,int,int ,int,int) ;
 int FUNC_4 (struct SwsContext*) ;
 struct SwsContext* FUNC_5 (int,int,int,int,int,int,int ,int *,int *,int *) ;
 int FUNC_6 (struct SwsContext*,int const* const*,int*,int ,int,int **,int*) ;

int FUNC_7(uint8_t *VAR_2[4], int VAR_3[4],
                   int VAR_4, int VAR_5, enum AVPixelFormat VAR_6,
                   uint8_t * const VAR_7[4], int VAR_8[4],
                   int VAR_9, int VAR_10, enum AVPixelFormat VAR_11,
                   void *VAR_12)
{
    int VAR_13;
    struct SwsContext *VAR_14 = FUNC_5(VAR_9, VAR_10, VAR_11,
                                                VAR_4, VAR_5, VAR_6,
                                                0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_14) {
        FUNC_3(VAR_12, VAR_0,
               "Impossible to create scale context for the conversion "
               "fmt:%s s:%dx%d -> fmt:%s s:%dx%d\n",
               FUNC_1(VAR_11), VAR_9, VAR_10,
               FUNC_1(VAR_6), VAR_4, VAR_5);
        VAR_13 = FUNC_0(VAR_1);
        goto end;
    }

    if ((VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 16)) < 0)
        goto end;
    VAR_13 = 0;
    FUNC_6(VAR_14, (const uint8_t * const*)VAR_7, VAR_8, 0, VAR_10, VAR_2, VAR_3);

end:
    FUNC_4(VAR_14);
    return VAR_13;
}
