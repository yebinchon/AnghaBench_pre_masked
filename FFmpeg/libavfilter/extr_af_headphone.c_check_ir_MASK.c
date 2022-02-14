
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {TYPE_4__* dst; } ;
struct TYPE_9__ {int ir_len; TYPE_1__* in; } ;
struct TYPE_8__ {int ir_len; } ;
typedef TYPE_2__ HeadphoneContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2, int VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    HeadphoneContext *VAR_5 = VAR_4->priv;
    int VAR_6, VAR_7;

    VAR_6 = FUNC_3(VAR_2);
    VAR_7 = 65536;
    if (VAR_6 > VAR_7) {
        FUNC_2(VAR_4, VAR_0, "Too big length of IRs: %d > %d.\n", VAR_6, VAR_7);
        return FUNC_0(VAR_1);
    }
    VAR_5->in[VAR_3].ir_len = VAR_6;
    VAR_5->ir_len = FUNC_1(VAR_6, VAR_5->ir_len);

    return 0;
}
