
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__* coresight_base; scalar_t__ cpu_regmap_paddr; } ;
typedef TYPE_1__ cpu_data_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(cpu_data_t *VAR_8)
{
 uint64_t VAR_9;
 int VAR_10;

 FUNC_1(VAR_8);






 if (VAR_8->cpu_regmap_paddr) {
  for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {







   if (VAR_10 == VAR_2)
    continue;

   if (((VAR_10 == VAR_3) || (VAR_10 == VAR_6)) && !VAR_7)
    continue;

   if (!VAR_8->coresight_base[VAR_10]) {
    VAR_9 = VAR_8->cpu_regmap_paddr + FUNC_0(VAR_10);
    VAR_8->coresight_base[VAR_10] = (vm_offset_t)FUNC_2(VAR_9, VAR_5);





    if (!VAR_8->coresight_base[VAR_10]) {
     FUNC_3("unable to ml_io_map coresight regions");
    }
   }

   if (VAR_10 != VAR_6)
    *(volatile uint32_t *)(VAR_8->coresight_base[VAR_10] + VAR_1) = VAR_0;
  }
 }
}
