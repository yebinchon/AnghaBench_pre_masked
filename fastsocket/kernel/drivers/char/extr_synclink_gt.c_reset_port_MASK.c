
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int signals; int reg_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*,int) ;
 int FUNC_3 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_4(struct slgt_info *VAR_4)
{
 if (!VAR_4->reg_addr)
  return;

 FUNC_3(VAR_4);
 FUNC_0(VAR_4);

 VAR_4->signals &= ~(VAR_2 + VAR_3);
 FUNC_1(VAR_4);

 FUNC_2(VAR_4, VAR_0 | VAR_1);
}
