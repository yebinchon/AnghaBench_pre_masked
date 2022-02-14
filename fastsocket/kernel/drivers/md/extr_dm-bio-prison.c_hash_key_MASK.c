
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct dm_cell_key {unsigned long const block; } ;
struct dm_bio_prison {int hash_mask; } ;



__attribute__((used)) static uint32_t FUNC_0(struct dm_bio_prison *VAR_0, struct dm_cell_key *VAR_1)
{
 const unsigned long VAR_2 = 4294967291UL;
 uint64_t VAR_3 = VAR_1->block * VAR_2;

 return (uint32_t) (VAR_3 & VAR_0->hash_mask);
}
