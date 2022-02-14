
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(enum AVCodecID VAR_5, int VAR_6)
{
    int VAR_7;
    for (VAR_7 = 0; VAR_4[VAR_7].id != VAR_2; VAR_7++)
        if (VAR_4[VAR_7].id == VAR_5)
            return 1;

    if (VAR_6 < VAR_3) {
        enum AVMediaType VAR_8 = FUNC_0(VAR_5);

        if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
            return 1;
    }

    return 0;
}
