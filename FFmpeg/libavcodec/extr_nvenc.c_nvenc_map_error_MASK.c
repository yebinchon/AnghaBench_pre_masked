
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nverr; char* desc; int averr; } ;
typedef scalar_t__ NVENCSTATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(NVENCSTATUS VAR_2, const char **VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        if (VAR_1[VAR_4].nverr == VAR_2) {
            if (VAR_3)
                *VAR_3 = VAR_1[VAR_4].desc;
            return VAR_1[VAR_4].averr;
        }
    }
    if (VAR_3)
        *VAR_3 = "unknown error";
    return VAR_0;
}
