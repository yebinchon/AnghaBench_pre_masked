
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;


 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 unsigned char FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,unsigned char,...) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_3, struct file *VAR_4,
   unsigned int VAR_5, unsigned long VAR_6)
{
 if(FUNC_5(VAR_5) != VAR_2) {
  return -VAR_1;
 }

 switch (FUNC_4(VAR_5)) {
  case 128:

   FUNC_0(FUNC_8("i2cw %d %d %d\n",
     FUNC_2(VAR_6),
     FUNC_1(VAR_6),
     FUNC_3(VAR_6)));

   return FUNC_7(FUNC_2(VAR_6),
         FUNC_1(VAR_6),
         FUNC_3(VAR_6));
  case 129:
  {
   unsigned char VAR_7;

   FUNC_0(FUNC_8("i2cr %d %d ",
    FUNC_2(VAR_6),
    FUNC_1(VAR_6)));
   VAR_7 = FUNC_6(FUNC_2(VAR_6), FUNC_1(VAR_6));
   FUNC_0(FUNC_8("= %d\n", VAR_7));
   return VAR_7;
  }
  default:
   return -VAR_0;

 }

 return 0;
}
