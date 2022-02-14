
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVChromaLocation { ____Placeholder_AVChromaLocation } AVChromaLocation ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,int) ;
 scalar_t__ FUNC_1 (int,int*,int*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_6,
                                      enum AVPixelFormat VAR_7,
                                      enum AVChromaLocation VAR_8)
{
    int VAR_9, VAR_10;
    if (FUNC_1(VAR_7, &VAR_9, &VAR_10) == 0) {
        if (VAR_9 == 1 && VAR_10 == 1) {
            return (VAR_8 == VAR_0)
                       ? VAR_3
                       : VAR_2;
        } else if (VAR_9 == 1 && VAR_10 == 0) {
            return VAR_4;
        } else if (VAR_9 == 0 && VAR_10 == 0) {
            return VAR_5;
        }
    }
    FUNC_0(VAR_6, VAR_1, "Unsupported pixel format (%d)\n", VAR_7);
    return -1;
}
