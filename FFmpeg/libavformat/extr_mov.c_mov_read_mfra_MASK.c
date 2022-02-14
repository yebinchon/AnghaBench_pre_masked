
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int fc; } ;
typedef TYPE_1__ MOVContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char,float,char,char) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_5, AVIOContext *VAR_6)
{
    int64_t VAR_7 = FUNC_4(VAR_6);
    int64_t VAR_8 = FUNC_5(VAR_6);
    int64_t VAR_9;
    int32_t VAR_10;
    int VAR_11 = -1;
    if ((VAR_9 = FUNC_3(VAR_6, VAR_7 - 4, VAR_4)) < 0) {
        VAR_11 = VAR_9;
        goto fail;
    }
    VAR_10 = FUNC_2(VAR_6);
    if (VAR_10 < 0 || VAR_10 > VAR_7) {
        FUNC_1(VAR_5->fc, VAR_0, "doesn't look like mfra (unreasonable size)\n");
        goto fail;
    }
    if ((VAR_9 = FUNC_3(VAR_6, -VAR_10, VAR_3)) < 0) {
        VAR_11 = VAR_9;
        goto fail;
    }
    if (FUNC_2(VAR_6) != VAR_10) {
        FUNC_1(VAR_5->fc, VAR_0, "doesn't look like mfra (size mismatch)\n");
        goto fail;
    }
    if (FUNC_2(VAR_6) != FUNC_0('m', 'f', 'r', 'a')) {
        FUNC_1(VAR_5->fc, VAR_0, "doesn't look like mfra (tag mismatch)\n");
        goto fail;
    }
    FUNC_1(VAR_5->fc, VAR_2, "stream has mfra\n");
    do {
        VAR_11 = FUNC_6(VAR_5, VAR_6);
        if (VAR_11 < 0)
            goto fail;
    } while (!VAR_11);
    VAR_11 = 0;
fail:
    VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_4);
    if (VAR_9 < 0) {
        FUNC_1(VAR_5->fc, VAR_1,
               "failed to seek back after looking for mfra\n");
        VAR_11 = VAR_9;
    }
    return VAR_11;
}
