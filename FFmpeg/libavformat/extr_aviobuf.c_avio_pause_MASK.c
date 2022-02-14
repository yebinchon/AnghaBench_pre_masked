
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* read_pause ) (int ,int) ;int opaque; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(AVIOContext *VAR_1, int VAR_2)
{
    if (!VAR_1->read_pause)
        return FUNC_0(VAR_0);
    return VAR_1->read_pause(VAR_1->opaque, VAR_2);
}
