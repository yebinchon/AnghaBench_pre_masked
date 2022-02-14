
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_2; int member_3; int const member_1; int const member_0; } ;
struct cphy {int dummy; } ;






 int FUNC_0 (struct cphy*,struct reg_val const*) ;
 int FUNC_1 (struct cphy*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_0)
{
 static const struct reg_val VAR_1[] = {

  { 128, 131,
   0xffff, 0xb << (130*4) },


  { 128, 131,
   0xffff, 0x1 << (129*4) },


  { 0, 0, 0, 0 }
 };
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0);
}
