
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int select; int mask; char* description; } ;
struct TYPE_3__ {int select; char* description; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int * VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_1(void *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    FILE *VAR_7;
    if (VAR_3 != ((void*)0)) {
        VAR_7 = (FILE *)VAR_3;
    } else {
        VAR_7 = VAR_0;
    }
    for (int VAR_8 = 0 ; VAR_2[VAR_8].select != -1; VAR_8++) {
        if (VAR_2[VAR_8].select == VAR_4) {
            FUNC_0(VAR_7, "Value = %9i, select = %2i, mask = %04x.  %s.\n", VAR_6, VAR_4, VAR_5, VAR_2[VAR_8].description);
        }
    }
    for (int VAR_9 = 0 ; VAR_1[VAR_9].select != -1; VAR_9++) {
        if ((VAR_1[VAR_9].select == VAR_4) && (VAR_1[VAR_9].mask & VAR_5)) {
            FUNC_0(VAR_7, "                  %s\n", VAR_1[VAR_9].description);
        }
    }
}
