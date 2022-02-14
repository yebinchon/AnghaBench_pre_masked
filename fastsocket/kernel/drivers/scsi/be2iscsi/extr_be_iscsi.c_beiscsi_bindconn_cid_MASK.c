
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct beiscsi_hba {struct beiscsi_conn** conn_table; } ;
struct beiscsi_conn {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct beiscsi_hba *VAR_4,
    struct beiscsi_conn *VAR_5,
    unsigned int VAR_6)
{
 uint16_t VAR_7 = FUNC_0(VAR_6);

 if (VAR_4->conn_table[VAR_7]) {
  FUNC_1(VAR_4, VAR_2, VAR_0,
       "BS_%d : Connection table already occupied. Detected clash\n");

  return -VAR_1;
 } else {
  FUNC_1(VAR_4, VAR_3, VAR_0,
       "BS_%d : phba->conn_table[%d]=%p(beiscsi_conn)\n",
       VAR_7, VAR_5);

  VAR_4->conn_table[VAR_7] = VAR_5;
 }
 return 0;
}
