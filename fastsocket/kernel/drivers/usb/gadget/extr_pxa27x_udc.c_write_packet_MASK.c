
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pxa_ep {int dummy; } ;
struct TYPE_2__ {scalar_t__ actual; int length; scalar_t__ buf; } ;
struct pxa27x_request {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa_ep*,char*,int,int,int ) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pxa_ep*,int ) ;
 int FUNC_4 (struct pxa_ep*,int ,int ) ;
 int FUNC_5 (struct pxa_ep*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pxa_ep *VAR_2, struct pxa27x_request *VAR_3,
   unsigned int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 u32 *VAR_9;
 u8 *VAR_10;

 VAR_9 = (u32 *)(VAR_3->req.buf + VAR_3->req.actual);
 FUNC_2(VAR_9);

 VAR_5 = FUNC_1(VAR_3->req.length - VAR_3->req.actual, VAR_4);
 VAR_3->req.actual += VAR_5;

 VAR_7 = VAR_5 & 0x3;
 VAR_6 = VAR_5 & ~(0x3);
 for (VAR_8 = VAR_6; VAR_8 > 0 ; VAR_8 -= 4)
  FUNC_5(VAR_2, VAR_1, *VAR_9++);

 VAR_10 = (u8 *)VAR_9;
 for (VAR_8 = VAR_7; VAR_8 > 0; VAR_8--)
  FUNC_4(VAR_2, VAR_1, *VAR_10++);

 FUNC_0(VAR_2, "length=%d+%d, udccsr=0x%03x\n", VAR_6, VAR_7,
  FUNC_3(VAR_2, VAR_0));

 return VAR_5;
}
