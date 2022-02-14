
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ct_hdr_s {scalar_t__ reason_code; int cmd_rsp_code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

u16
FUNC_1(struct ct_hdr_s *VAR_5)
{
 if (FUNC_0(VAR_5->cmd_rsp_code) != VAR_1) {
  if (VAR_5->reason_code == VAR_0)
   return VAR_2;
  else
   return VAR_3;
 }

 return VAR_4;
}
