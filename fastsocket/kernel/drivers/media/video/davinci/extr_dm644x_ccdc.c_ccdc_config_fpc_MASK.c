
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_fault_pixel {int fpc_table_addr; int fp_num; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct ccdc_fault_pixel *VAR_6)
{
 u32 VAR_7;


 VAR_7 = VAR_2;
 FUNC_2(VAR_7, VAR_0);

 if (!VAR_6->enable)
  return;


 FUNC_2(VAR_6->fpc_table_addr, VAR_1);
 FUNC_0(VAR_5, "\nWriting 0x%x to FPC_ADDR...\n",
         (VAR_6->fpc_table_addr));

 VAR_7 = VAR_6->fp_num & VAR_4;
 FUNC_2(VAR_7, VAR_0);

 FUNC_0(VAR_5, "\nWriting 0x%x to FPC...\n", VAR_7);

 VAR_7 = FUNC_1(VAR_0) | VAR_3;
 FUNC_2(VAR_7, VAR_0);
 FUNC_0(VAR_5, "\nWriting 0x%x to FPC...\n", VAR_7);
}
