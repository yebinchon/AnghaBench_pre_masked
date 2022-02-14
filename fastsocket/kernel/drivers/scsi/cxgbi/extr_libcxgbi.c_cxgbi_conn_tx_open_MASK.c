
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int id; } ;
struct cxgbi_sock {struct iscsi_conn* user_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (int,char*,struct cxgbi_sock*,int ) ;

void FUNC_2(struct cxgbi_sock *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->user_data;

 if (VAR_2) {
  FUNC_1(1 << VAR_0,
   "csk 0x%p, cid %d.\n", VAR_1, VAR_2->id);
  FUNC_0(VAR_2);
 }
}
