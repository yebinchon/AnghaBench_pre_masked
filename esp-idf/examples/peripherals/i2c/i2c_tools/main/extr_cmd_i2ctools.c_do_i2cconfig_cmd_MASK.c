
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* scl; TYPE_3__* sda; TYPE_2__* freq; TYPE_1__* port; int end; } ;
struct TYPE_9__ {int * ival; } ;
struct TYPE_8__ {int * ival; } ;
struct TYPE_7__ {int * ival; scalar_t__ count; } ;
struct TYPE_6__ {int * ival; scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char**,void**) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(int VAR_7, char **VAR_8)
{
    int VAR_9 = FUNC_0(VAR_7, VAR_8, (void **)&VAR_5);
    if (VAR_9 != 0) {
        FUNC_1(VAR_6, VAR_5.end, VAR_8[0]);
        return 0;
    }


    if (VAR_5.port->count) {
        if (FUNC_2(VAR_5.port->ival[0], &VAR_4) != VAR_0) {
            return 1;
        }
    }

    if (VAR_5.freq->count) {
        VAR_1 = VAR_5.freq->ival[0];
    }

    VAR_3 = VAR_5.sda->ival[0];

    VAR_2 = VAR_5.scl->ival[0];
    return 0;
}
