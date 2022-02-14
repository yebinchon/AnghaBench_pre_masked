
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int dummy; } ;
struct iscsi_iser_conn {struct iser_conn* ib_conn; } ;
struct iscsi_conn {struct iscsi_iser_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (struct iscsi_cls_conn*,int) ;
 int FUNC_1 (struct iser_conn*,int) ;

__attribute__((used)) static void
FUNC_2(struct iscsi_cls_conn *VAR_0, int VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_0->dd_data;
 struct iscsi_iser_conn *VAR_3 = VAR_2->dd_data;
 struct iser_conn *VAR_4 = VAR_3->ib_conn;





 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1);




  FUNC_1(VAR_4, 1);
 }
 VAR_3->ib_conn = ((void*)0);
}
