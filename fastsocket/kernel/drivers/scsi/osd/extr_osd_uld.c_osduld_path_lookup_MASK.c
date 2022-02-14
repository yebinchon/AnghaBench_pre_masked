
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_dev {struct file* file; } ;
struct osd_uld_device {struct osd_dev od; } ;
struct file {struct osd_uld_device* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct osd_dev* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct osd_dev*) ;
 struct osd_dev* FUNC_7 (int,int ) ;
 int VAR_4 ;

struct osd_dev *FUNC_8(const char *VAR_5)
{
 struct osd_uld_device *VAR_6;
 struct osd_dev *VAR_7;
 struct file *VAR_8;
 int VAR_9;

 if (!VAR_5 || !*VAR_5) {
  FUNC_2("Mount with !path || !*path\n");
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_4(VAR_5, VAR_3, 0);
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_3(VAR_8);
  goto free_od;
 }

 if (VAR_8->f_op != &VAR_4){
  VAR_9 = -VAR_0;
  goto close_file;
 }

 VAR_6 = VAR_8->private_data;

 *VAR_7 = VAR_6->od;
 VAR_7->file = VAR_8;

 return VAR_7;

close_file:
 FUNC_5(VAR_8);
free_od:
 FUNC_6(VAR_7);
 return FUNC_0(VAR_9);
}
