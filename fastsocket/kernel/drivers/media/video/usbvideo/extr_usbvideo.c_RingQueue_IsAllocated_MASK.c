
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {scalar_t__ length; int * queue; } ;



__attribute__((used)) static int FUNC_0(const struct RingQueue *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 return (VAR_0->queue != ((void*)0)) && (VAR_0->length > 0);
}
