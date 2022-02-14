
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
struct TYPE_12__ {scalar_t__ type; int w; char* h; TYPE_4__* dst; TYPE_2__* src; int format; scalar_t__ sample_rate; int channel_layout; } ;
struct TYPE_11__ {TYPE_3__* filter; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {TYPE_1__* filter; } ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_5__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,char*,TYPE_5__*,int,char*,int ,char*,char*,char*) ;

void FUNC_4(void *VAR_1, AVFilterLink *VAR_2, int VAR_3)
{
    if (VAR_2->type == VAR_0) {
        FUNC_3(VAR_1,
                "link[%p s:%dx%d fmt:%s %s->%s]%s",
                VAR_2, VAR_2->w, VAR_2->h,
                FUNC_1(VAR_2->format),
                VAR_2->src ? VAR_2->src->filter->name : "",
                VAR_2->dst ? VAR_2->dst->filter->name : "",
                VAR_3 ? "\n" : "");
    } else {
        char VAR_4[128];
        FUNC_0(VAR_4, sizeof(VAR_4), -1, VAR_2->channel_layout);

        FUNC_3(VAR_1,
                "link[%p r:%d cl:%s fmt:%s %s->%s]%s",
                VAR_2, (int)VAR_2->sample_rate, VAR_4,
                FUNC_2(VAR_2->format),
                VAR_2->src ? VAR_2->src->filter->name : "",
                VAR_2->dst ? VAR_2->dst->filter->name : "",
                VAR_3 ? "\n" : "");
    }
}
