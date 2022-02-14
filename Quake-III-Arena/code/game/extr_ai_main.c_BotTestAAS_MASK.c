
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int cluster; } ;
typedef TYPE_1__ aas_areainfo_t ;
struct TYPE_7__ {scalar_t__ integer; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(vec3_t VAR_3) {
 int VAR_4;
 aas_areainfo_t VAR_5;

 FUNC_4(&VAR_2);
 FUNC_4(&VAR_1);
 if (VAR_2.integer) {
  if (!FUNC_3()) return;
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4) FUNC_0(VAR_0, "\remtpy area");
  else FUNC_0(VAR_0, "\r^1SOLID area");
 }
 else if (VAR_1.integer) {
  if (!FUNC_3()) return;
  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4)
   FUNC_0(VAR_0, "\r^1Solid!                              ");
  else {
   FUNC_2(VAR_4, &VAR_5);
   FUNC_0(VAR_0, "\rarea %d, cluster %d       ", VAR_4, VAR_5.cluster);
  }
 }
}
