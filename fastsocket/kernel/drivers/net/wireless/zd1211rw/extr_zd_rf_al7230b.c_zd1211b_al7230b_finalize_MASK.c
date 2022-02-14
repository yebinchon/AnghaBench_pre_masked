
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {scalar_t__ new_phy_layout; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 int const VAR_0 ;
 int FUNC_1 (struct zd_chip*,int,int const) ;
 int FUNC_2 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_1)
{
 int VAR_2;
 static const struct zd_ioreq16 VAR_3[] = {
  { 129, 0x30 }, { 128, 0x30 }, { 130, 0x58 },
  { 135, 0xf0 }, { 132, 0x1b }, { 131, 0x58 },
  { 134, 0x04 },
  { },
  { 133, 0x80 },
 };

 VAR_2 = FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_3));
 if (VAR_2)
  return VAR_2;

 if (VAR_1->new_phy_layout) {

  VAR_2 = FUNC_1(VAR_1, 0xe5, VAR_0);
  if (VAR_2)
   return VAR_2;
 }

 return FUNC_1(VAR_1, 0x04, 134);
}
