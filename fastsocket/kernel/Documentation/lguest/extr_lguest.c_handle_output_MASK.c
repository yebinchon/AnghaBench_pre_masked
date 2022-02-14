
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long pfn; } ;
struct virtqueue {TYPE_1__ config; struct virtqueue* next; } ;
struct device {scalar_t__ desc; unsigned long name; scalar_t__ running; struct virtqueue* vq; struct device* next; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,char*,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long VAR_2 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3)
{
 struct device *VAR_4;


 for (VAR_4 = VAR_1.dev; VAR_4; VAR_4 = VAR_4->next) {
  struct virtqueue *VAR_5;





  if (FUNC_1(VAR_3) == VAR_4->desc) {
   FUNC_5(VAR_4);
   return;
  }
  for (VAR_5 = VAR_4->vq; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_3 != VAR_5->config.pfn*FUNC_2())
    continue;
   if (VAR_4->running)
    FUNC_0(1, "Notification on running %s", VAR_4->name);

   FUNC_3(VAR_4);
   return;
  }
 }






 if (VAR_3 >= VAR_2)
  FUNC_0(1, "Bad NOTIFY %#lx", VAR_3);

 FUNC_6(VAR_0, FUNC_1(VAR_3),
       FUNC_4(FUNC_1(VAR_3), VAR_2 - VAR_3));
}
