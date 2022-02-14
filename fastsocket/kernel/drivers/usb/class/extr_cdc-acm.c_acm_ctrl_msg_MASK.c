
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acm {TYPE_3__* control; int dev; } ;
struct TYPE_6__ {TYPE_2__* altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int ,int ,int,int ,int,int ,void*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct acm *VAR_1, int VAR_2, int VAR_3,
       void *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_1(VAR_1->dev, FUNC_2(VAR_1->dev, 0),
  VAR_2, VAR_0, VAR_3,
  VAR_1->control->altsetting[0].desc.bInterfaceNumber,
  VAR_4, VAR_5, 5000);
 FUNC_0("acm_control_msg: rq: 0x%02x val: %#x len: %#x result: %d",
      VAR_2, VAR_3, VAR_5, VAR_6);
 return VAR_6 < 0 ? VAR_6 : 0;
}
