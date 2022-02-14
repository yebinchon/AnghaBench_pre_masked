
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcw {int pim; int * chpid; } ;
struct chsc_ssd_info {int path_mask; TYPE_1__* chpid; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct chsc_ssd_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct chsc_ssd_info *VAR_0, struct pmcw *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_1(VAR_0, 0, sizeof(struct chsc_ssd_info));
 VAR_0->path_mask = VAR_1->pim;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_3 = 0x80 >> VAR_2;
  if (VAR_1->pim & VAR_3) {
   FUNC_0(&VAR_0->chpid[VAR_2]);
   VAR_0->chpid[VAR_2].id = VAR_1->chpid[VAR_2];
  }
 }
}
