
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_args {int exposure; int saturation; int aspect; scalar_t__ type; int hue; int angle; int size; int max; int min; int classes; int m; int n; int paths; int * d; int h; int w; void** im; int * resized; int path; int jitter; int num_boxes; int scale; int coords; int out_h; int out_w; int center; int hierarchy; int labels; } ;
typedef struct load_args load_args ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ,int ) ;
 void* FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (void*,int ,int ) ;

void *FUNC_17(void *VAR_15)
{

    load_args VAR_16 = *(struct load_args*)VAR_15;
    if(VAR_16.exposure == 0) VAR_16.exposure = 1;
    if(VAR_16.saturation == 0) VAR_16.saturation = 1;
    if(VAR_16.aspect == 0) VAR_16.aspect = 1;

    if (VAR_16.type == VAR_7){
        *VAR_16.d = FUNC_7(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.labels, VAR_16.classes, VAR_16.w, VAR_16.h);
    } else if (VAR_16.type == VAR_9){
        *VAR_16.d = FUNC_9(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.classes, VAR_16.min, VAR_16.max, VAR_16.size, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    } else if (VAR_16.type == VAR_0){
        *VAR_16.d = FUNC_2(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.labels, VAR_16.classes, VAR_16.hierarchy, VAR_16.min, VAR_16.max, VAR_16.size, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure, VAR_16.center);
    } else if (VAR_16.type == VAR_11){
        *VAR_16.d = FUNC_11(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.scale);
    } else if (VAR_16.type == VAR_14){
        *VAR_16.d = FUNC_14(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.out_w, VAR_16.out_h);
    } else if (VAR_16.type == VAR_5){
        *VAR_16.d = FUNC_5(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.classes, VAR_16.num_boxes, VAR_16.scale, VAR_16.min, VAR_16.max, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    } else if (VAR_16.type == VAR_4){
        *VAR_16.d = FUNC_6(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.classes, VAR_16.num_boxes, VAR_16.coords, VAR_16.min, VAR_16.max, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    } else if (VAR_16.type == VAR_10){
        *VAR_16.d = FUNC_10(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.classes, VAR_16.min, VAR_16.max, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure, VAR_16.scale);
    } else if (VAR_16.type == VAR_8){
        *VAR_16.d = FUNC_8(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.num_boxes, VAR_16.classes, VAR_16.jitter, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    } else if (VAR_16.type == VAR_2){
        *VAR_16.d = FUNC_4(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.w, VAR_16.h, VAR_16.num_boxes, VAR_16.classes, VAR_16.jitter, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    } else if (VAR_16.type == VAR_12){
        *VAR_16.d = FUNC_12(VAR_16.paths, VAR_16.n, VAR_16.classes, VAR_16.jitter);
    } else if (VAR_16.type == VAR_1){
        *VAR_16.d = FUNC_3(VAR_16.n, VAR_16.paths, VAR_16.m, VAR_16.classes, VAR_16.w, VAR_16.h);
    } else if (VAR_16.type == VAR_3){
        *(VAR_16.im) = FUNC_15(VAR_16.path, 0, 0);
        *(VAR_16.resized) = FUNC_16(*(VAR_16.im), VAR_16.w, VAR_16.h);
    } else if (VAR_16.type == VAR_6){
        *(VAR_16.im) = FUNC_15(VAR_16.path, 0, 0);
        *(VAR_16.resized) = FUNC_1(*(VAR_16.im), VAR_16.w, VAR_16.h);
    } else if (VAR_16.type == VAR_13){
        *VAR_16.d = FUNC_13(VAR_16.paths, VAR_16.n, VAR_16.m, VAR_16.classes, VAR_16.min, VAR_16.max, VAR_16.size, VAR_16.angle, VAR_16.aspect, VAR_16.hue, VAR_16.saturation, VAR_16.exposure);
    }
    FUNC_0(VAR_15);
    return 0;
}
