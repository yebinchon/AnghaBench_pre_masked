
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aer_error {int pos_cap_err; int source_id; int root_status; int header_log3; int header_log2; int header_log1; int header_log0; int cor_status; int uncor_status; } ;
__attribute__((used)) static u32 *FUNC_0(struct aer_error *VAR_0, int VAR_1,
      int *VAR_2)
{
 int VAR_3 = 0;
 u32 *VAR_4 = ((void*)0);

 if (VAR_0->pos_cap_err == -1)
  return ((void*)0);

 switch (VAR_1 - VAR_0->pos_cap_err) {
 case 128:
  VAR_4 = &VAR_0->uncor_status;
  VAR_3 = 1;
  break;
 case 132:
  VAR_4 = &VAR_0->cor_status;
  VAR_3 = 1;
  break;
 case 131:
  VAR_4 = &VAR_0->header_log0;
  break;
 case 131 +4:
  VAR_4 = &VAR_0->header_log1;
  break;
 case 131 +8:
  VAR_4 = &VAR_0->header_log2;
  break;
 case 131 +12:
  VAR_4 = &VAR_0->header_log3;
  break;
 case 129:
  VAR_4 = &VAR_0->root_status;
  VAR_3 = 1;
  break;
 case 130:
  VAR_4 = &VAR_0->source_id;
  break;
 }
 if (VAR_2)
  *VAR_2 = VAR_3;
 return VAR_4;
}
