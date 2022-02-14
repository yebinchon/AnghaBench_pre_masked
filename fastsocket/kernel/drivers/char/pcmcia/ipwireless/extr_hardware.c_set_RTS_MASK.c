
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int * control_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_hardware*,int,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ipw_hardware *VAR_2, int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 if (VAR_5 != 0)
  VAR_2->control_lines[VAR_4] |= VAR_1;
 else
  VAR_2->control_lines[VAR_4] &= ~VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5);
}
