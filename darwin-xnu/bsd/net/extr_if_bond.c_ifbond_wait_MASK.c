
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
struct TYPE_8__ {scalar_t__ verbose; } ;
struct TYPE_7__ {char* ifb_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char const*,int ) ;
 int FUNC_3 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_4(ifbond_ref VAR_3, const char * VAR_4)
{
    int VAR_5 = 0;


    while (FUNC_0(VAR_3)) {
 if (VAR_2->verbose) {
     FUNC_3("%s: %s msleep\n", VAR_3->ifb_name, VAR_4);
 }
 VAR_5 = 1;
 (void)FUNC_2(VAR_3, VAR_1, VAR_0, VAR_4, 0);
    }

    FUNC_1(VAR_3);
    if (VAR_2->verbose && VAR_5) {
 FUNC_3("%s: %s woke up\n", VAR_3->ifb_name, VAR_4);
    }
    return;
}
