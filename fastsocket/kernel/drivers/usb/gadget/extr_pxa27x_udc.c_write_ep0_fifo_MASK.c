
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_ep {int dummy; } ;
struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct pxa27x_request {TYPE_1__ req; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pxa_ep*,char*,unsigned int,char*,char*,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_1 (struct pxa_ep*,int ) ;
 int FUNC_2 (struct pxa_ep*,unsigned int,int ) ;
 int FUNC_3 (struct pxa_ep*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int FUNC_5 (struct pxa_ep*,struct pxa27x_request*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct pxa_ep *VAR_4, struct pxa27x_request *VAR_5)
{
 unsigned VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_0);
 FUNC_2(VAR_4, VAR_6, VAR_3);

 VAR_8 = (VAR_6 < VAR_0);
 VAR_7 = ((VAR_6 == 0) || (VAR_6 < VAR_0));


 if (FUNC_4(VAR_8))
  FUNC_1(VAR_4, VAR_2);

 FUNC_0(VAR_4, "in %d bytes%s%s, %d left, req=%p, udccsr0=0x%03x\n",
  VAR_6, VAR_8 ? "/S" : "", VAR_7 ? "/L" : "",
  VAR_5->req.length - VAR_5->req.actual,
  &VAR_5->req, FUNC_3(VAR_4, VAR_1));

 return VAR_7;
}
