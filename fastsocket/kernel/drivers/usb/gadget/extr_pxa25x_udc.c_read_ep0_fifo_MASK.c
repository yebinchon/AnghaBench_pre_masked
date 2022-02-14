
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int actual; unsigned int length; int status; scalar_t__* buf; } ;
struct pxa25x_request {TYPE_2__ req; } ;
struct TYPE_3__ {int name; } ;
struct pxa25x_ep {TYPE_1__ ep; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (struct pxa25x_ep *VAR_6, struct pxa25x_request *VAR_7)
{
 u8 *VAR_8, VAR_9;
 unsigned VAR_10;

 VAR_8 = VAR_7->req.buf + VAR_7->req.actual;
 VAR_10 = VAR_7->req.length - VAR_7->req.actual;

 while (VAR_1 & VAR_4) {
  VAR_9 = (u8) VAR_5;

  if (FUNC_1 (VAR_10 == 0)) {




   if (VAR_7->req.status != -VAR_0)
    FUNC_0("%s overflow\n", VAR_6->ep.name);
   VAR_7->req.status = -VAR_0;
  } else {
   *VAR_8++ = VAR_9;
   VAR_7->req.actual++;
   VAR_10--;
  }
 }

 VAR_1 = VAR_3 | VAR_2;


 if (VAR_7->req.actual >= VAR_7->req.length)
  return 1;


 return 0;
}
