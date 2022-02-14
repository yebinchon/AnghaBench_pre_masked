
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ColorSystem {int const xWhite; int const yWhite; } ;


 int const VAR_0 ;
 int FUNC_0 (int) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (int ) ;
 struct ColorSystem* VAR_3 ;
 int FUNC_2 (int *,int const,int,int,int,int,int const,int const) ;
 int FUNC_3 (int const,int const,double*,double*) ;
 int FUNC_4 (int const,int const,double*,double*) ;

__attribute__((used)) static void
FUNC_5(uint16_t* VAR_4,
                 int const VAR_5,
                 int const VAR_6,
                 int const VAR_7,
                 int const VAR_8,
                 int const VAR_9,
                 int const VAR_10)
{
    const struct ColorSystem *VAR_11 = &VAR_3[VAR_9];
    int VAR_12, VAR_13;

    if (VAR_10 == VAR_0) {
        double VAR_14, VAR_15;
        FUNC_3(VAR_11->xWhite, VAR_11->yWhite, &VAR_14, &VAR_15);
        VAR_12 = (VAR_6 - 1) * VAR_14;
        VAR_13 = (VAR_7 - 1) - ((int) ((VAR_7 - 1) * VAR_15));
    } else if (VAR_10 == VAR_1) {
        double VAR_16, VAR_17;
        FUNC_4(VAR_11->xWhite, VAR_11->yWhite, &VAR_16, &VAR_17);
        VAR_12 = (VAR_6 - 1) * VAR_16;
        VAR_13 = (VAR_7 - 1) - ((int) ((VAR_7 - 1) * VAR_17));
    } else if (VAR_10 == VAR_2) {
        VAR_12 = (VAR_6 - 1) * VAR_11->xWhite;
        VAR_13 = (VAR_7 - 1) - ((int) ((VAR_7 - 1) * VAR_11->yWhite));
    } else {
        FUNC_1(0);
    }

    FUNC_2(VAR_4, VAR_5,
               VAR_12 + FUNC_0(3), VAR_13, VAR_12 + FUNC_0(10), VAR_13,
               VAR_6, VAR_7);
    FUNC_2(VAR_4, VAR_5,
               VAR_12 - FUNC_0(3), VAR_13, VAR_12 - FUNC_0(10), VAR_13,
               VAR_6, VAR_7);
    FUNC_2(VAR_4, VAR_5,
               VAR_12, VAR_13 + FUNC_0(3), VAR_12, VAR_13 + FUNC_0(10),
               VAR_6, VAR_7);
    FUNC_2(VAR_4, VAR_5,
               VAR_12, VAR_13 - FUNC_0(3), VAR_12, VAR_13 - FUNC_0(10),
               VAR_6, VAR_7);
}
