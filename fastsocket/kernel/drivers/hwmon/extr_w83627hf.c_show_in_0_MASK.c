
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627hf_data {int vrm_ovt; scalar_t__ type; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct w83627hf_data *VAR_3, char *VAR_4, u8 VAR_5)
{
 long VAR_6;

 if ((VAR_3->vrm_ovt & 0x01) &&
  (VAR_0 == VAR_3->type || VAR_1 == VAR_3->type
   || VAR_2 == VAR_3->type))


  VAR_6 = (long)((VAR_5 * 488 + 70000 + 50) / 100);
 else

  VAR_6 = (long)FUNC_0(VAR_5);

 return FUNC_1(VAR_4,"%ld\n", VAR_6);
}
