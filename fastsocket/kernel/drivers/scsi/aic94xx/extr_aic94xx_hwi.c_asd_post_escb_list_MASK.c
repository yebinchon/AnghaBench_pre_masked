
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pend_q_lock; scalar_t__ scbpro; } ;
struct asd_ha_struct {TYPE_1__ seq; } ;
struct asd_ascb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,struct asd_ascb*) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct asd_ha_struct *VAR_1, struct asd_ascb *VAR_2,
         int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_1->seq.pend_q_lock, VAR_4);
 FUNC_0(VAR_1, VAR_2);
 VAR_1->seq.scbpro += VAR_3;
 FUNC_1(VAR_1, VAR_0, (u32)VAR_1->seq.scbpro);
 FUNC_3(&VAR_1->seq.pend_q_lock, VAR_4);

 return 0;
}
