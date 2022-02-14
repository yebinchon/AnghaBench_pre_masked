
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {int length; } ;


 int FUNC_0 (struct RingQueue const*) ;

__attribute__((used)) static inline int FUNC_1(const struct RingQueue *VAR_0)
{
 return VAR_0->length - FUNC_0(VAR_0);
}
