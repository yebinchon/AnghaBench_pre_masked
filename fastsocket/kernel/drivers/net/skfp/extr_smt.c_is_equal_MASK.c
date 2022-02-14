
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct fddi_addr {int * a; } ;



__attribute__((used)) static inline int FUNC_0(const struct fddi_addr *VAR_0,
      const struct fddi_addr *VAR_1)
{
 return(*(u_short *)(&VAR_0->a[0]) == *(u_short *)(&VAR_1->a[0]) &&
        *(u_short *)(&VAR_0->a[2]) == *(u_short *)(&VAR_1->a[2]) &&
        *(u_short *)(&VAR_0->a[4]) == *(u_short *)(&VAR_1->a[4]) ) ;
}
