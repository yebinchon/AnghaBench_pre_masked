
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char vq_callback_t ;
typedef int u32 ;
typedef char virtqueue ;
struct TYPE_4__ {int max_nr_ports; } ;
struct ports_device {char** in_vqs; char** out_vqs; char* c_ivq; char* c_ovq; TYPE_3__* vdev; TYPE_1__ config; } ;
struct TYPE_6__ {TYPE_2__* config; } ;
struct TYPE_5__ {int (* find_vqs ) (TYPE_3__*,int,char**,char**,char const**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char**) ;
 void* FUNC_1 (int,int ) ;
 char* VAR_4 ;
 int FUNC_2 (TYPE_3__*,int,char**,char**,char const**) ;
 scalar_t__ FUNC_3 (struct ports_device*) ;

__attribute__((used)) static int FUNC_4(struct ports_device *VAR_5)
{
 vq_callback_t **VAR_6;
 char **VAR_7;
 struct virtqueue **VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = VAR_5->config.max_nr_ports;
 VAR_12 = FUNC_3(VAR_5) ? (VAR_11 + 1) * 2 : 2;

 VAR_8 = FUNC_1(VAR_12 * sizeof(struct virtqueue *), VAR_1);
 VAR_6 = FUNC_1(VAR_12 * sizeof(vq_callback_t *), VAR_1);
 VAR_7 = FUNC_1(VAR_12 * sizeof(char *), VAR_1);
 VAR_5->in_vqs = FUNC_1(VAR_11 * sizeof(struct virtqueue *),
      VAR_1);
 VAR_5->out_vqs = FUNC_1(VAR_11 * sizeof(struct virtqueue *),
       VAR_1);
 if (!VAR_8 || !VAR_6 || !VAR_7 || !VAR_5->in_vqs ||
     !VAR_5->out_vqs) {
  VAR_13 = -VAR_0;
  goto free;
 }






 VAR_10 = 0;
 VAR_6[VAR_10] = VAR_3;
 VAR_6[VAR_10 + 1] = VAR_4;
 VAR_7[VAR_10] = "input";
 VAR_7[VAR_10 + 1] = "output";
 VAR_10 += 2;

 if (FUNC_3(VAR_5)) {
  VAR_6[VAR_10] = VAR_2;
  VAR_6[VAR_10 + 1] = ((void*)0);
  VAR_7[VAR_10] = "control-i";
  VAR_7[VAR_10 + 1] = "control-o";

  for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++) {
   VAR_10 += 2;
   VAR_6[VAR_10] = VAR_3;
   VAR_6[VAR_10 + 1] = VAR_4;
   VAR_7[VAR_10] = "input";
   VAR_7[VAR_10 + 1] = "output";
  }
 }

 VAR_13 = VAR_5->vdev->config->find_vqs(VAR_5->vdev, VAR_12, VAR_8,
           VAR_6,
           (const char **)VAR_7);
 if (VAR_13)
  goto free;

 VAR_10 = 0;
 VAR_5->in_vqs[0] = VAR_8[0];
 VAR_5->out_vqs[0] = VAR_8[1];
 VAR_10 += 2;
 if (FUNC_3(VAR_5)) {
  VAR_5->c_ivq = VAR_8[VAR_10];
  VAR_5->c_ovq = VAR_8[VAR_10 + 1];

  for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++) {
   VAR_10 += 2;
   VAR_5->in_vqs[VAR_9] = VAR_8[VAR_10];
   VAR_5->out_vqs[VAR_9] = VAR_8[VAR_10 + 1];
  }
 }
 FUNC_0(VAR_7);
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);

 return 0;

free:
 FUNC_0(VAR_5->out_vqs);
 FUNC_0(VAR_5->in_vqs);
 FUNC_0(VAR_7);
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);

 return VAR_13;
}
