
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int supports_444; } ;
struct TYPE_6__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_2__ NVDECContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0) {
    NVDECContext *VAR_1 = VAR_0->internal->hwaccel_priv_data;
    VAR_1->supports_444 = 1;
    return FUNC_0(VAR_0);
}
