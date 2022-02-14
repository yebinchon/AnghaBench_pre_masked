
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * refs; int * frames; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_2__ VP9Context ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0)
{
    VP9Context *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
        FUNC_1(VAR_0, &VAR_1->s.frames[VAR_2]);
    for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
        FUNC_0(VAR_0, &VAR_1->s.refs[VAR_2]);
}
