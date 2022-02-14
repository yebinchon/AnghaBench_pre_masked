
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_4__ {scalar_t__ len; scalar_t__* data; } ;
struct TYPE_5__ {TYPE_1__ delay; } ;
typedef TYPE_2__ Tube ;
typedef int Server ;
typedef int Job ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static uint
FUNC_1(Server *VAR_0, Tube *VAR_1, uint VAR_2)
{
    uint VAR_3;
    for (VAR_3 = 0; (VAR_3 < VAR_2) && (VAR_1->delay.len > 0); ++VAR_3) {
        FUNC_0(VAR_0, (Job *)VAR_1->delay.data[0]);
    }
    return VAR_3;
}
