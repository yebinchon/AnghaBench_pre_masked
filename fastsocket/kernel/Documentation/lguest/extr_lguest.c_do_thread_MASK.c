
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int (* service ) (struct virtqueue*) ;} ;


 int FUNC_0 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct virtqueue *VAR_1 = VAR_0;

 for (;;)
  VAR_1->service(VAR_1);
 return 0;
}
