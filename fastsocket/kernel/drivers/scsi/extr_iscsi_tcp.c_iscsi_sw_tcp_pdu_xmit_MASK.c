
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {struct iscsi_conn* conn; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*) ;

__attribute__((used)) static int FUNC_2(struct iscsi_task *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->conn;
 int VAR_3;

 while (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 == 0)
   return -VAR_0;
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
