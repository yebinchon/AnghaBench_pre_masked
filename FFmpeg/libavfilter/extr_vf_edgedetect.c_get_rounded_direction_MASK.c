
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, int VAR_5)
{
    if (VAR_4) {
        int VAR_6, VAR_7;

        if (VAR_4 < 0)
            VAR_4 = -VAR_4, VAR_5 = -VAR_5;
        VAR_5 *= (1 << 16);
        VAR_6 = 27146 * VAR_4;
        VAR_7 = 158218 * VAR_4;
        if (VAR_5 > -VAR_7 && VAR_5 < -VAR_6) return VAR_1;
        if (VAR_5 > -VAR_6 && VAR_5 < VAR_6) return VAR_2;
        if (VAR_5 > VAR_6 && VAR_5 < VAR_7) return VAR_0;
    }
    return VAR_3;
}
