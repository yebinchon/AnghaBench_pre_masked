
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int itt; } ;
struct iscsi_conn {int id; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_task*) ;

__attribute__((used)) static int
FUNC_2(struct iscsi_conn *VAR_0, struct iscsi_task *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0("mtask xmit [cid %d itt 0x%x]\n", VAR_0->id, VAR_1->itt);

 VAR_2 = FUNC_1(VAR_0, VAR_1);







 return VAR_2;
}
