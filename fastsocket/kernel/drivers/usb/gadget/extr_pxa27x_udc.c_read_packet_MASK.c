
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa_ep {int dummy; } ;
struct TYPE_2__ {int length; int actual; int buf; } ;
struct pxa27x_request {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa_ep*) ;
 int FUNC_1 (struct pxa_ep*) ;
 int FUNC_2 (struct pxa_ep*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pxa_ep*,int ) ;

__attribute__((used)) static int FUNC_7(struct pxa_ep *VAR_2, struct pxa27x_request *VAR_3)
{
 u32 *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = VAR_3->req.length - VAR_3->req.actual;

 VAR_4 = (u32 *)(VAR_3->req.buf + VAR_3->req.actual);
 FUNC_5(VAR_4);

 if (FUNC_3(!FUNC_1(VAR_2)))
  VAR_7 = FUNC_4(VAR_5, VAR_6);
 else
  VAR_7 = 0;

 for (VAR_8 = VAR_7; VAR_8 > 0; VAR_8 -= 4)
  *VAR_4++ = FUNC_6(VAR_2, VAR_1);
 VAR_3->req.actual += VAR_7;

 FUNC_2(VAR_2, VAR_0);

 return VAR_7;
}
