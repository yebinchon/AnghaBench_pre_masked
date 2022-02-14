
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;


 int FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 void* FUNC_2 (struct virtqueue*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_0, void (*VAR_1)(void *VAR_2))
{
 void *VAR_3;
 unsigned int VAR_4;

 do {
  FUNC_0(VAR_0);
  while ((VAR_3 = FUNC_2(VAR_0, &VAR_4)) != ((void*)0))
   VAR_1(VAR_3);
 } while (!FUNC_1(VAR_0));
}
