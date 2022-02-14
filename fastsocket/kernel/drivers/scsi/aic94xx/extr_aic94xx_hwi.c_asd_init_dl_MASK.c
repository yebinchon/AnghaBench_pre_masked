
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct done_list_struct {int dummy; } ;
struct TYPE_3__ {int dl_tasklet; scalar_t__ dl_next; int dl_toggle; TYPE_2__* actual_dl; int dl; } ;
struct asd_ha_struct {TYPE_1__ seq; } ;
struct TYPE_4__ {int vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct asd_ha_struct*,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_5)
{
 VAR_5->seq.actual_dl
  = FUNC_0(VAR_5,
        VAR_1 * sizeof(struct done_list_struct),
         VAR_3);
 if (!VAR_5->seq.actual_dl)
  return -VAR_2;
 VAR_5->seq.dl = VAR_5->seq.actual_dl->vaddr;
 VAR_5->seq.dl_toggle = VAR_0;
 VAR_5->seq.dl_next = 0;
 FUNC_1(&VAR_5->seq.dl_tasklet, VAR_4,
       (unsigned long) VAR_5);

 return 0;
}
