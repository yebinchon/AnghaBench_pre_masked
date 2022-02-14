
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_els_cmd_s {scalar_t__ els_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u16
FUNC_0(struct fchs_s *VAR_3, int VAR_4)
{
 struct fc_els_cmd_s *VAR_5 = (struct fc_els_cmd_s *) (VAR_3 + 1);

 VAR_4 = VAR_4;
 if (VAR_5->els_code != VAR_0)
  return VAR_1;

 return VAR_2;
}
