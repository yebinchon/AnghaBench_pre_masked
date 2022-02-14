
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_8__ {int lock; TYPE_2__* p_dev; int hdev; } ;
typedef TYPE_3__ btuart_info_t ;
struct TYPE_6__ {unsigned int BasePort1; } ;
struct TYPE_7__ {TYPE_1__ io; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 btuart_info_t *VAR_8 = VAR_7;
 unsigned int VAR_9;
 int VAR_10 = 0;
 int VAR_11, VAR_12;
 irqreturn_t VAR_13 = VAR_1;

 FUNC_1(!VAR_8->hdev);

 VAR_9 = VAR_8->p_dev->io.BasePort1;

 FUNC_5(&(VAR_8->lock));

 VAR_11 = FUNC_4(VAR_9 + VAR_2) & VAR_3;
 while (VAR_11) {
  VAR_13 = VAR_0;


  VAR_12 = FUNC_4(VAR_9 + VAR_4);

  switch (VAR_11) {
  case 129:
   FUNC_0("RLSI");
   break;
  case 130:

   FUNC_2(VAR_8);
   break;
  case 128:
   if (VAR_12 & VAR_5) {

    FUNC_3(VAR_8);
   }
   break;
  default:
   FUNC_0("Unhandled IIR=%#x", VAR_11);
   break;
  }


  if (VAR_10++ > 100)
   break;

  VAR_11 = FUNC_4(VAR_9 + VAR_2) & VAR_3;

 }

 FUNC_6(&(VAR_8->lock));

 return VAR_13;
}
