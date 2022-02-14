
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int queue_mapping; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct sk_buff *VAR_0)
{
 return VAR_0->queue_mapping >> 1;
}
