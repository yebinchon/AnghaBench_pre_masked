
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* on_fail; } ;
typedef TYPE_1__ TeeSlave ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_4, TeeSlave *VAR_5)
{
    if (!VAR_4) {
        VAR_5->on_fail = VAR_0;
        return 0;
    } else if (!FUNC_1("abort", VAR_4)) {
        VAR_5->on_fail = VAR_2;
        return 0;
    } else if (!FUNC_1("ignore", VAR_4)) {
        VAR_5->on_fail = VAR_3;
        return 0;
    }

    VAR_5->on_fail = VAR_2;
    return FUNC_0(VAR_1);
}
