
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mzn_name; } ;
typedef TYPE_1__ mach_zone_name_t ;
struct TYPE_6__ {int mzi_count; int mzi_cur_size; } ;
typedef TYPE_2__ mach_zone_info_t ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(mach_zone_name_t *VAR_0, mach_zone_info_t *VAR_1)
{
 FUNC_0("ZONE NAME: %-35sSIZE: %-25lluELEMENTS: %llu",
   VAR_0->mzn_name, VAR_1->mzi_cur_size, VAR_1->mzi_count);
}
