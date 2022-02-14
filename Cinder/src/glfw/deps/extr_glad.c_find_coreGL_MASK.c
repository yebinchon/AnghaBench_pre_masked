
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int*,int*) ;
 int FUNC_2 (char const*,char*,int*,int*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t const) ;

__attribute__((used)) static void FUNC_5(void) {





    int VAR_13, VAR_14, VAR_15;

    const char* VAR_16;
    const char* VAR_17[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        ((void*)0)
    };

    VAR_16 = (const char*) FUNC_0(VAR_12);
    if (!VAR_16) return;

    for (VAR_13 = 0; VAR_17[VAR_13]; VAR_13++) {
        const size_t VAR_18 = FUNC_3(VAR_17[VAR_13]);
        if (FUNC_4(VAR_16, VAR_17[VAR_13], VAR_18) == 0) {
            VAR_16 += VAR_18;
            break;
        }
    }





    FUNC_1(VAR_16, "%d.%d", &VAR_14, &VAR_15);


    VAR_11.major = VAR_14; VAR_11.minor = VAR_15;
 VAR_0 = (VAR_14 == 1 && VAR_15 >= 0) || VAR_14 > 1;
 VAR_1 = (VAR_14 == 1 && VAR_15 >= 1) || VAR_14 > 1;
 VAR_2 = (VAR_14 == 1 && VAR_15 >= 2) || VAR_14 > 1;
 VAR_3 = (VAR_14 == 1 && VAR_15 >= 3) || VAR_14 > 1;
 VAR_4 = (VAR_14 == 1 && VAR_15 >= 4) || VAR_14 > 1;
 VAR_5 = (VAR_14 == 1 && VAR_15 >= 5) || VAR_14 > 1;
 VAR_6 = (VAR_14 == 2 && VAR_15 >= 0) || VAR_14 > 2;
 VAR_7 = (VAR_14 == 2 && VAR_15 >= 1) || VAR_14 > 2;
 VAR_8 = (VAR_14 == 3 && VAR_15 >= 0) || VAR_14 > 3;
 VAR_9 = (VAR_14 == 3 && VAR_15 >= 1) || VAR_14 > 3;
 VAR_10 = (VAR_14 == 3 && VAR_15 >= 2) || VAR_14 > 3;
}
