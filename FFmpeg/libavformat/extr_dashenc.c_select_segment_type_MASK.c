
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef scalar_t__ SegmentType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline SegmentType FUNC_0(SegmentType VAR_7, enum AVCodecID VAR_8)
{
    if (VAR_7 == VAR_4) {
        if (VAR_8 == VAR_0 || VAR_8 == VAR_1 ||
            VAR_8 == VAR_2 || VAR_8 == VAR_3) {
            VAR_7 = VAR_6;
        } else {
            VAR_7 = VAR_5;
        }
    }

    return VAR_7;
}
