
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct beiscsi_hba {int ** conn_table; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct beiscsi_hba *VAR_3,
          unsigned int VAR_4)
{
 uint16_t VAR_5 = FUNC_0(VAR_4);

 if (VAR_3->conn_table[VAR_5])
  VAR_3->conn_table[VAR_5] = ((void*)0);
 else {
  FUNC_1(VAR_3, VAR_2, VAR_0,
       "BS_%d : Connection table Not occupied.\n");
  return -VAR_1;
 }
 return 0;
}
