
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int length; scalar_t__ actual; } ;
struct pxa25x_request {TYPE_3__ req; } ;
struct pxa25x_ep {TYPE_4__* dev; } ;
struct TYPE_6__ {unsigned int bytes; } ;
struct TYPE_7__ {TYPE_1__ write; } ;
struct TYPE_9__ {scalar_t__ req_pending; TYPE_2__ stats; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__,struct pxa25x_request*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pxa25x_ep*,struct pxa25x_request*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int FUNC_6 (int *,struct pxa25x_request*,unsigned int) ;

__attribute__((used)) static int
FUNC_7 (struct pxa25x_ep *VAR_6, struct pxa25x_request *VAR_7)
{
 unsigned VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(&VAR_5, VAR_7, VAR_1);
 VAR_6->dev->stats.write.bytes += VAR_8;


 VAR_9 = (VAR_8 != VAR_1);

 FUNC_0(VAR_0, "ep0in %d bytes %d left %p\n", VAR_8,
  VAR_7->req.length - VAR_7->req.actual, VAR_7);

 if (FUNC_5 (VAR_9)) {
  if (VAR_6->dev->req_pending)
   FUNC_3(VAR_6->dev, VAR_3, "short IN");
  else
   VAR_2 = VAR_3;

  VAR_8 = VAR_7->req.length;
  FUNC_1 (VAR_6, VAR_7, 0);
  FUNC_2(VAR_6->dev);
  if (VAR_8 >= VAR_1) {
   VAR_8 = 100;
   do {
    if ((VAR_2 & VAR_4) != 0) {

     VAR_2 = VAR_4;
     break;
    }
    VAR_8--;
    FUNC_4(1);
   } while (VAR_8);
  }


 } else if (VAR_6->dev->req_pending)
  FUNC_3(VAR_6->dev, 0, "IN");
 return VAR_9;
}
