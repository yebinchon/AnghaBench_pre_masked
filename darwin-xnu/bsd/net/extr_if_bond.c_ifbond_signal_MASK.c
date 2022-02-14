
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
typedef int caddr_t ;
struct TYPE_6__ {scalar_t__ verbose; } ;
struct TYPE_5__ {char* ifb_name; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ifbond_ref VAR_1, const char * VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_2((caddr_t)VAR_1);
    if (VAR_0->verbose) {
 FUNC_1("%s: %s wakeup\n", VAR_1->ifb_name, VAR_2);
    }
    return;
}
