
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_cmd {int dummy; } ;
typedef int sense_reason_t ;
 int VAR_0 ;
 int FUNC_0 (struct se_cmd*,int,int,int ,int ,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static sense_reason_t
FUNC_2(struct se_cmd *VAR_1, int VAR_2, int VAR_3,
  u64 VAR_4, u64 VAR_5, int VAR_6)
{
 switch (VAR_2) {
 case 130:
 case 133:
 case 128:
 case 131:
 case 129:
 case 132:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
 default:
  FUNC_1("SPC-3 PR: Unknown Service Action PREEMPT%s"
   " Type: 0x%02x\n", (VAR_6) ? "_AND_ABORT" : "", VAR_2);
  return VAR_0;
 }
}
