
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int in_request_module; scalar_t__ use_count; int mutex; int (* open ) (struct comedi_device*) ;scalar_t__ attached; TYPE_1__* driver; int minor; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct comedi_device_file_info* FUNC_3 (unsigned int const) ;
 unsigned int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, struct file *VAR_6)
{
 const unsigned VAR_7 = FUNC_4(VAR_5);
 struct comedi_device_file_info *VAR_8 =
     FUNC_3(VAR_7);
 struct comedi_device *VAR_9 =
     VAR_8 ? VAR_8->device : ((void*)0);

 if (VAR_9 == ((void*)0)) {
  FUNC_0("invalid minor number\n");
  return -VAR_2;
 }
 FUNC_6(&VAR_9->mutex);
 if (VAR_9->attached)
  goto ok;
 if (!FUNC_2(VAR_0) && VAR_9->in_request_module) {
  FUNC_0("in request module\n");
  FUNC_7(&VAR_9->mutex);
  return -VAR_2;
 }
 if (FUNC_2(VAR_0) && VAR_9->in_request_module)
  goto ok;

 VAR_9->in_request_module = 1;







 VAR_9->in_request_module = 0;

 if (!VAR_9->attached && !FUNC_2(VAR_0)) {
  FUNC_0("not attached and not CAP_NET_ADMIN\n");
  FUNC_7(&VAR_9->mutex);
  return -VAR_2;
 }
ok:
 FUNC_1(VAR_4);

 if (VAR_9->attached) {
  if (!FUNC_10(VAR_9->driver->module)) {
   FUNC_5(VAR_4);
   FUNC_7(&VAR_9->mutex);
   return -VAR_3;
  }
 }

 if (VAR_9->attached && VAR_9->use_count == 0 && VAR_9->open)
  VAR_9->open(VAR_9);

 VAR_9->use_count++;

 FUNC_7(&VAR_9->mutex);

 return 0;
}
