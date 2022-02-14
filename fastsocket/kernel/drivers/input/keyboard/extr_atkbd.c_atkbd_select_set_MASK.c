
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct atkbd {int extra; int id; scalar_t__ translated; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct atkbd *VAR_5, int VAR_6, int VAR_7)
{
 struct ps2dev *VAR_8 = &VAR_5->ps2dev;
 unsigned char VAR_9[2];

 VAR_5->extra = 0;






 if (VAR_5->translated)
  return 2;

 if (VAR_5->id == 0xaca1) {
  VAR_9[0] = 3;
  FUNC_0(VAR_8, VAR_9, VAR_4);
  return 3;
 }

 if (VAR_7) {
  VAR_9[0] = 0x71;
  if (!FUNC_0(VAR_8, VAR_9, VAR_0)) {
   VAR_5->extra = 1;
   return 2;
  }
 }

 if (VAR_6 != 3)
  return 2;

 if (!FUNC_0(VAR_8, VAR_9, VAR_2)) {
  VAR_5->id = VAR_9[0] << 8 | VAR_9[1];
  return 2;
 }

 VAR_9[0] = 3;
 if (FUNC_0(VAR_8, VAR_9, VAR_4))
  return 2;

 VAR_9[0] = 0;
 if (FUNC_0(VAR_8, VAR_9, VAR_1))
  return 2;

 if (VAR_9[0] != 3) {
  VAR_9[0] = 2;
  if (FUNC_0(VAR_8, VAR_9, VAR_4))
  return 2;
 }

 FUNC_0(VAR_8, VAR_9, VAR_3);

 return 3;
}
