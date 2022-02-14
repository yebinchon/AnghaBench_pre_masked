
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd_data ;
struct pci_dev {int dummy; } ;
struct efx_nic {int net_dev; struct pci_dev* pci_dev; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int,char*) ;
 int FUNC_3 (char*,int,int,char*) ;
 int FUNC_4 (char*,int ,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct efx_nic *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->pci_dev;
 char VAR_7[VAR_3];
 ssize_t VAR_8;
 int VAR_9, VAR_10;


 VAR_8 = FUNC_2(VAR_6, 0, sizeof(VAR_7), VAR_7);
 if (VAR_8 <= 0) {
  FUNC_0(VAR_5, VAR_4, VAR_5->net_dev, "Unable to read VPD\n");
  return;
 }


 VAR_9 = FUNC_4(VAR_7, 0, VAR_8, VAR_1);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5, VAR_4, VAR_5->net_dev, "VPD Read-only not found\n");
  return;
 }

 VAR_10 = FUNC_6(&VAR_7[VAR_9]);
 VAR_9 += VAR_2;
 if (VAR_9 + VAR_10 > VAR_8)
  VAR_10 = VAR_8 - VAR_9;


 VAR_9 = FUNC_3(VAR_7, VAR_9, VAR_10, "PN");
 if (VAR_9 < 0) {
  FUNC_0(VAR_5, VAR_4, VAR_5->net_dev, "Part number not found\n");
  return;
 }

 VAR_10 = FUNC_5(&VAR_7[VAR_9]);
 VAR_9 += VAR_0;
 if (VAR_9 + VAR_10 > VAR_8) {
  FUNC_0(VAR_5, VAR_4, VAR_5->net_dev, "Incomplete part number\n");
  return;
 }

 FUNC_1(VAR_5, VAR_4, VAR_5->net_dev,
     "Part Number : %.*s\n", VAR_10, &VAR_7[VAR_9]);
}
