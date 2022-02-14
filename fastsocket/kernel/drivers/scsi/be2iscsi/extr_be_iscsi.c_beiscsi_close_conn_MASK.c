
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct beiscsi_endpoint {int ep_cid; struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 unsigned int FUNC_2 (struct beiscsi_hba*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct beiscsi_endpoint *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 struct beiscsi_hba *VAR_7 = VAR_3->phba;

 VAR_6 = FUNC_2(VAR_7, VAR_3->ep_cid, VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_7, VAR_2, VAR_0,
       "BS_%d : upload failed for cid 0x%x\n",
       VAR_3->ep_cid);

  VAR_5 = -VAR_1;
 }

 VAR_5 = FUNC_1(VAR_7, VAR_6, ((void*)0), ((void*)0));
 return VAR_5;
}
