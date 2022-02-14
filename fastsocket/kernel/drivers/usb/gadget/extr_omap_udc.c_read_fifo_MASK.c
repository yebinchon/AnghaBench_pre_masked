
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ actual; int status; int * buf; } ;
struct omap_req {TYPE_2__ req; } ;
struct TYPE_3__ {unsigned int maxpacket; } ;
struct omap_ep {int double_buf; int fnf; int bEndpointAddress; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct omap_ep*,struct omap_req*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,struct omap_req*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct omap_ep *VAR_7, struct omap_req *VAR_8)
{
 u8 *VAR_9;
 unsigned VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = VAR_8->req.buf + VAR_8->req.actual;
 FUNC_2(VAR_9);

 for (;;) {
  u16 VAR_13 = FUNC_1(VAR_6);

  VAR_12 = 0;
  if (VAR_13 & VAR_1) {
   if (!VAR_7->double_buf)
    break;
   VAR_7->fnf = 1;
  }
  if (VAR_13 & VAR_3)
   break;

  if (VAR_13 & VAR_4)
   VAR_11 = VAR_7->ep.maxpacket;
  else {
   VAR_11 = FUNC_1(VAR_5);
   VAR_7->fnf = VAR_7->double_buf;
  }
  VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_11);


  if (VAR_10 < VAR_7->ep.maxpacket) {
   VAR_12 = 1;

   if (VAR_10 != VAR_11) {
    VAR_8->req.status = -VAR_0;
    VAR_11 -= VAR_10;
    while (VAR_11--)
     FUNC_1(VAR_2);
   }
  } else if (VAR_8->req.length == VAR_8->req.actual)
   VAR_12 = 1;
  else
   VAR_12 = 0;

  if (!VAR_7->bEndpointAddress)
   break;
  if (VAR_12)
   FUNC_0(VAR_7, VAR_8, 0);
  break;
 }
 return VAR_12;
}
