
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4(int *VAR_2, int VAR_3, int VAR_4,
                               enum AVSampleFormat VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8 = FUNC_2(VAR_5);
    int VAR_9 = FUNC_3(VAR_5);


    if (!VAR_8 || VAR_4 <= 0 || VAR_3 <= 0)
        return FUNC_0(VAR_0);


    if (!VAR_6) {
        if (VAR_4 > VAR_1 - 31)
            return FUNC_0(VAR_0);
        VAR_6 = 1;
        VAR_4 = FUNC_1(VAR_4, 32);
    }


    if (VAR_3 > VAR_1 / VAR_6 ||
        (int64_t)VAR_3 * VAR_4 > (VAR_1 - (VAR_6 * VAR_3)) / VAR_8)
        return FUNC_0(VAR_0);

    VAR_7 = VAR_9 ? FUNC_1(VAR_4 * VAR_8, VAR_6) :
                         FUNC_1(VAR_4 * VAR_8 * VAR_3, VAR_6);
    if (VAR_2)
        *VAR_2 = VAR_7;

    return VAR_9 ? VAR_7 * VAR_3 : VAR_7;
}
