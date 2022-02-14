
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int threads ;
struct TYPE_2__ {char* name; scalar_t__ flag; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 void* FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_1 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_2 ;

int FUNC_9(int VAR_3, char **VAR_4)
{
    int VAR_5 = FUNC_2();
    int VAR_6;
    int VAR_7 = FUNC_0();
    char VAR_8[5] = "auto";
    int VAR_9;

    for(VAR_9 = 0; VAR_0[VAR_9].flag; VAR_9++) {
        unsigned VAR_10 = 0;
        if (FUNC_3(&VAR_10, VAR_0[VAR_9].name) < 0) {
            FUNC_5(VAR_2, "Table missing %s\n", VAR_0[VAR_9].name);
            return 4;
        }
    }

    if (VAR_5 < 0)
        return 1;

    for (;;) {
        int VAR_11 = FUNC_6(VAR_3, VAR_4, "c:t:");
        if (VAR_11 == -1)
            break;
        switch (VAR_11) {
        case 'c':
        {
            unsigned VAR_12 = FUNC_2();
            if (FUNC_3(&VAR_12, VAR_1) < 0)
                return 2;

            FUNC_1(VAR_12);
            break;
        }
        case 't':
        {
            int VAR_13 = FUNC_4(VAR_8, VAR_1, sizeof(VAR_8));
            if (VAR_13 >= sizeof(VAR_8)) {
                FUNC_5(VAR_2, "Invalid thread count '%s'\n", VAR_1);
                return 2;
            }
        }
        }
    }

    VAR_6 = FUNC_2();

    if (VAR_6 < 0)
        return 3;

    FUNC_7(VAR_5, "raw");
    FUNC_7(VAR_6, "effective");
    FUNC_8("threads = %s (cpu_count = %d)\n", VAR_8, VAR_7);

    return 0;
}
