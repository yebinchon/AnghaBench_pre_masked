
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct alauda {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct alauda*,int*) ;
 int FUNC_1 (struct alauda*) ;

__attribute__((used)) static int FUNC_2(struct alauda *VAR_1)
{
 u8 VAR_2[2], *VAR_3 = VAR_2, *VAR_4 = VAR_2+1;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 if ((*VAR_4 & 0x01) == 0) {

  return -VAR_0;
 }
 if ((*VAR_3 & 0x80) || ((*VAR_3 & 0x1F) == 0x10)) {

  return -VAR_0;
 }
 if (*VAR_3 & 0x08) {

  return FUNC_1(VAR_1);
 }
 return 0;
}
