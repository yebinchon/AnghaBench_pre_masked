
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int const* const*,int*,int,int,int,int,int const,int const,int const,int const,int const,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(const uint8_t * const VAR_9[4], int VAR_10[4],
                     int VAR_11, int VAR_12,
                     enum AVPixelFormat VAR_13,
                     enum AVPixelFormat VAR_14)
{
    const int VAR_15[] = { VAR_5, VAR_4, VAR_3,
                          VAR_7, VAR_6, VAR_2, 0 };
    const int VAR_16 = VAR_11;
    const int VAR_17 = VAR_12;
    const int VAR_18[] = { VAR_16 - VAR_16 / 3, VAR_16, VAR_16 + VAR_16 / 3, 0 };
    const int VAR_19[] = { VAR_17 - VAR_17 / 3, VAR_17, VAR_17 + VAR_17 / 3, 0 };
    enum AVPixelFormat VAR_20, VAR_21;
    const AVPixFmtDescriptor *VAR_22, *VAR_23;

    for (VAR_20 = VAR_13 != VAR_1 ? VAR_13 : 0;
         VAR_20 < VAR_0; VAR_20++) {
        if (!FUNC_4(VAR_20) ||
            !FUNC_5(VAR_20))
            continue;

        VAR_22 = FUNC_0(VAR_20);

        for (VAR_21 = VAR_14 != VAR_1 ? VAR_14 : 0;
             VAR_21 < VAR_0; VAR_21++) {
            int VAR_24, VAR_25, VAR_26;
            int VAR_27 = 0;

            if (!FUNC_4(VAR_21) ||
                !FUNC_5(VAR_21))
                continue;

            VAR_23 = FUNC_0(VAR_21);

            FUNC_3("%s -> %s\n", VAR_22->name, VAR_23->name);
            FUNC_2(VAR_8);

            for (VAR_26 = 0; VAR_15[VAR_26] && !VAR_27; VAR_26++)
                for (VAR_24 = 0; VAR_18[VAR_24] && !VAR_27; VAR_24++)
                    for (VAR_25 = 0; VAR_19[VAR_25] && !VAR_27; VAR_25++)
                        VAR_27 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12,
                                     VAR_20, VAR_21,
                                     VAR_16, VAR_17, VAR_18[VAR_24], VAR_19[VAR_25], VAR_15[VAR_26],
                                     ((void*)0));
            if (VAR_14 != VAR_1)
                break;
        }
        if (VAR_13 != VAR_1)
            break;
    }
}
