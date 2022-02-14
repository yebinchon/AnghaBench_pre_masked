
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int tag; int format; } ;
typedef TYPE_1__ XVTagFormatMap ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(enum AVPixelFormat VAR_1)
{
    const XVTagFormatMap *VAR_2 = VAR_0;
    int VAR_3;
    for (VAR_3 = 0; VAR_2->tag; VAR_2 = &VAR_0[++VAR_3]) {
        if (VAR_2->format == VAR_1)
            return VAR_2->tag;
    }
    return 0;
}
