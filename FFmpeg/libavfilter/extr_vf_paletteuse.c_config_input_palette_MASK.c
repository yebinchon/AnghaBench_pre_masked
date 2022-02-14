
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int * dst; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;

    if (VAR_3->w * VAR_3->h != VAR_0) {
        FUNC_1(VAR_4, VAR_1,
               "Palette input must contain exactly %d pixels. "
               "Specified input has %dx%d=%d pixels\n",
               VAR_0, VAR_3->w, VAR_3->h,
               VAR_3->w * VAR_3->h);
        return FUNC_0(VAR_2);
    }
    return 0;
}
