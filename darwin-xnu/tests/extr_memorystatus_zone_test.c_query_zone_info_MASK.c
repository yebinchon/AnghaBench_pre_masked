
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int kern_return_t ;
struct TYPE_5__ {int num_zones; TYPE_1__* zone_names; } ;
struct TYPE_4__ {int mzn_name; } ;


 int FUNC_0 (int ,char*,int ,int ,...) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,TYPE_1__,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_5;
 kern_return_t VAR_6;
 static uint64_t VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1.num_zones; VAR_5++) {
  VAR_6 = FUNC_4(FUNC_2(), VAR_1.zone_names[VAR_5], &(VAR_4[VAR_5]));
  VAR_0; FUNC_0(VAR_6, "mach_zone_info_for_zone(%s) returned %d [%s]", VAR_1.zone_names[VAR_5].mzn_name, VAR_6, FUNC_1(VAR_6));
 }
 VAR_6 = FUNC_3(FUNC_2(), &VAR_3, &VAR_2);
 VAR_0; FUNC_0(VAR_6, "mach_zone_info_for_largest_zone returned %d [%s]", VAR_6, FUNC_1(VAR_6));

 VAR_7++;
 if (VAR_7 % 10 != 0) {
  return;
 }


 for (VAR_5 = 0; VAR_5 < VAR_1.num_zones; VAR_5++) {
  FUNC_5(&(VAR_1.zone_names[VAR_5]), &(VAR_4[VAR_5]));
 }
}
