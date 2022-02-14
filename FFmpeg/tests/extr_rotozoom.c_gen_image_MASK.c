
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6, int VAR_7, int VAR_8)
{
    const int VAR_9 = VAR_1[VAR_6 % 360];
    const int VAR_10 = VAR_2[VAR_6 % 360];

    const int VAR_11 = -(VAR_7 / 2) * VAR_9;
    const int VAR_12 = (VAR_7 / 2) * VAR_10;

    const int VAR_13 = -(VAR_8 / 2) * VAR_10;
    const int VAR_14 = -(VAR_8 / 2) * VAR_9;
    int VAR_15, VAR_16;

    int VAR_17, VAR_18;
    int VAR_19 = VAR_13;
    int VAR_20 = VAR_14;

    for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
        VAR_17 = VAR_19 + VAR_11 + VAR_0 * VAR_7 / 2;
        VAR_19 += VAR_10;

        VAR_18 = VAR_20 + VAR_12 + VAR_0 * VAR_8 / 2;
        VAR_20 += VAR_9;

        for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
            VAR_17 += VAR_9;
            VAR_18 -= VAR_10;
            FUNC_1(VAR_15, VAR_16,
                      FUNC_0(VAR_5, VAR_17, VAR_18),
                      FUNC_0(VAR_4, VAR_17, VAR_18),
                      FUNC_0(VAR_3, VAR_17, VAR_18));
        }
    }
}
