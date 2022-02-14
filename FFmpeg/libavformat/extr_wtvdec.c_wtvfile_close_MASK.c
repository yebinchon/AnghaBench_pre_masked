
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* sectors; } ;
typedef TYPE_1__ WtvFile ;
struct TYPE_7__ {TYPE_1__* buffer; TYPE_1__* opaque; } ;
typedef TYPE_2__ AVIOContext ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_2(AVIOContext *VAR_0)
{
    WtvFile *VAR_1 = VAR_0->opaque;
    FUNC_0(&VAR_1->sectors);
    FUNC_0(&VAR_0->opaque);
    FUNC_0(&VAR_0->buffer);
    FUNC_1(&VAR_0);
}
