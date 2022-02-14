
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int list; int bios; struct bio* holder; int key; } ;
struct dm_bio_prison {scalar_t__ cells; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,struct dm_cell_key*,int) ;

__attribute__((used)) static void FUNC_3(struct dm_bio_prison *VAR_0,
        struct dm_cell_key *VAR_1,
        struct bio *VAR_2,
        uint32_t VAR_3,
        struct dm_bio_prison_cell *VAR_4)
{
 FUNC_2(&VAR_4->key, VAR_1, sizeof(VAR_4->key));
 VAR_4->holder = VAR_2;
 FUNC_0(&VAR_4->bios);
 FUNC_1(&VAR_4->list, VAR_0->cells + VAR_3);
}
