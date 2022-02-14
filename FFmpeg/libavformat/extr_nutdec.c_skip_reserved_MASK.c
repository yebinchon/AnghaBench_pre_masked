
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_2, int64_t VAR_3)
{
    VAR_3 -= FUNC_2(VAR_2);
    if (VAR_3 < 0) {
        FUNC_1(VAR_2, VAR_3, VAR_1);
        return VAR_0;
    } else {
        while (VAR_3--) {
            if (VAR_2->eof_reached)
                return VAR_0;
            FUNC_0(VAR_2);
        }
        return 0;
    }
}
