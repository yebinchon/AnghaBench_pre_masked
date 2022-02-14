
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int,int) ;

__attribute__((used)) static int64_t FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                                  int64_t *VAR_4, int64_t VAR_5) {
    AVIOContext *VAR_6 = VAR_2->pb;
    int64_t VAR_7;
    if (FUNC_0(VAR_6, *VAR_4, VAR_1) < 0)
        return VAR_0;
    VAR_7 = FUNC_2(VAR_2, VAR_5 - *VAR_4, -1, -1);
    *VAR_4 = FUNC_1(VAR_6);
    return VAR_7;
}
