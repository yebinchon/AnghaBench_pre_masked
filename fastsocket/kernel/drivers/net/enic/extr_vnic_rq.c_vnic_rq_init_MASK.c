
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vnic_rq {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int fetch_index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vnic_rq*,unsigned int,int,int,unsigned int,unsigned int) ;

void FUNC_2(struct vnic_rq *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_0(&VAR_0->ctrl->fetch_index);

 if (VAR_4 == 0xFFFFFFFF) {

  VAR_4 = 0;
 }

 FUNC_1(VAR_0, VAR_1,
  VAR_4, VAR_4,
  VAR_2,
  VAR_3);
}
