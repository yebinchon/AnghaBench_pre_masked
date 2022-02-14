
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int num_zones; TYPE_2__* zone_names; } ;
struct TYPE_6__ {int mzn_name; } ;
struct TYPE_5__ {int mzi_count; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static bool FUNC_3(void)
{
 int VAR_5;
 uint64_t VAR_6 = 0, VAR_7 = 0;

 FUNC_0("Comparing element counts of \"VM map entries\" and \"vm objects\" zones");
 for (VAR_5 = 0; VAR_5 < VAR_3.num_zones; VAR_5++) {
  if (!FUNC_2(VAR_3.zone_names[VAR_5].mzn_name, VAR_1)) {
   VAR_7 = VAR_4[VAR_5].mzi_count;
  } else if (!FUNC_2(VAR_3.zone_names[VAR_5].mzn_name, VAR_2)) {
   VAR_6 = VAR_4[VAR_5].mzi_count;
  }
  FUNC_1(&(VAR_3.zone_names[VAR_5]), &(VAR_4[VAR_5]));
 }

 FUNC_0("# VM map entries as percentage of # vm objects = %llu", (VAR_7 * 100)/ VAR_6);
 if (VAR_7 >= ((VAR_6 * VAR_0) / 100)) {
  FUNC_0("Number of VM map entries is comparable to vm objects\n\n");
  return 1;
 }
 FUNC_0("Number of VM map entries is NOT comparable to vm objects\n\n");
 return 0;
}
