
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct sep_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sep_device*,unsigned long) ;
 int FUNC_3 (struct sep_device*,unsigned long) ;
 int FUNC_4 (struct sep_device*,unsigned long) ;
 int FUNC_5 (struct sep_device*,unsigned long) ;
 int FUNC_6 (struct sep_device*,unsigned long) ;
 int FUNC_7 (struct sep_device*,unsigned long) ;
 int FUNC_8 (struct sep_device*) ;
 int FUNC_9 (struct sep_device*,unsigned long) ;
 int FUNC_10 (struct sep_device*,unsigned long) ;
 int FUNC_11 (struct sep_device*,unsigned long) ;
 int FUNC_12 (struct sep_device*,unsigned long) ;
 int FUNC_13 (struct sep_device*,unsigned long) ;
 int FUNC_14 (struct sep_device*,unsigned long) ;
 int FUNC_15 (struct sep_device*) ;
 int FUNC_16 (struct sep_device*) ;
 int FUNC_17 (struct sep_device*,unsigned long) ;
 int FUNC_18 (struct sep_device*) ;
 int FUNC_19 (struct sep_device*,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_1, struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5 = 0;
 struct sep_device *VAR_6 = VAR_2->private_data;

 FUNC_0("------------>SEP Driver: ioctl start\n");

 FUNC_1("SEP Driver: cmd is %x\n", VAR_3);

 switch (VAR_3) {
 case 133:

  FUNC_15(VAR_6);
  FUNC_1("SEP Driver: after sep_send_command_handler\n");
  break;
 case 132:

  FUNC_16(VAR_6);
  break;
 case 143:

  VAR_5 = FUNC_4(VAR_6, VAR_4);
  break;
 case 128:

  VAR_5 = FUNC_19(VAR_6, VAR_4);
  break;
 case 135:

  VAR_5 = FUNC_13(VAR_6, VAR_4);
  break;
 case 141:

  VAR_5 = FUNC_6(VAR_6, VAR_4);
  break;
 case 142:

  VAR_5 = FUNC_5(VAR_6, VAR_4);
  break;
 case 139:

  VAR_5 = FUNC_8(VAR_6);
  break;
 case 129:

  VAR_5 = FUNC_17(VAR_6, (unsigned long)VAR_4);
  break;
 case 144:

  VAR_5 = FUNC_2(VAR_6, VAR_4);
  break;
 case 145:

  VAR_5 = FUNC_3(VAR_6, VAR_4);
  break;
 case 130:

  VAR_5 = FUNC_18(VAR_6);
  break;
 case 131:

  VAR_5 = FUNC_12(VAR_6, VAR_4);
  break;
 case 136:

  VAR_5 = FUNC_10(VAR_6, VAR_4);
  break;
 case 140:
  VAR_5 = FUNC_7(VAR_6, VAR_4);
  break;
 case 134:
  VAR_5 = FUNC_14(VAR_6, VAR_4);
  break;
 case 137:
  VAR_5 = FUNC_9(VAR_6, VAR_4);
  break;
 case 138:
  VAR_5 = FUNC_11(VAR_6, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_0("SEP Driver:<-------- ioctl end\n");
 return VAR_5;
}
