
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const int64_t ;
typedef int AVCodecContext ;
typedef int AVBPrint ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int const,int const) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2, AVBPrint *VAR_3,
                       const char *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_5 >= 0 && VAR_6 >= 0) {



        if (VAR_7 >= 0 && VAR_8 >= 0 && (VAR_7 != VAR_5 || VAR_8 != VAR_6) && VAR_7 >= VAR_5 && VAR_8 >= VAR_6) {

            const int VAR_9 = VAR_5 + (VAR_7 - VAR_5)/2;
            const int VAR_10 = VAR_6 + (VAR_8 - VAR_6)/2;
            const int VAR_11 = VAR_9 * (int64_t)VAR_0 / 720;
            const int VAR_12 = VAR_10 * (int64_t)VAR_1 / 480;
            FUNC_0(VAR_3, "{\\an5}{\\pos(%d,%d)}", VAR_11, VAR_12);
        } else {

            const int VAR_13 = VAR_5 * (int64_t)VAR_0 / 720;
            const int VAR_14 = VAR_6 * (int64_t)VAR_1 / 480;
            FUNC_0(VAR_3, "{\\an1}{\\pos(%d,%d)}", VAR_13, VAR_14);
        }
    }

    return FUNC_1(VAR_2, VAR_3, VAR_4);
}
