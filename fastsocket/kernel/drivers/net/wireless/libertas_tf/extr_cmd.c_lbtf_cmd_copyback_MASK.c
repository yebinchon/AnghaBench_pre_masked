
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lbtf_private {int dummy; } ;
struct cmd_header {int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cmd_header*,struct cmd_header*,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct lbtf_private *VAR_0, unsigned long VAR_1,
       struct cmd_header *VAR_2)
{
 struct cmd_header *VAR_3 = (void *)VAR_1;
 uint16_t VAR_4;

 VAR_4 = FUNC_2(FUNC_0(VAR_3->size), FUNC_0(VAR_2->size));
 FUNC_1(VAR_3, VAR_2, VAR_4);
 return 0;
}
