
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,struct file*) ;
 int FUNC_1 (unsigned long,struct file*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int const) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, struct file *VAR_2, unsigned int VAR_3,
    unsigned long VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
 case 137:
  VAR_5 = FUNC_3(VAR_4);
  break;

 case 136:
  VAR_5 = FUNC_2(VAR_4);
  break;

 case 135:
  VAR_5 = FUNC_4(VAR_4);
  break;

 case 133:
  VAR_5 = FUNC_5(VAR_4, 133);
  break;

 case 134:
  VAR_5 = FUNC_5(VAR_4, 134);
  break;

 case 130:
  VAR_5 = FUNC_8(VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_9(VAR_4);
  break;

 case 131:
  VAR_5 = FUNC_7(VAR_4);
  break;

 case 128:
  VAR_5 = FUNC_10(VAR_4);
  break;

 case 138:
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  break;

 case 139:
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  break;







 default:
  FUNC_11("unknown ioctl called!\n");
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
