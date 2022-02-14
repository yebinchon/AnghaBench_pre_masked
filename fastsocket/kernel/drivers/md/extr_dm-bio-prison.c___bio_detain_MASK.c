
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int bios; } ;
struct dm_bio_prison {scalar_t__ cells; } ;
struct bio {int dummy; } ;


 struct dm_bio_prison_cell* FUNC_0 (scalar_t__,struct dm_cell_key*) ;
 int FUNC_1 (struct dm_bio_prison*,struct dm_cell_key*,struct bio*,scalar_t__,struct dm_bio_prison_cell*) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (struct dm_bio_prison*,struct dm_cell_key*) ;

__attribute__((used)) static int FUNC_4(struct dm_bio_prison *VAR_0,
   struct dm_cell_key *VAR_1,
   struct bio *VAR_2,
   struct dm_bio_prison_cell *VAR_3,
   struct dm_bio_prison_cell **VAR_4)
{
 uint32_t VAR_5 = FUNC_3(VAR_0, VAR_1);
 struct dm_bio_prison_cell *VAR_6;

 VAR_6 = FUNC_0(VAR_0->cells + VAR_5, VAR_1);
 if (VAR_6) {
  if (VAR_2)
   FUNC_2(&VAR_6->bios, VAR_2);
  *VAR_4 = VAR_6;
  return 1;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3);
 *VAR_4 = VAR_3;
 return 0;
}
