
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int zero; int length; int actual; } ;
struct s3c2410_request {TYPE_2__ req; } ;
struct TYPE_4__ {unsigned int maxpacket; } ;
struct s3c2410_ep {int bEndpointAddress; TYPE_3__* dev; TYPE_1__ ep; } ;
struct TYPE_6__ {int ep0state; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,unsigned int,int ,int ,int,int ) ;
 int FUNC_1 (struct s3c2410_ep*,struct s3c2410_request*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int,struct s3c2410_request*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct s3c2410_ep *VAR_13,
  struct s3c2410_request *VAR_14)
{
 unsigned VAR_15;
 int VAR_16;
 u32 VAR_17;
 int VAR_18;
 u32 VAR_19;

 VAR_17 = VAR_13->bEndpointAddress & 0x7F;
 switch (VAR_17) {
 default:
  VAR_17 = 0;
 case 0:
  VAR_18 = VAR_2;
  break;
 case 1:
  VAR_18 = VAR_3;
  break;
 case 2:
  VAR_18 = VAR_4;
  break;
 case 3:
  VAR_18 = VAR_5;
  break;
 case 4:
  VAR_18 = VAR_6;
  break;
 }

 VAR_15 = FUNC_4(VAR_18, VAR_14, VAR_13->ep.maxpacket);


 if (VAR_15 != VAR_13->ep.maxpacket)
  VAR_16 = 1;
 else if (VAR_14->req.length != VAR_14->req.actual || VAR_14->req.zero)
  VAR_16 = 0;
 else
  VAR_16 = 2;


 if (VAR_17 == 0)
  FUNC_0(VAR_0,
   "Written ep%d %d.%d of %d b [last %d,z %d]\n",
   VAR_17, VAR_15, VAR_14->req.actual, VAR_14->req.length,
   VAR_16, VAR_14->req.zero);

 if (VAR_16) {



  if (VAR_17 == 0) {

   if (! (FUNC_5(VAR_11)
     & VAR_10))
    FUNC_2(VAR_12);
   VAR_13->dev->ep0state=VAR_1;
  } else {
   FUNC_6(VAR_17, VAR_8);
   VAR_19 = FUNC_5(VAR_9);
   FUNC_6(VAR_17, VAR_8);
   FUNC_6(VAR_19 | VAR_7,
     VAR_9);
  }

  FUNC_1(VAR_13, VAR_14, 0);
  VAR_16 = 1;
 } else {
  if (VAR_17 == 0) {

   if (! (FUNC_5(VAR_11)
     & VAR_10))
    FUNC_3(VAR_12);
  } else {
   FUNC_6(VAR_17, VAR_8);
   VAR_19 = FUNC_5(VAR_9);
   FUNC_6(VAR_17, VAR_8);
   FUNC_6(VAR_19 | VAR_7,
     VAR_9);
  }
 }

 return VAR_16;
}
