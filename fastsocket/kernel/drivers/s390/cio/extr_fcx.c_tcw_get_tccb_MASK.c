
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcw {scalar_t__ tccb; } ;
struct tccb {int dummy; } ;
typedef scalar_t__ addr_t ;



struct tccb *FUNC_0(struct tcw *VAR_0)
{
 return (struct tccb *) ((addr_t) VAR_0->tccb);
}
