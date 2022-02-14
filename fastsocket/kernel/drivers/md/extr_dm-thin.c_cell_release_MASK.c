
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int prison; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (int ,struct dm_bio_prison_cell*) ;
 int FUNC_1 (int ,struct dm_bio_prison_cell*,struct bio_list*) ;

__attribute__((used)) static void FUNC_2(struct pool *VAR_0,
    struct dm_bio_prison_cell *VAR_1,
    struct bio_list *VAR_2)
{
 FUNC_1(VAR_0->prison, VAR_1, VAR_2);
 FUNC_0(VAR_0->prison, VAR_1);
}
