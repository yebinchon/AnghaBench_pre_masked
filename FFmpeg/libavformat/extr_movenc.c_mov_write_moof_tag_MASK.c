
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int flags; scalar_t__ write_prft; scalar_t__ ism_lookahead; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_4 (int *,TYPE_1__*,int,int) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 int FUNC_6 (int *,TYPE_1__*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_6, MOVMuxContext *VAR_7, int VAR_8,
                              int64_t VAR_9)
{
    AVIOContext *VAR_10;
    int VAR_11, VAR_12;

    if ((VAR_11 = FUNC_1(&VAR_10)) < 0)
        return VAR_11;
    FUNC_4(VAR_10, VAR_7, VAR_8, 0);
    VAR_12 = FUNC_0(VAR_10);

    if (VAR_7->flags & VAR_0 &&
        !(VAR_7->flags & (VAR_1 | VAR_2)))
        FUNC_6(VAR_6, VAR_7, VAR_8, VAR_12 + 8 + VAR_9);

    if (VAR_7->write_prft > VAR_5 && VAR_7->write_prft < VAR_4)
        FUNC_5(VAR_6, VAR_7, VAR_8);

    if (VAR_7->flags & VAR_1 ||
        !(VAR_7->flags & VAR_3) ||
        VAR_7->ism_lookahead) {
        if ((VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_12 + 8 + VAR_9)) < 0)
            return VAR_11;
        if (!(VAR_7->flags & VAR_1) &&
            VAR_7->flags & VAR_3) {
            FUNC_3(VAR_7, VAR_8, VAR_7->ism_lookahead + 1);
        }
    }

    return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_12);
}
