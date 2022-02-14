
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int tail; int head; } ;



__attribute__((used)) static inline unsigned FUNC_0(struct dio_submit *VAR_0)
{
 return VAR_0->tail - VAR_0->head;
}
