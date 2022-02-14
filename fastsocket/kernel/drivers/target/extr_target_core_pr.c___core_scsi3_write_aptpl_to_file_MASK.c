
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_wwn {unsigned char* unit_serial; } ;
struct se_device {struct t10_wwn t10_wwn; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,unsigned char*,int,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int,char*,unsigned char*) ;
 int FUNC_9 (unsigned char*) ;

__attribute__((used)) static int FUNC_10(
 struct se_device *VAR_5,
 unsigned char *VAR_6,
 u32 VAR_7)
{
 struct t10_wwn *VAR_8 = &VAR_5->t10_wwn;
 struct file *VAR_9;
 int VAR_10 = VAR_3 | VAR_2 | VAR_4;
 char VAR_11[512];
 int VAR_12;

 FUNC_5(VAR_11, 0, 512);

 if (FUNC_9(&VAR_8->unit_serial[0]) >= 512) {
  FUNC_7("WWN value for struct se_device does not fit"
   " into path buffer\n");
  return -VAR_1;
 }

 FUNC_8(VAR_11, 512, "/var/target/pr/aptpl_%s", &VAR_8->unit_serial[0]);
 VAR_9 = FUNC_2(VAR_11, VAR_10, 0600);
 if (FUNC_0(VAR_9)) {
  FUNC_7("filp_open(%s) for APTPL metadata"
   " failed\n", VAR_11);
  return FUNC_1(VAR_9);
 }

 if (!VAR_7)
  VAR_7 = (FUNC_9(&VAR_6[0]) + 1);

 VAR_12 = FUNC_4(VAR_9, VAR_6, VAR_7, 0);

 if (VAR_12 < 0)
  FUNC_6("Error writing APTPL metadata file: %s\n", VAR_11);
 FUNC_3(VAR_9);

 return VAR_12 ? -VAR_0 : 0;
}
