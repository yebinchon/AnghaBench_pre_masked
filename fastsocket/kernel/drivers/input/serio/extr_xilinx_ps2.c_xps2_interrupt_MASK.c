
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct xps2data {int flags; TYPE_2__ serio; scalar_t__ base_address; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (struct xps2data*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct xps2data *VAR_11 = VAR_10;
 u32 VAR_12;
 u8 VAR_13;
 int VAR_14;


 VAR_12 = FUNC_2(VAR_11->base_address + VAR_3);
 FUNC_3(VAR_11->base_address + VAR_3, VAR_12);


 if (VAR_12 & VAR_6)
  FUNC_1(VAR_11->serio.dev.parent, "receive overrun error\n");

 if (VAR_12 & VAR_4)
  VAR_11->flags |= VAR_1;

 if (VAR_12 & (VAR_7 | VAR_8))
  VAR_11->flags |= VAR_2;

 if (VAR_12 & VAR_5) {
  VAR_14 = FUNC_5(VAR_11, &VAR_13);


  if (VAR_14) {
   FUNC_0(VAR_11->serio.dev.parent,
    "wrong rcvd byte count (%d)\n", VAR_14);
  } else {
   FUNC_4(&VAR_11->serio, VAR_13, VAR_11->flags);
   VAR_11->flags = 0;
  }
 }

 return VAR_0;
}
