
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;


 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 unsigned char FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,unsigned char,...) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_2, struct file *VAR_3,
   unsigned int VAR_4, unsigned long VAR_5)
{
 if(FUNC_5(VAR_4) != VAR_1) {
  return -VAR_0;
 }

 switch (FUNC_4(VAR_4)) {
  case 128:

   FUNC_0(FUNC_8("i2cw %d %d %d\n",
     FUNC_2(VAR_5),
     FUNC_1(VAR_5),
     FUNC_3(VAR_5)));

   return FUNC_7(FUNC_2(VAR_5),
         FUNC_1(VAR_5),
         FUNC_3(VAR_5));
  case 129:
  {
   unsigned char VAR_6;

   FUNC_0(FUNC_8("i2cr %d %d ",
    FUNC_2(VAR_5),
    FUNC_1(VAR_5)));
   VAR_6 = FUNC_6(FUNC_2(VAR_5), FUNC_1(VAR_5));
   FUNC_0(FUNC_8("= %d\n", VAR_6));
   return VAR_6;
  }
  default:
   return -VAR_0;

 }

 return 0;
}
