
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct TYPE_3__ {scalar_t__ desc; } ;
struct virtqueue {scalar_t__ thread; TYPE_2__ config; TYPE_1__ vring; struct virtqueue* next; } ;
struct device {int running; struct virtqueue* vq; scalar_t__ feature_len; int name; } ;
typedef scalar_t__ pid_t ;
typedef int lg_last_avail ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_5)
{
 struct virtqueue *VAR_6;

 FUNC_4("Resetting device %s\n", VAR_5->name);


 FUNC_2(FUNC_0(VAR_5) + VAR_5->feature_len, 0, VAR_5->feature_len);


 FUNC_3(VAR_1, VAR_3);


 for (VAR_6 = VAR_5->vq; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->thread != (pid_t)-1) {
   FUNC_1(VAR_6->thread, VAR_2);
   FUNC_6(VAR_6->thread, ((void*)0), 0);
   VAR_6->thread = (pid_t)-1;
  }
  FUNC_2(VAR_6->vring.desc, 0,
         FUNC_5(VAR_6->config.num, VAR_0));
  lg_last_avail(VAR_7) = 0;
 }
 VAR_5->running = 0;


 FUNC_3(VAR_1, (void *)VAR_4);
}
