
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq32 {int member_1; int const member_0; } ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (struct zd_ioreq32 const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*) ;
 scalar_t__ FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (struct zd_chip*,struct zd_ioreq32 const*,int ) ;

__attribute__((used)) static int FUNC_7(struct zd_chip *VAR_0)
{
 int VAR_1;
 static const struct zd_ioreq32 VAR_2[] = {
  { 148, 0x20 },
  { 146, 0x30000808 },
  { 132, 0 },
  { 134, 128 },
  { 141, 0x00 },
  { 140, 0x80000000 },
  { 136, 0xa4 },
  { 145, 0x7f },
  { 143, 0x00f00401 },
  { 138, 0x00 },
  { 148, 0x80 },
  { 145, 0x00 },
  { 147, 0x100 },
  { 133, 0x70 },
  { 137, 0x10000000 },
  { 135, 0x02030203 },
  { 144, 0x1 },
  { 131, 0x114 },
  { 139, 130 },
  { 142, 129},
 };

 FUNC_1(FUNC_2(&VAR_0->mutex));
 VAR_1 = FUNC_6(VAR_0, VAR_2, FUNC_0(VAR_2));
 if (VAR_1)
  return VAR_1;

 return FUNC_5(VAR_0) ?
  FUNC_4(VAR_0) : FUNC_3(VAR_0);
}
