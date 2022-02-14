
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_m2; scalar_t__ bswapped; } ;
struct hfc_pci {int lock; TYPE_1__ hw; } ;
struct device {int dummy; } ;
struct bchannel {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bchannel* FUNC_0 (struct hfc_pci*,int) ;
 struct hfc_pci* FUNC_1 (struct device*) ;
 int FUNC_2 (struct bchannel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bchannel*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_2, void *VAR_3)
{
 struct hfc_pci *VAR_4 = FUNC_1(VAR_2);
 struct bchannel *VAR_5;
 if (VAR_4 == ((void*)0))
  return 0;

 if (VAR_4->hw.int_m2 & VAR_0) {
  FUNC_3(&VAR_4->lock);
  VAR_5 = FUNC_0(VAR_4, VAR_4->hw.bswapped ? 2 : 1);
  if (VAR_5 && VAR_5->state == VAR_1) {
   FUNC_2(VAR_5);
   FUNC_5(VAR_5);
  }
  VAR_5 = FUNC_0(VAR_4, VAR_4->hw.bswapped ? 1 : 2);
  if (VAR_5 && VAR_5->state == VAR_1) {
   FUNC_2(VAR_5);
   FUNC_5(VAR_5);
  }
  FUNC_4(&VAR_4->lock);
 }
 return 0;
}
