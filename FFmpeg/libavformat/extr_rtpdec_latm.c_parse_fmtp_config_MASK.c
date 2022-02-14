
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int extradata_size; void** extradata; } ;
struct TYPE_4__ {TYPE_3__* codecpar; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void***) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,int,int,int,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *,char const*) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(AVStream *VAR_3, const char *VAR_4)
{
    int VAR_5 = FUNC_6(((void*)0), VAR_4), VAR_6, VAR_7 = 0;
    GetBitContext VAR_8;
    uint8_t *VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;


    VAR_9 = FUNC_3(VAR_5 + VAR_1);
    if (!VAR_9)
        return FUNC_0(VAR_2);
    FUNC_6(VAR_9, VAR_4);
    FUNC_9(&VAR_8, VAR_9, VAR_5*8);
    VAR_10 = FUNC_7(&VAR_8, 1);
    VAR_11 = FUNC_7(&VAR_8, 1);
    FUNC_10(&VAR_8, 6);
    VAR_12 = FUNC_7(&VAR_8, 4);
    VAR_13 = FUNC_7(&VAR_8, 3);
    if (VAR_10 != 0 || VAR_11 != 1 || VAR_12 != 0 ||
        VAR_13 != 0) {
        FUNC_4(((void*)0), "LATM config (%d,%d,%d,%d)",
                                      VAR_10, VAR_11,
                                      VAR_12, VAR_13);
        VAR_7 = VAR_0;
        goto end;
    }
    FUNC_2(&VAR_3->codecpar->extradata);
    if (FUNC_5(VAR_3->codecpar, (FUNC_8(&VAR_8) + 7)/8)) {
        VAR_7 = FUNC_0(VAR_2);
        goto end;
    }
    for (VAR_6 = 0; VAR_6 < VAR_3->codecpar->extradata_size; VAR_6++)
        VAR_3->codecpar->extradata[VAR_6] = FUNC_7(&VAR_8, 8);

end:
    FUNC_1(VAR_9);
    return VAR_7;
}
