
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_10__ {int lock; int tx_state; TYPE_3__* hdev; TYPE_2__* p_dev; } ;
typedef TYPE_4__ bt3c_info_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {unsigned int BasePort1; } ;
struct TYPE_8__ {TYPE_1__ io; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_4, void *VAR_5)
{
 bt3c_info_t *VAR_6 = VAR_5;
 unsigned int VAR_7;
 int VAR_8;
 irqreturn_t VAR_9 = VAR_2;

 FUNC_2(!VAR_6->hdev);

 VAR_7 = VAR_6->p_dev->io.BasePort1;

 FUNC_10(&(VAR_6->lock));

 VAR_8 = FUNC_8(VAR_7 + VAR_0);
 if (VAR_8 & 0x80) {
  int VAR_10 = FUNC_4(VAR_7, 0x7001);

  if ((VAR_10 & 0xff) == 0x7f) {
   FUNC_0("Very strange (stat=0x%04x)", VAR_10);
  } else if ((VAR_10 & 0xff) != 0xff) {
   if (VAR_10 & 0x0020) {
    int VAR_11 = FUNC_4(VAR_7, 0x7002) & 0x10;
    FUNC_1("%s: Antenna %s", VAR_6->hdev->name,
       VAR_11 ? "out" : "in");
   }
   if (VAR_10 & 0x0001)
    FUNC_5(VAR_6);
   if (VAR_10 & 0x0002) {

    FUNC_7(VAR_3, &(VAR_6->tx_state));
    FUNC_6(VAR_6);
   }

   FUNC_3(VAR_7, 0x7001, 0x0000);

   FUNC_9(VAR_8, VAR_7 + VAR_0);
  }
  VAR_9 = VAR_1;
 }

 FUNC_11(&(VAR_6->lock));

 return VAR_9;
}
