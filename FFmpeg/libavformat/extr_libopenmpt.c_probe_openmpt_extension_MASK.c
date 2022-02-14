
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ filename; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (scalar_t__,char) ;

__attribute__((used)) static int FUNC_3(AVProbeData *VAR_1)
{
    const char *VAR_2;
    if (VAR_1->filename) {
        VAR_2 = FUNC_2(VAR_1->filename, '.');
        if (VAR_2 && FUNC_1(VAR_2 + 1) > 0) {
            VAR_2++;
            if (FUNC_0(VAR_2) == 1)
                return VAR_0;
        }
    }
    return 0;
}
