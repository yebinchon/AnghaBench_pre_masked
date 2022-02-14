
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int non_blocking; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char * VAR_4, int VAR_5, int VAR_6)
{


    int VAR_7 = -1;

    if (FUNC_0(VAR_4, "/0") == 0) {
        VAR_7 = 0;
    } else if (FUNC_0(VAR_4, "/1") == 0) {
        VAR_7 = 1;
    } else if (FUNC_0(VAR_4, "/2") == 0) {
        VAR_7 = 2;
    } else {
        VAR_2 = VAR_0;
        return VAR_7;
    }

    VAR_3[VAR_7]->non_blocking = ((VAR_5 & VAR_1) == VAR_1);

    return VAR_7;
}
