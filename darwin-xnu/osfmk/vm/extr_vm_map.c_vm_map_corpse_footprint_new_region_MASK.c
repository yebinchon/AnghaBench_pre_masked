
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm_map_corpse_footprint_region {scalar_t__ cfr_num_pages; scalar_t__ cfr_vaddr; } ;
struct vm_map_corpse_footprint_header {uintptr_t cf_size; uintptr_t cf_last_region; scalar_t__ cf_last_zeroes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static struct vm_map_corpse_footprint_region *
FUNC_2(
 struct vm_map_corpse_footprint_header *VAR_0)
{
 uintptr_t VAR_1;
 uint32_t VAR_2;
 struct vm_map_corpse_footprint_region *VAR_3;
 struct vm_map_corpse_footprint_region *VAR_4;

 VAR_1 = ((uintptr_t)VAR_0 +
     VAR_0->cf_size);
 VAR_3 = ((struct vm_map_corpse_footprint_region *)
       ((char *)VAR_0 +
        VAR_0->cf_last_region));
 FUNC_0((uintptr_t)VAR_3 + sizeof (*VAR_3) <=
        VAR_1);


 FUNC_0(VAR_3->cfr_num_pages >=
        VAR_0->cf_last_zeroes);
 VAR_3->cfr_num_pages -=
   VAR_0->cf_last_zeroes;
 VAR_0->cf_last_zeroes = 0;


 if (VAR_3->cfr_num_pages == 0) {
  return VAR_3;
 }


 VAR_2 = VAR_0->cf_last_region;
 VAR_2 += sizeof (*VAR_3);
 VAR_2 += VAR_3->cfr_num_pages;
 VAR_2 = FUNC_1(VAR_2, sizeof (int));


 if (((uintptr_t)VAR_0 +
      VAR_2 +
      sizeof (*VAR_3)) >=
     VAR_1) {

  return ((void*)0);
 }


 VAR_0->cf_last_region = VAR_2;

 VAR_4 = (struct vm_map_corpse_footprint_region *)
  ((char *)VAR_0 +
   VAR_0->cf_last_region);
 VAR_4->cfr_vaddr = 0;
 VAR_4->cfr_num_pages = 0;


 return VAR_4;
}
