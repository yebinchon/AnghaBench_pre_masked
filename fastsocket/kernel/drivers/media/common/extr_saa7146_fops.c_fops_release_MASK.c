
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct saa7146_fh {scalar_t__ type; struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_3__* ext; TYPE_2__* ext_vv_data; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_10__ {int (* release ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_9__ {int (* release ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_8__ {int module; } ;
struct TYPE_6__ {int (* release ) (struct file*) ;} ;
struct TYPE_7__ {int capabilities; TYPE_1__ vbi_fops; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct saa7146_fh*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (struct saa7146_dev*,struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct saa7146_dev*,struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6)
{
 struct saa7146_fh *VAR_7 = VAR_6->private_data;
 struct saa7146_dev *VAR_8 = VAR_7->dev;

 FUNC_0(("file:%p\n", VAR_6));

 if (FUNC_3(&VAR_3))
  return -VAR_0;

 if( VAR_7->type == VAR_1) {
  if (VAR_8->ext_vv_data->capabilities & VAR_2)
   VAR_4.release(VAR_8,VAR_6);
  if (VAR_8->ext_vv_data->vbi_fops.release)
   VAR_8->ext_vv_data->vbi_fops.release(VAR_6);
 } else {
  VAR_5.release(VAR_8,VAR_6);
 }

 FUNC_2(VAR_8->ext->module);
 VAR_6->private_data = ((void*)0);
 FUNC_1(VAR_7);

 FUNC_4(&VAR_3);

 return 0;
}
