
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_10__ {int intr_interval; TYPE_2__* intf; TYPE_1__* usb; } ;
typedef TYPE_3__ pegasus_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;

__attribute__((used)) static inline void FUNC_4(pegasus_t * VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;

 FUNC_2(VAR_1, 4, &VAR_2);
 VAR_3 = VAR_2 >> 8;
 if (VAR_1->usb->speed != VAR_0) {
  if (VAR_3 < 0x80) {
   if (FUNC_1(VAR_1))
    FUNC_0(&VAR_1->intf->dev, "intr interval "
     "changed from %ums to %ums\n",
     VAR_3, 0x80);
   VAR_3 = 0x80;
   VAR_2 = (VAR_2 & 0x00FF) | ((u16)VAR_3 << 8);



  }
 }
 VAR_1->intr_interval = VAR_3;
}
