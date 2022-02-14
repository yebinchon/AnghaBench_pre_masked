
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_3__ {int signature; } ;
struct isci_orom {TYPE_1__ hdr; } ;
struct isci_oem_hdr {int sig; } ;
typedef scalar_t__ efi_status_t ;
struct TYPE_4__ {scalar_t__ (* get_variable ) (int ,int *,int *,unsigned long*,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__* FUNC_1 (int *,unsigned long,int ) ;
 TYPE_2__* FUNC_2 () ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *,unsigned long*,scalar_t__*) ;

struct isci_orom *FUNC_5(struct pci_dev *VAR_9)
{
 efi_status_t VAR_10;
 struct isci_orom *VAR_11;
 struct isci_oem_hdr *VAR_12;
 u8 *VAR_13, VAR_14;
 int VAR_15;
 unsigned long VAR_16;
 u8 *VAR_17;
 u32 VAR_18 = 0;

 VAR_16 = 1024;
 VAR_17 = FUNC_1(&VAR_9->dev, VAR_16, VAR_2);
 if (!VAR_17) {
  FUNC_0(&VAR_9->dev,
    "Unable to allocate memory for EFI data\n");
  return ((void*)0);
 }

 VAR_11 = (struct isci_orom *)(VAR_17 + sizeof(struct isci_oem_hdr));

 if (FUNC_2())
  VAR_10 = FUNC_2()->get_variable(VAR_8,
       &VAR_3,
       &VAR_18,
       &VAR_16,
       VAR_17);
 else
  VAR_10 = VAR_0;

 if (VAR_10 != VAR_1) {
  FUNC_0(&VAR_9->dev,
    "Unable to obtain EFI var data for OEM parms\n");
  return ((void*)0);
 }

 VAR_12 = (struct isci_oem_hdr *)VAR_17;

 if (FUNC_3(VAR_12->sig, VAR_4, VAR_5) != 0) {
  FUNC_0(&VAR_9->dev,
    "Invalid OEM header signature\n");
  return ((void*)0);
 }


 VAR_13 = (u8 *)VAR_17;
 for (VAR_15 = 0, VAR_14 = 0; VAR_15 < (sizeof(*VAR_12) + sizeof(*VAR_11)); VAR_15++, VAR_13++)
  VAR_14 += *VAR_13;

 if (VAR_14 != 0) {
  FUNC_0(&VAR_9->dev,
    "OEM table checksum failed\n");
  return ((void*)0);
 }

 if (FUNC_3(VAR_11->hdr.signature,
     VAR_6,
     VAR_7) != 0) {
  FUNC_0(&VAR_9->dev,
    "Invalid OEM table signature\n");
  return ((void*)0);
 }

 return VAR_11;
}
