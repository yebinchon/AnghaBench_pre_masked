
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int flags; TYPE_1__* ddev; } ;
struct TYPE_2__ {scalar_t__ pci_device; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_3(struct radeon_device *VAR_25)
{
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 uint32_t VAR_29;
 uint32_t VAR_30;
 uint32_t VAR_31;
 uint32_t VAR_32;
 bool VAR_33;

 VAR_26 = FUNC_0(VAR_19);
 VAR_27 = FUNC_0(VAR_21);
 if (VAR_25->flags & VAR_16)
  VAR_28 = FUNC_0(VAR_24);
 else
  VAR_28 = FUNC_0(VAR_2);
 VAR_29 = FUNC_0(VAR_12);
 VAR_30 = 0;
 VAR_31 = FUNC_0(VAR_10);
 VAR_32 = 0;

 if (VAR_25->ddev->pci_device == VAR_0) {
  VAR_32 = FUNC_0(VAR_14);
 }

 if (!(VAR_25->flags & VAR_20)) {
  VAR_30 = FUNC_0(VAR_5);
 }

 FUNC_1(VAR_19,
        ((VAR_26 & ~VAR_17) |
  (0xc << VAR_18)));


 FUNC_1(VAR_21, (VAR_27 & ~VAR_22));


 if (VAR_25->flags & VAR_16)
  FUNC_1(VAR_24, (VAR_28 & ~VAR_23));
 else
  FUNC_1(VAR_2, (VAR_28 & ~VAR_1));


 FUNC_1(VAR_12,
        ((VAR_29 & ~VAR_9) |
  (VAR_8 |
   VAR_11)));
 if (!(VAR_25->flags & VAR_20)) {
  FUNC_1(VAR_5,
         ((VAR_30 & ~VAR_4) |
   VAR_3));
 }

 FUNC_1(VAR_10,
        ((VAR_31 & ~VAR_6) |
  (VAR_13 |
   VAR_7)));

 if (VAR_25->ddev->pci_device == VAR_0) {
  FUNC_1(VAR_14, (VAR_32 & ~VAR_15));
 }

 VAR_33 = FUNC_2(VAR_25);


 FUNC_1(VAR_19, VAR_26);
 FUNC_1(VAR_21, VAR_27);
 if (VAR_25->flags & VAR_16)
  FUNC_1(VAR_24, VAR_28);
 else
  FUNC_1(VAR_2, VAR_28);
 FUNC_1(VAR_12, VAR_29);
 if (!(VAR_25->flags & VAR_20)) {
  FUNC_1(VAR_5, VAR_30);
 }
 FUNC_1(VAR_10, VAR_31);
 if (VAR_25->ddev->pci_device == VAR_0) {
  FUNC_1(VAR_14, VAR_32);
 }
 return VAR_33;
}
