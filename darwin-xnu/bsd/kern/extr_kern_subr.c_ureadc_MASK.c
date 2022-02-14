
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_6__ {TYPE_2__* kiovp; TYPE_1__* uiovp; } ;
struct uio {scalar_t__ uio_iovcnt; TYPE_3__ uio_iovs; scalar_t__ uio_segflg; } ;
struct TYPE_5__ {int iov_base; } ;
struct TYPE_4__ {int iov_base; } ;


 int* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct uio*) ;
 scalar_t__ FUNC_4 (struct uio*) ;
 int FUNC_5 (struct uio*,int) ;

int
FUNC_6(int VAR_2, struct uio *VAR_3)
{
 if (FUNC_4(VAR_3) <= 0)
  FUNC_1("ureadc: non-positive resid");
 FUNC_5(VAR_3, 0);
 if (VAR_3->uio_iovcnt == 0)
  FUNC_1("ureadc: non-positive iovcnt");
 if (FUNC_3(VAR_3) <= 0)
  FUNC_1("ureadc: non-positive iovlen");

 switch ((int) VAR_3->uio_segflg) {

 case 129:
 case 130:
 case 132:
 case 133:
 case 128:
 case 131:
  if (FUNC_2((user_addr_t)VAR_3->uio_iovs.uiovp->iov_base, VAR_2) < 0)
   return (VAR_0);
  break;

 case 134:
 case 135:
  *(FUNC_0(VAR_1, VAR_3->uio_iovs.kiovp->iov_base)) = VAR_2;
  break;

 default:
  break;
 }
 FUNC_5(VAR_3, 1);
 return (0);
}
