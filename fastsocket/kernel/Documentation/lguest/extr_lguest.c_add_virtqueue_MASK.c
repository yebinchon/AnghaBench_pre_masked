
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num; int pfn; scalar_t__ irq; } ;
struct virtqueue {void (* service ) (struct virtqueue*) ;struct virtqueue* next; TYPE_2__ config; int vring; scalar_t__ thread; struct device* dev; scalar_t__ last_avail_idx; } ;
struct device {struct virtqueue* vq; TYPE_1__* desc; int num_vq; } ;
typedef scalar_t__ pid_t ;
struct TYPE_6__ {int next_irq; } ;
struct TYPE_4__ {scalar_t__ config_len; scalar_t__ feature_len; int num_vq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 TYPE_3__ VAR_1 ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 struct virtqueue* FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,unsigned int,void*,int ) ;
 int FUNC_9 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_2, unsigned int VAR_3,
     void (*VAR_4)(struct virtqueue *))
{
 unsigned int VAR_5;
 struct virtqueue **VAR_6, *VAR_7 = FUNC_4(sizeof(*VAR_7));
 void *VAR_8;


 VAR_5 = (FUNC_9(VAR_3, VAR_0) + FUNC_3() - 1)
  / FUNC_3();
 VAR_8 = FUNC_2(VAR_5);


 VAR_7->next = ((void*)0);
 VAR_7->last_avail_idx = 0;
 VAR_7->dev = VAR_2;





 VAR_7->service = VAR_4;
 VAR_7->thread = (pid_t)-1;


 VAR_7->config.num = VAR_3;
 VAR_7->config.irq = VAR_1.next_irq++;
 VAR_7->config.pfn = FUNC_6(VAR_8) / FUNC_3();


 FUNC_8(&VAR_7->vring, VAR_3, VAR_8, VAR_0);







 FUNC_0(VAR_2->desc->config_len == 0 && VAR_2->desc->feature_len == 0);
 FUNC_5(FUNC_1(VAR_2), &VAR_7->config, sizeof(VAR_7->config));
 VAR_2->num_vq++;
 VAR_2->desc->num_vq++;

 FUNC_7("Virtqueue page %#lx\n", FUNC_6(VAR_8));





 for (VAR_6 = &VAR_2->vq; *VAR_6; VAR_6 = &(*VAR_6)->next);
 *VAR_6 = VAR_7;
}
