
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {int wi; int ri; int length; } ;



__attribute__((used)) static inline int FUNC_0(const struct RingQueue *VAR_0)
{
 return (VAR_0->wi - VAR_0->ri + VAR_0->length) & (VAR_0->length-1);
}
