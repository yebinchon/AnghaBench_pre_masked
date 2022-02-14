
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq32 {int member_1; int member_0; } ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (struct zd_ioreq32 const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zd_chip*) ;
 int FUNC_5 (struct zd_chip*,struct zd_ioreq32 const*,int ) ;

__attribute__((used)) static int FUNC_6(struct zd_chip *VAR_0)
{
 static const struct zd_ioreq32 VAR_1[] = {
  { 130, 128 },
  { 134, 0x007f003f },
  { 133, 0x007f003f },
  { 132, 0x003f001f },
  { 131, 0x001f000f },
  { 136, 0x00280028 },
  { 135, 0x008C003C },
  { 129, 0x01800824 },
  { 137, 0x000c0eff, },
 };

 FUNC_2(FUNC_4(VAR_0), "\n");
 FUNC_1(FUNC_3(&VAR_0->mutex));
 return FUNC_5(VAR_0, VAR_1, FUNC_0(VAR_1));
}
