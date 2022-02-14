
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AMF_SURFACE_FORMAT { ____Placeholder_AMF_SURFACE_FORMAT } AMF_SURFACE_FORMAT ;
struct TYPE_3__ {int av_format; int amf_format; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum AMF_SURFACE_FORMAT FUNC_1(enum AVPixelFormat VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
        if (VAR_1[VAR_3].av_format == VAR_2) {
            return VAR_1[VAR_3].amf_format;
        }
    }
    return VAR_0;
}
