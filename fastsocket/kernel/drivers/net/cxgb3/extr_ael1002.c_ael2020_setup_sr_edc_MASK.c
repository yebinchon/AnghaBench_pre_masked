
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_1; int member_2; int member_3; int const member_0; } ;
struct cphy {int priv; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cphy*,struct reg_val const*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_1)
{
 static const struct reg_val VAR_2[] = {

  { 128, 0xcc01, 0xffff, 0x488a },


  { 128, 0xcb1b, 0xffff, 0x0200 },
  { 128, 0xcb1c, 0xffff, 0x00f0 },
  { 128, 0xcc06, 0xffff, 0x00e0 },


  { 0, 0, 0, 0 }
 };
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(50);
 if (VAR_3)
  return VAR_3;

 VAR_1->priv = VAR_0;
 return 0;
}
