
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* clut_list; } ;
typedef TYPE_1__ DVBSubContext ;
typedef TYPE_2__ DVBSubCLUT ;



__attribute__((used)) static DVBSubCLUT* FUNC_0(DVBSubContext *VAR_0, int VAR_1)
{
    DVBSubCLUT *VAR_2 = VAR_0->clut_list;

    while (VAR_2 && VAR_2->id != VAR_1) {
        VAR_2 = VAR_2->next;
    }

    return VAR_2;
}
