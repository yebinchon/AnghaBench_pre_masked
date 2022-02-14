
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct mainscan {int carr; int std; int name; } ;
typedef int __s32 ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct saa7134_dev*,int,int) ;
 scalar_t__ FUNC_4 (struct saa7134_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct saa7134_dev *VAR_3, struct mainscan *VAR_4)
{
 __s32 VAR_5,VAR_6,VAR_7;

 if (VAR_2 > 1) {
  int VAR_8;
  FUNC_0("debug %d:",VAR_4->carr);
  for (VAR_8 = -150; VAR_8 <= 150; VAR_8 += 30) {
   FUNC_3(VAR_3,VAR_4->carr+VAR_8,VAR_4->carr+VAR_8);
   FUNC_2(VAR_0 >> 2);
   if (FUNC_4(VAR_3,VAR_1))
    return -1;
   VAR_7 = FUNC_2(VAR_0 >> 2);
   if (0 == VAR_8)
    FUNC_1("  #  %6d  # ",VAR_7 >> 16);
   else
    FUNC_1(" %6d",VAR_7 >> 16);
  }
  FUNC_1("\n");
 }
 if (VAR_3->tvnorm->id & VAR_4->std) {
  FUNC_3(VAR_3,VAR_4->carr-90,VAR_4->carr-90);
  FUNC_2(VAR_0 >> 2);
  if (FUNC_4(VAR_3,VAR_1))
   return -1;
  VAR_5 = FUNC_2(VAR_0 >> 2);

  FUNC_3(VAR_3,VAR_4->carr+90,VAR_4->carr+90);
  FUNC_2(VAR_0 >> 2);
  if (FUNC_4(VAR_3,VAR_1))
   return -1;
  VAR_6 = FUNC_2(VAR_0 >> 2);

  VAR_5 >>= 16;
  VAR_6 >>= 16;
  VAR_7 = VAR_5 > VAR_6 ? VAR_5 - VAR_6 : VAR_6 - VAR_5;
  FUNC_0("scanning %d.%03d MHz [%4s] =>  dc is %5d [%d/%d]\n",
   VAR_4->carr / 1000, VAR_4->carr % 1000,
   VAR_4->name, VAR_7, VAR_5, VAR_6);
 } else {
  VAR_7 = 0;
  FUNC_0("skipping %d.%03d MHz [%4s]\n",
   VAR_4->carr / 1000, VAR_4->carr % 1000, VAR_4->name);
 }
 return VAR_7;
}
