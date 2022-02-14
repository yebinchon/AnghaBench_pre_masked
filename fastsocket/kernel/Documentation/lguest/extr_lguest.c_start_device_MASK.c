
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {scalar_t__ service; struct virtqueue* next; } ;
struct device {unsigned int feature_len; int running; struct virtqueue* vq; int irq_on_empty; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct virtqueue*) ;
 int * FUNC_2 (struct device*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 unsigned int VAR_2;
 struct virtqueue *VAR_3;

 FUNC_3("Device %s OK: offered", VAR_1->name);
 for (VAR_2 = 0; VAR_2 < VAR_1->feature_len; VAR_2++)
  FUNC_3(" %02x", FUNC_2(VAR_1)[VAR_2]);
 FUNC_3(", accepted");
 for (VAR_2 = 0; VAR_2 < VAR_1->feature_len; VAR_2++)
  FUNC_3(" %02x", FUNC_2(VAR_1)
   [VAR_1->feature_len+VAR_2]);

 VAR_1->irq_on_empty = FUNC_0(VAR_1, VAR_0);

 for (VAR_3 = VAR_1->vq; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->service)
   FUNC_1(VAR_3);
 }
 VAR_1->running = 1;
}
