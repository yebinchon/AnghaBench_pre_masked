
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bondport_ref ;
struct TYPE_2__ {scalar_t__ verbose; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_1)
{
    if (FUNC_0(VAR_1) == 0) {
 if (VAR_0->verbose) {
     FUNC_3("[%s] Attached Mux To Aggregator\n",
        FUNC_2(VAR_1));
 }
 FUNC_1(VAR_1);
    }
    return;
}
