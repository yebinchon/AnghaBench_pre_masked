
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
struct TYPE_3__ {int recvAtim; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, zbuf_t* VAR_2)
{
    FUNC_1(VAR_1);

    FUNC_0("Receiving Atim window notification");

    VAR_0->sta.recvAtim = 1;
}
