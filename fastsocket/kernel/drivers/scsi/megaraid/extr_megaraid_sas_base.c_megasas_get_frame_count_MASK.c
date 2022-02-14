
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct megasas_sge_skinny {int dummy; } ;
struct megasas_sge64 {int dummy; } ;
struct megasas_sge32 {int dummy; } ;
struct megasas_instance {int flag_ieee; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct megasas_instance *VAR_3,
   u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 int VAR_7;
 u32 VAR_8;
 u32 VAR_9=0;

 VAR_8 = (VAR_0) ? sizeof(struct megasas_sge64) :
     sizeof(struct megasas_sge32);

 if (VAR_3->flag_ieee) {
  VAR_8 = sizeof(struct megasas_sge_skinny);
 }







 if (FUNC_0(VAR_5 == VAR_2)) {
  if (VAR_3->flag_ieee == 1) {
   VAR_6 = VAR_4 - 1;
  } else if (VAR_0)
   VAR_6 = VAR_4 - 1;
  else
   VAR_6 = VAR_4 - 2;
 } else {
  if (VAR_3->flag_ieee == 1) {
   VAR_6 = VAR_4 - 1;
  } else if (VAR_0)
   VAR_6 = VAR_4 - 2;
  else
   VAR_6 = VAR_4 - 3;
 }

 if(VAR_6>0){
  VAR_7 = VAR_8 * VAR_6;

  VAR_9 = (VAR_7 / VAR_1) +
      ((VAR_7 % VAR_1) ? 1 : 0) ;
 }

 VAR_9 +=1;

 if (VAR_9 > 7)
  VAR_9 = 8;
 return VAR_9;
}
