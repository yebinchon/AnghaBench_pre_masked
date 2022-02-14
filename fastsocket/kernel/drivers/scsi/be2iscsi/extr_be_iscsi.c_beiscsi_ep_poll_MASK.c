
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct beiscsi_endpoint {int cid_vld; int phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;

int FUNC_1(struct iscsi_endpoint *VAR_2, int VAR_3)
{
 struct beiscsi_endpoint *VAR_4 = VAR_2->dd_data;

 FUNC_0(VAR_4->phba, VAR_1, VAR_0,
      "BS_%d : In  beiscsi_ep_poll\n");

 if (VAR_4->cid_vld == 1)
  return 1;
 else
  return 0;
}
