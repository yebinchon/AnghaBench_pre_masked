
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct urb {int pipe; TYPE_3__* dev; } ;
struct ptd {void* dw3; void* dw2; void* dw1; void* dw0; } ;
struct isp1760_qtd {int packet_type; int toggle; int length; } ;
struct isp1760_qh {int ping; int toggle; } ;
struct isp1760_hcd {int dummy; } ;
struct TYPE_6__ {scalar_t__ speed; TYPE_2__* tt; int ttport; } ;
struct TYPE_5__ {TYPE_1__* hub; } ;
struct TYPE_4__ {int devnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (struct ptd*,int ,int) ;
 int FUNC_16 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23(struct isp1760_hcd *VAR_11, struct isp1760_qh *VAR_12,
   struct isp1760_qtd *VAR_13, struct urb *VAR_14,
   u32 VAR_15, struct ptd *VAR_16)
{
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24 = VAR_8;
 u32 VAR_25 = VAR_1;


 VAR_21 = FUNC_16(VAR_14->dev, VAR_14->pipe, FUNC_22(VAR_14->pipe));
 VAR_22 = 1 + ((VAR_21 >> 11) & 0x3);
 VAR_21 &= 0x7ff;


 VAR_17 = VAR_7;
 VAR_17 |= FUNC_6(VAR_13->length);
 VAR_17 |= FUNC_7(VAR_21);
 VAR_17 |= FUNC_4(FUNC_20(VAR_14->pipe));
 VAR_18 = FUNC_20(VAR_14->pipe) >> 1;


 VAR_18 |= FUNC_3(FUNC_19(VAR_14->pipe));

 VAR_23 = VAR_13->packet_type;
 VAR_18 |= FUNC_10(VAR_23);

 if (FUNC_17(VAR_14->pipe))
  VAR_18 |= VAR_4;
 else if (FUNC_21(VAR_14->pipe))
  VAR_18 |= VAR_5;

 if (VAR_14->dev->speed != VAR_9) {


  VAR_18 |= VAR_6;
  if (VAR_14->dev->speed == VAR_10)
   VAR_18 |= VAR_3;

  VAR_18 |= FUNC_11(VAR_14->dev->ttport);
  VAR_18 |= FUNC_5(VAR_14->dev->tt->hub->devnum);


  if (FUNC_21(VAR_14->pipe) &&
    (VAR_14->dev->speed == VAR_10))
   VAR_18 |= 2 << 16;

  VAR_20 = 0;
  VAR_24 = 0;
  VAR_25 = 0;
 } else {
  VAR_17 |= FUNC_8(VAR_22);
  if (FUNC_18(VAR_14->pipe) || FUNC_17(VAR_14->pipe))
   VAR_20 = VAR_12->ping;
  else
   VAR_20 = 0;
 }

 VAR_19 = 0;
 VAR_19 |= FUNC_1(FUNC_13(VAR_15));
 VAR_19 |= FUNC_12(VAR_24);
 VAR_20 |= FUNC_9(VAR_25);


 if (FUNC_18(VAR_14->pipe))
  VAR_20 |= FUNC_2(VAR_13->toggle);
 else
  VAR_20 |= VAR_12->toggle;


 VAR_20 |= VAR_2;

 VAR_20 |= FUNC_0(VAR_0);

 FUNC_15(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->dw0 = FUNC_14(VAR_17);
 VAR_16->dw1 = FUNC_14(VAR_18);
 VAR_16->dw2 = FUNC_14(VAR_19);
 VAR_16->dw3 = FUNC_14(VAR_20);
}
