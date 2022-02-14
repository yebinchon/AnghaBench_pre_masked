
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsdevice_params_t {int buffer_size; int num_buffers; int device_type; int devpath; int flags; int postload_handler; int preload_handler; int sendrequest_handler; int detectmode_handler; int setmode_handler; int device; int context; } ;
struct smscore_device_t {int common_buffer_size; scalar_t__ num_buffers; int entry; int devpath; int device_flags; int postload_handler; int preload_handler; int sendrequest_handler; int detectmode_handler; int setmode_handler; int device; int context; int mode; int common_buffer_phys; int * common_buffer; int buffer_mng_waitq; int ir_init_done; int gpio_get_level_done; int gpio_set_level_done; int gpio_configuration_done; int resume_done; int reload_start_done; int init_device_done; int trigger_done; int data_download_done; int version_ex_done; int bufferslock; int clientslock; int buffers; int clients; } ;
struct smscore_buffer_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct smscore_device_t* FUNC_6 (int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,...) ;
 struct smscore_buffer_t* FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct smscore_device_t*,struct smscore_buffer_t*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct smscore_device_t*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;

int FUNC_15(struct smsdevice_params_t *VAR_6,
       struct smscore_device_t **VAR_7)
{
 struct smscore_device_t *VAR_8;
 u8 *VAR_9;

 VAR_8 = FUNC_6(sizeof(struct smscore_device_t), VAR_3);
 if (!VAR_8) {
  FUNC_8("kzalloc(...) failed");
  return -VAR_1;
 }


 FUNC_0(&VAR_8->entry);


 FUNC_0(&VAR_8->clients);
 FUNC_0(&VAR_8->buffers);


 FUNC_13(&VAR_8->clientslock);
 FUNC_13(&VAR_8->bufferslock);


 FUNC_2(&VAR_8->version_ex_done);
 FUNC_2(&VAR_8->data_download_done);
 FUNC_2(&VAR_8->trigger_done);
 FUNC_2(&VAR_8->init_device_done);
 FUNC_2(&VAR_8->reload_start_done);
 FUNC_2(&VAR_8->resume_done);
 FUNC_2(&VAR_8->gpio_configuration_done);
 FUNC_2(&VAR_8->gpio_set_level_done);
 FUNC_2(&VAR_8->gpio_get_level_done);
 FUNC_2(&VAR_8->ir_init_done);


 FUNC_3(&VAR_8->buffer_mng_waitq);


 VAR_8->common_buffer_size = VAR_6->buffer_size * VAR_6->num_buffers;
 VAR_8->common_buffer = FUNC_1(((void*)0), VAR_8->common_buffer_size,
      &VAR_8->common_buffer_phys,
      VAR_3 | VAR_2);
 if (!VAR_8->common_buffer) {
  FUNC_12(VAR_8);
  return -VAR_1;
 }


 for (VAR_9 = VAR_8->common_buffer;
      VAR_8->num_buffers < VAR_6->num_buffers;
      VAR_8->num_buffers++, VAR_9 += VAR_6->buffer_size) {
  struct smscore_buffer_t *VAR_10 =
   FUNC_9(VAR_9, VAR_8->common_buffer,
          VAR_8->common_buffer_phys);
  if (!VAR_10) {
   FUNC_12(VAR_8);
   return -VAR_1;
  }

  FUNC_10(VAR_8, VAR_10);
 }

 FUNC_8("allocated %d buffers", VAR_8->num_buffers);

 VAR_8->mode = VAR_0;
 VAR_8->context = VAR_6->context;
 VAR_8->device = VAR_6->device;
 VAR_8->setmode_handler = VAR_6->setmode_handler;
 VAR_8->detectmode_handler = VAR_6->detectmode_handler;
 VAR_8->sendrequest_handler = VAR_6->sendrequest_handler;
 VAR_8->preload_handler = VAR_6->preload_handler;
 VAR_8->postload_handler = VAR_6->postload_handler;

 VAR_8->device_flags = VAR_6->flags;
 FUNC_14(VAR_8->devpath, VAR_6->devpath);

 FUNC_11(VAR_8->devpath, VAR_6->device_type);


 FUNC_4(&VAR_5);
 FUNC_7(&VAR_8->entry, &VAR_4);
 FUNC_5(&VAR_5);

 *VAR_7 = VAR_8;

 FUNC_8("device %p created", VAR_8);

 return 0;
}
