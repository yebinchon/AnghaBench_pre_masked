
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int dummy; } ;
struct dst_entry {struct neighbour* neighbour; } ;



__attribute__((used)) static inline struct neighbour *FUNC_0(struct dst_entry *VAR_0)
{
 return VAR_0->neighbour;
}
