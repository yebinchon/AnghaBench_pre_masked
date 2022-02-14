
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpar_connection {int pending_acks; scalar_t__ num_pending_acks; int remote_lp; } ;
typedef scalar_t__ HvLpEvent_Rc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (struct veth_lpar_connection*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct veth_lpar_connection *VAR_2)
{
 HvLpEvent_Rc VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1,
        0, &VAR_2->pending_acks);

 if (VAR_3 != VAR_0)
  FUNC_1("Failed acking frames from LPAR %d, rc = %d\n",
    VAR_2->remote_lp, (int)VAR_3);

 VAR_2->num_pending_acks = 0;
 FUNC_0(&VAR_2->pending_acks, 0xff, sizeof(VAR_2->pending_acks));
}
