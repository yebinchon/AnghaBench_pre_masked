
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int table0_len; int table1_len; int table2_len; void* table2_addr; void* table1_addr; void* table0_addr; } ;


 int FUNC_0 (char*,void*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_1 (struct ipw_priv*,void*) ;
 void* FUNC_2 (struct ipw_priv*,void*) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_3)
{
 VAR_3->table0_addr = VAR_2;
 VAR_3->table0_len = FUNC_1(VAR_3, VAR_3->table0_addr);

 FUNC_0("table 0 offset at 0x%08x, len = %i\n",
        VAR_3->table0_addr, VAR_3->table0_len);

 VAR_3->table1_addr = FUNC_1(VAR_3, VAR_0);
 VAR_3->table1_len = FUNC_2(VAR_3, VAR_3->table1_addr);

 FUNC_0("table 1 offset at 0x%08x, len = %i\n",
        VAR_3->table1_addr, VAR_3->table1_len);

 VAR_3->table2_addr = FUNC_1(VAR_3, VAR_1);
 VAR_3->table2_len = FUNC_2(VAR_3, VAR_3->table2_addr);
 VAR_3->table2_len &= 0x0000ffff;

 FUNC_0("table 2 offset at 0x%08x, len = %i\n",
        VAR_3->table2_addr, VAR_3->table2_len);

}
