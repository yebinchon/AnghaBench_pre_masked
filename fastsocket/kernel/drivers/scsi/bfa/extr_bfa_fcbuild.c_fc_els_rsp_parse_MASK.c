
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fchs_s {int dummy; } ;
struct fc_ls_rjt_s {int reason_code; } ;
struct fc_els_cmd_s {int els_code; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

enum fc_parse_status
FUNC_0(struct fchs_s *VAR_4, int VAR_5)
{
 struct fc_els_cmd_s *VAR_6 = (struct fc_els_cmd_s *) (VAR_4 + 1);
 struct fc_ls_rjt_s *VAR_7 = (struct fc_ls_rjt_s *) VAR_6;

 VAR_5 = VAR_5;

 switch (VAR_6->els_code) {
 case 128:
  if (VAR_7->reason_code == VAR_0)
   return VAR_1;
  else
   return VAR_2;

 case 129:
  return VAR_3;
 }
 return VAR_3;
}
