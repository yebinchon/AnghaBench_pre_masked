
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct vfpf_first_tlv {TYPE_1__ tl; } ;
struct bnx2x {int vf2pf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct bnx2x *VAR_1, struct vfpf_first_tlv *VAR_2)
{
 FUNC_0(VAR_0, "done sending [%d] tlv over vf pf channel\n",
    VAR_2->tl.type);

 FUNC_1(&VAR_1->vf2pf_mutex);
}
