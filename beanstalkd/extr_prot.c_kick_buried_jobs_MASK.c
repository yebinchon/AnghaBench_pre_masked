
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_5__ {int next; } ;
struct TYPE_6__ {TYPE_1__ buried; } ;
typedef TYPE_2__ Tube ;
typedef int Server ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static uint
FUNC_2(Server *VAR_0, Tube *VAR_1, uint VAR_2)
{
    uint VAR_3;
    for (VAR_3 = 0; (VAR_3 < VAR_2) && FUNC_0(VAR_1); ++VAR_3) {
        FUNC_1(VAR_0, VAR_1->buried.next);
    }
    return VAR_3;
}
