
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {struct pci_dev* ch0mm; struct pci_dev* ch1mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mem_ctl_info*,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char const*) ;
 int FUNC_2 (struct mem_ctl_info*,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char const*) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 (unsigned int) ;
 unsigned int FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 (unsigned int) ;
 scalar_t__ FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 int FUNC_17 (struct pci_dev*,int ,unsigned int*) ;
 int FUNC_18 (struct pci_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_19(struct mem_ctl_info *VAR_7, int VAR_8,
      u32 VAR_9, u32 VAR_10)
{
 struct i5100_priv *VAR_11 = VAR_7->pvt_info;
 struct pci_dev *VAR_12 = (VAR_8) ? VAR_11->ch1mm : VAR_11->ch0mm;
 u32 VAR_13;
 u32 VAR_14;
 unsigned VAR_15 = 0;
 unsigned VAR_16 = 0;
 unsigned VAR_17;
 unsigned VAR_18;
 unsigned VAR_19;
 unsigned VAR_20;
 unsigned VAR_21;

 FUNC_17(VAR_12, VAR_6, &VAR_13);

 if (FUNC_16(VAR_13)) {
  FUNC_17(VAR_12, VAR_4, &VAR_14);
  VAR_15 = VAR_14;
  FUNC_17(VAR_12, VAR_5, &VAR_14);
  VAR_16 = FUNC_13(VAR_14);
 }

 if (FUNC_15(VAR_13)) {
  const char *VAR_22;

  FUNC_17(VAR_12, VAR_2, &VAR_14);
  VAR_17 = FUNC_9(VAR_14);
  VAR_18 = FUNC_8(VAR_14);
  VAR_19 = FUNC_10(VAR_14);

  FUNC_17(VAR_12, VAR_3, &VAR_14);
  VAR_20 = FUNC_11(VAR_14);
  VAR_21 = FUNC_12(VAR_14);



  if (!VAR_17)
   VAR_22 = FUNC_0(VAR_9);
  else
   VAR_22 = FUNC_0(VAR_10);

  FUNC_1(VAR_7, VAR_8, VAR_18, VAR_19, VAR_15, VAR_20, VAR_21, VAR_22);
 }

 if (FUNC_14(VAR_13)) {
  const char *VAR_23;

  FUNC_17(VAR_12, VAR_0, &VAR_14);
  VAR_17 = FUNC_4(VAR_14);
  VAR_18 = FUNC_3(VAR_14);
  VAR_19 = FUNC_5(VAR_14);

  FUNC_17(VAR_12, VAR_1, &VAR_14);
  VAR_20 = FUNC_6(VAR_14);
  VAR_21 = FUNC_7(VAR_14);



  if (!VAR_17)
   VAR_23 = FUNC_0(VAR_9);
  else
   VAR_23 = FUNC_0(VAR_10);

  FUNC_2(VAR_7, VAR_8, VAR_18, VAR_19, VAR_15, VAR_20, VAR_21, VAR_23);
 }

 FUNC_18(VAR_12, VAR_6, VAR_13);
}
