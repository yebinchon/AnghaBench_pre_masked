
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int reg_addr_requested; int init_error; int phys_reg_addr; int device_name; int reg_addr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct slgt_info*) ;
 int * FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct slgt_info *VAR_4)
{
 if (FUNC_3(VAR_4->phys_reg_addr, VAR_3, "synclink_gt") == ((void*)0)) {
  FUNC_0(("%s reg addr conflict, addr=%08X\n",
   VAR_4->device_name, VAR_4->phys_reg_addr));
  VAR_4->init_error = VAR_0;
  goto errout;
 }
 else
  VAR_4->reg_addr_requested = 1;

 VAR_4->reg_addr = FUNC_1(VAR_4->phys_reg_addr, VAR_3);
 if (!VAR_4->reg_addr) {
  FUNC_0(("%s cant map device registers, addr=%08X\n",
   VAR_4->device_name, VAR_4->phys_reg_addr));
  VAR_4->init_error = VAR_1;
  goto errout;
 }
 return 0;

errout:
 FUNC_2(VAR_4);
 return -VAR_2;
}
