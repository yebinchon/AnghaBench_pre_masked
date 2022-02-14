
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ category; } ;
struct TYPE_5__ {TYPE_3__* priv_class; } ;
struct TYPE_4__ {TYPE_3__* priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVInputFormat ;
typedef scalar_t__ AVClassCategory ;
typedef TYPE_3__ AVClass ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1, int VAR_2,
                         AVClassCategory VAR_3, AVClassCategory VAR_4)
{
    const AVClass *VAR_5;
    AVClassCategory VAR_6 = VAR_0;
    do {
        if (VAR_2) {
            if (!(VAR_1 = FUNC_1(VAR_1)))
                break;
            VAR_5 = ((AVOutputFormat *)VAR_1)->priv_class;
        } else {
            if (!(VAR_1 = FUNC_0(VAR_1)))
                break;
            VAR_5 = ((AVInputFormat *)VAR_1)->priv_class;
        }
        if (!VAR_5)
            continue;
        VAR_6 = VAR_5->category;
    } while (VAR_6 != VAR_3 && VAR_6 != VAR_4);
    return VAR_1;
}
