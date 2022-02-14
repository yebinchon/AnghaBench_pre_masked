
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int actual; int length; int * buf; } ;
struct lh7a40x_request {TYPE_1__ req; } ;
struct lh7a40x_ep {scalar_t__ fifo; } ;


 int FUNC_0 (char*,int,int,int volatile*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline__ int FUNC_3(struct lh7a40x_ep *VAR_0,
       struct lh7a40x_request *VAR_1, int VAR_2)
{
 u8 *VAR_3;
 int VAR_4, VAR_5;
 volatile u32 *VAR_6 = (volatile u32 *)VAR_0->fifo;

 VAR_3 = VAR_1->req.buf + VAR_1->req.actual;
 FUNC_2(VAR_3);

 VAR_4 = VAR_1->req.length - VAR_1->req.actual;
 VAR_4 = FUNC_1(VAR_4, VAR_2);
 VAR_1->req.actual += VAR_4;

 FUNC_0("Write %d (max %d), fifo %p\n", VAR_4, VAR_2, VAR_6);

 VAR_5 = VAR_4;
 while (VAR_5--) {
  *VAR_6 = *VAR_3++;
 }

 return VAR_4;
}
