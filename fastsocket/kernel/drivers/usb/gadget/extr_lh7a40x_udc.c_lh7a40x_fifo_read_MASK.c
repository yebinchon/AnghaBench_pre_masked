
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lh7a40x_ep {scalar_t__ fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __inline__ int FUNC_1(struct lh7a40x_ep *VAR_1,
     unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_0);
 volatile u32 *VAR_6 = (volatile u32 *)VAR_1->fifo;

 if (VAR_5 > VAR_3)
  VAR_5 = VAR_3;
 VAR_4 = VAR_5;
 while (VAR_5--)
  *VAR_2++ = *VAR_6 & 0xFF;
 return VAR_4;
}
