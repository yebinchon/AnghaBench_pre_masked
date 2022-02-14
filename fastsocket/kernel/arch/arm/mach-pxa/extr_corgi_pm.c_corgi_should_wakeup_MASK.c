
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; int charge_mode; TYPE_1__* machinfo; int flags; } ;
struct TYPE_3__ {int (* charge ) (int ) ;scalar_t__ (* read_devdata ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_2__ VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_12)
{
 int VAR_13 = 0;

 FUNC_1(VAR_11.dev, "GPLR0 = %x,%x\n", VAR_5, VAR_6);

 if ((VAR_6 & FUNC_0(VAR_1))) {
  if (VAR_11.machinfo->read_devdata(VAR_10)) {

   FUNC_1(VAR_11.dev, "ac insert\n");
   VAR_11.flags |= VAR_8;
  } else {

   FUNC_1(VAR_11.dev, "ac remove\n");
   FUNC_2(VAR_9);
   VAR_11.machinfo->charge(0);
   VAR_11.charge_mode = VAR_0;
  }
 }

 if ((VAR_6 & FUNC_0(VAR_2)))
  FUNC_1(VAR_11.dev, "Charge full interrupt\n");

 if (VAR_6 & FUNC_0(VAR_3))
  VAR_13 |= FUNC_0(VAR_3);

 if (VAR_6 & FUNC_0(VAR_4))
  VAR_13 |= FUNC_0(VAR_4);

 if (VAR_12 && (VAR_6 & VAR_7))
  VAR_13 |= VAR_7;

 FUNC_1(VAR_11.dev, "is_resume: %x\n",VAR_13);
 return VAR_13;
}
