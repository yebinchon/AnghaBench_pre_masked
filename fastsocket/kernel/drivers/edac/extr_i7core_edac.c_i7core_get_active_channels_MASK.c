
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int const,unsigned int) ;
 struct pci_dev* FUNC_2 (int const,int,int) ;
 int FUNC_3 (int ,char*,int const,...) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_5(const u8 VAR_8, unsigned *VAR_9,
          unsigned *VAR_10)
{
 struct pci_dev *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 *VAR_9 = 0;
 *VAR_10 = 0;

 VAR_11 = FUNC_2(VAR_8, 3, 0);
 if (!VAR_11) {
  FUNC_3(VAR_1, "Couldn't find socket %d fn 3.0!!!\n",
         VAR_8);
  return -VAR_0;
 }


 FUNC_4(VAR_11, VAR_6, &VAR_14);
 FUNC_4(VAR_11, VAR_2, &VAR_15);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  u32 VAR_16[3];

  if (!(VAR_15 & (1 << (8 + VAR_12))))
   continue;


  if (VAR_14 & (1 << VAR_12))
   continue;

  VAR_11 = FUNC_2(VAR_8, VAR_12 + 4, 1);
  if (!VAR_11) {
   FUNC_3(VAR_1, "Couldn't find socket %d "
      "fn %d.%d!!!\n",
      VAR_8, VAR_12 + 4, 1);
   return -VAR_0;
  }

  FUNC_4(VAR_11,
    VAR_3, &VAR_16[0]);
  FUNC_4(VAR_11,
    VAR_4, &VAR_16[1]);
  FUNC_4(VAR_11,
    VAR_5, &VAR_16[2]);

  (*VAR_9)++;

  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
   if (!FUNC_0(VAR_16[VAR_13]))
    continue;
   (*VAR_10)++;
  }
 }

 FUNC_1("Number of active channels on socket %d: %d\n",
  VAR_8, *VAR_9);

 return 0;
}
