
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int raid_disks; } ;
struct r1bio {struct bio** bios; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct r1conf *VAR_0, struct r1bio *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->raid_disks * 2; VAR_2++) {
  struct bio **VAR_3 = VAR_1->bios + VAR_2;
  if (!FUNC_0(*VAR_3))
   FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
 }
}
