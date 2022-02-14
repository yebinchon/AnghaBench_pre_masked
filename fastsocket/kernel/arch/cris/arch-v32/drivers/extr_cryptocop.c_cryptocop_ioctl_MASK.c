
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;




 scalar_t__ VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int VAR_7 ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_7 (struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_8 (struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_8, struct file *VAR_9, unsigned int VAR_10, unsigned long VAR_11)
{
 int VAR_12 = 0;
 if (FUNC_4(VAR_10) != VAR_3) {
  FUNC_0(FUNC_9("cryptocop_ioctl: wrong type\n"));
  return -VAR_2;
 }
 if (FUNC_2(VAR_10) > VAR_0){
  return -VAR_2;
 }


 if (FUNC_1(VAR_10) & VAR_6)
  VAR_12 = !FUNC_5(VAR_5, (void *)VAR_11, FUNC_3(VAR_10));
 else if (FUNC_1(VAR_10) & VAR_7)
  VAR_12 = !FUNC_5(VAR_4, (void *)VAR_11, FUNC_3(VAR_10));
 if (VAR_12) return -VAR_1;

 switch (VAR_10) {
 case 129:
  return FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11);
 case 130:
  return FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11);
 case 128:
  return FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11);
 default:
  FUNC_0(FUNC_9("cryptocop_ioctl: unknown command\n"));
  return -VAR_2;
 }
 return 0;
}
