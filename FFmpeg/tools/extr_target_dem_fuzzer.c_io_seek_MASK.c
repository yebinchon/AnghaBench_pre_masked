
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ pos; scalar_t__ filesize; } ;
typedef TYPE_1__ IOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int64_t FUNC_0(void *VAR_3, int64_t VAR_4, int VAR_5)
{
    IOContext *VAR_6 = VAR_3;

    if (VAR_5 == VAR_1) {
        if (VAR_4 > VAR_0 - VAR_6->pos)
            return -1;
        VAR_4 += VAR_6->pos;
    } else if (VAR_5 == VAR_2) {
        if (VAR_4 > VAR_0 - VAR_6->filesize)
            return -1;
        VAR_4 += VAR_6->filesize;
    }
    if (VAR_4 < 0 || VAR_4 > VAR_6->filesize)
        return -1;
    VAR_6->pos = VAR_4;
    return 0;
}
