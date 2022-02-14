
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, int64_t VAR_1) {
    AVIOContext *VAR_2 = VAR_0->pb;
    uint32_t VAR_3 = 0;
    while(!FUNC_1(VAR_2) && FUNC_4(VAR_2) < VAR_1) {
        VAR_3 = (VAR_3 << 8) | FUNC_2(VAR_2);
        if (VAR_3 == FUNC_0('R','T','j','j') &&
           (VAR_3 = FUNC_3(VAR_2)) == FUNC_0('j','j','j','j') &&
           (VAR_3 = FUNC_3(VAR_2)) == FUNC_0('j','j','j','j'))
            return 1;
    }
    return 0;
}
