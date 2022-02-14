
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; int length; int actual; scalar_t__ dma; } ;
struct ci13xxx_req {TYPE_2__ req; TYPE_1__* ptr; scalar_t__ map; } ;
struct ci13xxx_ep {scalar_t__ dir; int device; int num; } ;
struct TYPE_3__ {int token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,struct ci13xxx_ep*,struct ci13xxx_req*) ;

__attribute__((used)) static int FUNC_5(struct ci13xxx_ep *VAR_11, struct ci13xxx_req *VAR_12)
{
 FUNC_4("%p, %p", VAR_11, VAR_12);

 if (VAR_12->req.status != -VAR_2)
  return -VAR_4;

 if (FUNC_3(VAR_11->num, VAR_11->dir))
  FUNC_2(VAR_11->num, VAR_11->dir);

 VAR_12->req.status = 0;

 if (VAR_12->map) {
  FUNC_0(VAR_11->device, VAR_12->req.dma, VAR_12->req.length,
     VAR_11->dir ? VAR_1 : VAR_0);
  VAR_12->req.dma = 0;
  VAR_12->map = 0;
 }

 VAR_12->req.status = VAR_12->ptr->token & VAR_5;
 if ((VAR_6 & VAR_12->req.status) != 0)
  VAR_12->req.status = -VAR_3;
 else if ((VAR_8 & VAR_12->req.status) != 0)
  VAR_12->req.status = -1;
 else if ((VAR_7 & VAR_12->req.status) != 0)
  VAR_12->req.status = -1;
 else if ((VAR_9 & VAR_12->req.status) != 0)
  VAR_12->req.status = -1;

 VAR_12->req.actual = VAR_12->ptr->token & VAR_10;
 VAR_12->req.actual >>= FUNC_1(VAR_10);
 VAR_12->req.actual = VAR_12->req.length - VAR_12->req.actual;
 VAR_12->req.actual = VAR_12->req.status ? 0 : VAR_12->req.actual;

 return VAR_12->req.actual;
}
