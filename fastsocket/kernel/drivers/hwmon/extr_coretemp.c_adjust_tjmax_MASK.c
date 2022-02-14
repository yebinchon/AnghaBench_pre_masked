
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ vendor; int device; } ;
struct device {int dummy; } ;
struct cpuinfo_x86 {int x86_model; int x86_mask; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct cpuinfo_x86 *VAR_1, u32 VAR_2, struct device *VAR_3)
{


 int VAR_4 = 100000;
 int VAR_5 = 85000;
 int VAR_6 = 1;
 int VAR_7;
 u32 VAR_8, VAR_9;
 struct pci_dev *VAR_10;



 if (VAR_1->x86_model == 0xf && VAR_1->x86_mask < 4)
  VAR_6 = 0;



 if (VAR_1->x86_model == 0x1c) {
  VAR_6 = 0;

  VAR_10 = FUNC_3(0, FUNC_0(0, 0));

  if (VAR_10 && VAR_10->vendor == VAR_0
      && (VAR_10->device == 0xa000
      || VAR_10->device == 0xa010))
   VAR_4 = 100000;
  else
   VAR_4 = 90000;

  FUNC_2(VAR_10);
 }

 if (VAR_1->x86_model > 0xe && VAR_6) {
  u8 VAR_11;






  VAR_7 = FUNC_4(VAR_2, 0x17, &VAR_8, &VAR_9);
  if (VAR_7) {
   FUNC_1(VAR_3,
     "Unable to access MSR 0x17, assuming desktop"
     " CPU\n");
   VAR_6 = 0;
  } else if (VAR_1->x86_model < 0x17 && !(VAR_8 & 0x10000000)) {





   VAR_6 = 0;
  } else {

   VAR_11 = (VAR_9 >> 18) & 0x7;





   if (VAR_1->x86_model == 0x17 &&
       (VAR_11 == 5 || VAR_11 == 7)) {




    VAR_5 = 90000;
    VAR_4 = 105000;
   }
  }
 }

 if (VAR_6) {
  VAR_7 = FUNC_4(VAR_2, 0xee, &VAR_8, &VAR_9);
  if (VAR_7) {
   FUNC_1(VAR_3,
     "Unable to access MSR 0xEE, for Tjmax, left"
     " at default\n");
  } else if (VAR_8 & 0x40000000) {
   VAR_4 = VAR_5;
  }
 } else if (VAR_4 == 100000) {




  FUNC_1(VAR_3, "Using relative temperature scale!\n");
 }

 return VAR_4;
}
