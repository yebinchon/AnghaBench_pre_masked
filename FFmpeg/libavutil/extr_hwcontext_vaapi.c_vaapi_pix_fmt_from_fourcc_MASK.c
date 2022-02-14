
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int pix_fmt; } ;
typedef TYPE_1__ VAAPIFormatDescriptor ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;

__attribute__((used)) static enum AVPixelFormat FUNC_1(unsigned int VAR_1)
{
    const VAAPIFormatDescriptor *VAR_2;
    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2)
        return VAR_2->pix_fmt;
    else
        return VAR_0;
}
