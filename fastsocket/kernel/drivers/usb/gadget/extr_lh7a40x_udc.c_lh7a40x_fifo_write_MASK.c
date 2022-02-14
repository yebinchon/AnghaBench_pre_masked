
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lh7a40x_ep {scalar_t__ fifo; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct lh7a40x_ep*) ;

__attribute__((used)) static __inline__ void FUNC_2(struct lh7a40x_ep *VAR_0,
       unsigned char *VAR_1, int VAR_2)
{
 volatile u32 *VAR_3 = (volatile u32 *)VAR_0->fifo;
 FUNC_0("fifo_write: %d %d\n", FUNC_1(VAR_0), VAR_2);
 while (VAR_2--)
  *VAR_3 = *VAR_1++;
}
