
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_zone {char* name; int zone_mem; int max_mem; int emer_mem; int swap_limit; int kobj; struct ttm_mem_global* glob; scalar_t__ used_mem; } ;
struct ttm_mem_global {int num_zones; struct ttm_mem_zone** zones; int kobj; struct ttm_mem_zone* zone_dma32; } ;
struct sysinfo {int totalram; int mem_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_mem_zone*) ;
 int FUNC_1 (int *,int *,int *,char*) ;
 int FUNC_2 (int *) ;
 struct ttm_mem_zone* FUNC_3 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ttm_mem_global *VAR_3,
       const struct sysinfo *VAR_4)
{
 struct ttm_mem_zone *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 uint64_t VAR_6;
 int VAR_7;

 if (FUNC_4(!VAR_5))
  return -VAR_0;

 VAR_6 = VAR_4->totalram;
 VAR_6 *= VAR_4->mem_unit;





 if (VAR_6 <= ((uint64_t) 1ULL << 32)) {
  FUNC_0(VAR_5);
  return 0;
 }







 VAR_6 = ((uint64_t) 1ULL << 32);
 VAR_5->name = "dma32";
 VAR_5->zone_mem = VAR_6;
 VAR_5->max_mem = VAR_6 >> 1;
 VAR_5->emer_mem = (VAR_6 >> 1) + (VAR_6 >> 2);
 VAR_5->swap_limit = VAR_5->max_mem - (VAR_6 >> 3);
 VAR_5->used_mem = 0;
 VAR_5->glob = VAR_3;
 VAR_3->zone_dma32 = VAR_5;
 VAR_7 = FUNC_1(
  &VAR_5->kobj, &VAR_2, &VAR_3->kobj, VAR_5->name);
 if (FUNC_4(VAR_7 != 0)) {
  FUNC_2(&VAR_5->kobj);
  return VAR_7;
 }
 VAR_3->zones[VAR_3->num_zones++] = VAR_5;
 return 0;
}
