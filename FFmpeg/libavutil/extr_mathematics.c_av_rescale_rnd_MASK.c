
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef enum AVRounding { ____Placeholder_AVRounding } AVRounding ;
typedef int AVInteger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

int64_t FUNC_7(int64_t VAR_6, int64_t VAR_7, int64_t VAR_8, enum AVRounding VAR_9)
{
    int64_t VAR_10 = 0;
    FUNC_2(VAR_8 > 0);
    FUNC_2(VAR_7 >=0);
    FUNC_2((unsigned)(VAR_9&~VAR_1)<=5 && (VAR_9&~VAR_1)!=4);

    if (VAR_8 <= 0 || VAR_7 < 0 || !((unsigned)(VAR_9&~VAR_1)<=5 && (VAR_9&~VAR_1)!=4))
        return VAR_4;

    if (VAR_9 & VAR_1) {
        if (VAR_6 == VAR_4 || VAR_6 == VAR_3)
            return VAR_6;
        VAR_9 -= VAR_1;
    }

    if (VAR_6 < 0)
        return -(uint64_t)FUNC_7(-FUNC_0(VAR_6, -VAR_3), VAR_7, VAR_8, VAR_9 ^ ((VAR_9 >> 1) & 1));

    if (VAR_9 == VAR_0)
        VAR_10 = VAR_8 / 2;
    else if (VAR_9 & 1)
        VAR_10 = VAR_8 - 1;

    if (VAR_7 <= VAR_5 && VAR_8 <= VAR_5) {
        if (VAR_6 <= VAR_5)
            return (VAR_6 * VAR_7 + VAR_10) / VAR_8;
        else {
            int64_t VAR_11 = VAR_6 / VAR_8;
            int64_t VAR_12 = (VAR_6 % VAR_8 * VAR_7 + VAR_10) / VAR_8;
            if (VAR_11 >= VAR_2 && VAR_7 && VAR_11 > (VAR_3 - VAR_12) / VAR_7)
                return VAR_4;
            return VAR_11 * VAR_7 + VAR_12;
        }
    } else {

        uint64_t VAR_13 = VAR_6 & 0xFFFFFFFF;
        uint64_t VAR_14 = VAR_6 >> 32;
        uint64_t VAR_15 = VAR_7 & 0xFFFFFFFF;
        uint64_t VAR_16 = VAR_7 >> 32;
        uint64_t VAR_17 = VAR_13 * VAR_16 + VAR_14 * VAR_15;
        uint64_t VAR_18 = VAR_17 << 32;
        int VAR_19;

        VAR_13 = VAR_13 * VAR_15 + VAR_18;
        VAR_14 = VAR_14 * VAR_16 + (VAR_17 >> 32) + (VAR_13 < VAR_18);
        VAR_13 += VAR_10;
        VAR_14 += VAR_13 < VAR_10;

        for (VAR_19 = 63; VAR_19 >= 0; VAR_19--) {
            VAR_14 += VAR_14 + ((VAR_13 >> VAR_19) & 1);
            VAR_17 += VAR_17;
            if (VAR_8 <= VAR_14) {
                VAR_14 -= VAR_8;
                VAR_17++;
            }
        }
        if (VAR_17 > VAR_3)
            return VAR_4;
        return VAR_17;
    }
}
