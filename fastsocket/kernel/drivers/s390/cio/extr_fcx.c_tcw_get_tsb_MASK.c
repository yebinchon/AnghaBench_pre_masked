
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {int dummy; } ;
struct tcw {scalar_t__ tsb; } ;
typedef scalar_t__ addr_t ;



struct tsb *FUNC_0(struct tcw *VAR_0)
{
 return (struct tsb *) ((addr_t) VAR_0->tsb);
}
