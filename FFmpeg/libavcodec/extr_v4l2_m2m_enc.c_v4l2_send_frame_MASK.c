
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* context; } ;
typedef TYPE_1__ V4L2m2mPriv ;
struct TYPE_10__ {int output; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef int V4L2Context ;
struct TYPE_12__ {scalar_t__ priv_data; } ;
struct TYPE_11__ {scalar_t__ pict_type; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int * const,TYPE_3__ const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, const AVFrame *VAR_3)
{
    V4L2m2mContext *VAR_4 = ((V4L2m2mPriv*)VAR_2->priv_data)->context;
    V4L2Context *const VAR_5 = &VAR_4->output;






    return FUNC_1(VAR_5, VAR_3);
}
