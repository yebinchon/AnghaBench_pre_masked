
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int bios; int list; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct bio_list*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_bio_prison_cell *VAR_0,
         struct bio_list *VAR_1)
{
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_1, &VAR_0->bios);
}
