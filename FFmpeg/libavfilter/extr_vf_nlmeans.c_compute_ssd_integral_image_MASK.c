
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int const ptrdiff_t ;
struct TYPE_3__ {int (* compute_safe_ssd_integral_image ) (int *,int const,int const*,int const,int const*,int const,int const,int const) ;} ;
typedef TYPE_1__ NLMeansDSPContext ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const,int const,int const,int const*,int const,int,int,int,int,int,int const,int const) ;
 int FUNC_4 (int *,int const,int const*,int const,int const*,int const,int const,int const) ;

__attribute__((used)) static void FUNC_5(const NLMeansDSPContext *VAR_0,
                                       uint32_t *VAR_1, ptrdiff_t VAR_2,
                                       const uint8_t *VAR_3, ptrdiff_t VAR_4, int VAR_5, int VAR_6,
                                       int VAR_7, int VAR_8, int VAR_9)
{

    const int VAR_10 = VAR_8 + VAR_7*2;
    const int VAR_11 = VAR_9 + VAR_7*2;


    const int VAR_12 = VAR_7;
    const int VAR_13 = VAR_7;


    const int VAR_14 = VAR_7 + VAR_5;
    const int VAR_15 = VAR_7 + VAR_6;



    const int VAR_16 = FUNC_0(VAR_12, VAR_14);
    const int VAR_17 = FUNC_0(VAR_13, VAR_15);
    const int VAR_18 = FUNC_1(VAR_12 + VAR_8, VAR_14 + VAR_8);
    const int VAR_19 = FUNC_1(VAR_13 + VAR_9, VAR_15 + VAR_9);


    const int VAR_20 = (VAR_18 - VAR_16) & ~0xf;
    const int VAR_21 = VAR_19 - VAR_17;


    const int VAR_22 = VAR_16 + VAR_20;


    FUNC_3(VAR_1, VAR_2,
                                      0, 0,
                                      VAR_3, VAR_4,
                                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                      VAR_10, VAR_17);



    FUNC_3(VAR_1, VAR_2,
                                      0, VAR_17,
                                      VAR_3, VAR_4,
                                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                      VAR_16, VAR_21);


    FUNC_2(VAR_16 - VAR_12 >= 0); FUNC_2(VAR_16 - VAR_12 < VAR_8);
    FUNC_2(VAR_17 - VAR_13 >= 0); FUNC_2(VAR_17 - VAR_13 < VAR_9);
    FUNC_2(VAR_16 - VAR_14 >= 0); FUNC_2(VAR_16 - VAR_14 < VAR_8);
    FUNC_2(VAR_17 - VAR_15 >= 0); FUNC_2(VAR_17 - VAR_15 < VAR_9);
    if (VAR_20 && VAR_21)
        VAR_0->compute_safe_ssd_integral_image(VAR_1 + VAR_17*VAR_2 + VAR_16, VAR_2,
                                             VAR_3 + (VAR_17 - VAR_13) * VAR_4 + (VAR_16 - VAR_12), VAR_4,
                                             VAR_3 + (VAR_17 - VAR_15) * VAR_4 + (VAR_16 - VAR_14), VAR_4,
                                             VAR_20, VAR_21);


    FUNC_3(VAR_1, VAR_2,
                                      VAR_22, VAR_17,
                                      VAR_3, VAR_4,
                                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                      VAR_10 - VAR_22, VAR_21);


    FUNC_3(VAR_1, VAR_2,
                                      0, VAR_19,
                                      VAR_3, VAR_4,
                                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                      VAR_10, VAR_11 - VAR_19);
}
