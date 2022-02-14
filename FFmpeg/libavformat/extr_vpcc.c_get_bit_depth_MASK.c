
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {TYPE_1__* comp; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, enum AVPixelFormat VAR_2)
{
    const AVPixFmtDescriptor *VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0, "Unsupported pixel format (%d)\n",
               VAR_2);
        return -1;
    }
    return VAR_3->comp[0].depth;
}
