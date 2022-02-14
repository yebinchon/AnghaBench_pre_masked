
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct libopus_context {int pre_skip; int dec; } ;
struct TYPE_5__ {TYPE_1__* internal; struct libopus_context* priv_data; } ;
struct TYPE_4__ {int skip_samples; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1)
{
    struct libopus_context *VAR_2 = VAR_1->priv_data;

    FUNC_0(VAR_2->dec, VAR_0);


    VAR_1->internal->skip_samples = VAR_2->pre_skip;
}
