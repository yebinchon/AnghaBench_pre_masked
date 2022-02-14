
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int lock; } ;
struct vhci_device {TYPE_1__ ud; } ;
typedef int __u32 ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vhci_device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(__u32 VAR_4)
{
 struct vhci_device *VAR_5;

 FUNC_3("enter\n");


 FUNC_1(&VAR_3->lock);

 VAR_5 = FUNC_0(VAR_4);

 FUNC_1(&VAR_5->ud.lock);
 if (VAR_5->ud.status == VAR_2) {
  FUNC_5("not connected %d\n", VAR_5->ud.status);


  FUNC_2(&VAR_5->ud.lock);
  FUNC_2(&VAR_3->lock);

  return -VAR_0;
 }


 FUNC_2(&VAR_5->ud.lock);
 FUNC_2(&VAR_3->lock);

 FUNC_4(&VAR_5->ud, VAR_1);

 return 0;
}
