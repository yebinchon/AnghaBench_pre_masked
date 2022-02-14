
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int bank; int status; int addr; } ;
struct cper_sec_mem_err {int physical_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mce*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mce*) ;

void FUNC_3(int VAR_3, struct cper_sec_mem_err *VAR_4)
{
 struct mce VAR_5;


 if (!VAR_3)
  return;

 FUNC_2(&VAR_5);
 VAR_5.bank = 1;

 VAR_5.status = VAR_2 | VAR_1 | VAR_0 | 0x9f;
 VAR_5.addr = VAR_4->physical_addr;
 FUNC_0(&VAR_5);
 FUNC_1();
}
