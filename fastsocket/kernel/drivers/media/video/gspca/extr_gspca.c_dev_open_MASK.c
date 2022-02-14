
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debug; } ;
struct gspca_dev {TYPE_1__ vdev; int module; int present; } ;
struct file {struct gspca_dev* private_data; } ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7)
{
 struct gspca_dev *VAR_8;

 FUNC_0(VAR_0, "[%s] open", VAR_5->comm);
 VAR_8 = (struct gspca_dev *) FUNC_2(VAR_7);
 if (!VAR_8->present)
  return -VAR_2;


 if (!FUNC_1(VAR_8->module))
  return -VAR_2;

 VAR_7->private_data = VAR_8;
 return 0;
}
