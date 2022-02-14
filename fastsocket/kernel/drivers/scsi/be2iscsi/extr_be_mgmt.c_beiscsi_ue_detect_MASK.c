
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct beiscsi_hba {int ue_detected; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*,...) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int ,int ,int*) ;

void FUNC_2(struct beiscsi_hba *VAR_9)
{
 uint32_t VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12 = 0, VAR_13 = 0;
 uint8_t VAR_14 = 0;

 if (VAR_9->ue_detected)
  return;

 FUNC_1(VAR_9->pcidev,
         VAR_4, &VAR_11);
 FUNC_1(VAR_9->pcidev,
         VAR_6,
         &VAR_13);
 FUNC_1(VAR_9->pcidev,
         VAR_3,
         &VAR_10);
 FUNC_1(VAR_9->pcidev,
         VAR_5,
         &VAR_12);

 VAR_11 = (VAR_11 & ~VAR_13);
 VAR_10 = (VAR_10 & ~VAR_12);


 if (VAR_11 || VAR_10) {
  VAR_9->ue_detected = 1;
  FUNC_0(VAR_9, VAR_2,
       VAR_0 | VAR_1,
       "BG_%d : Error detected on the adapter\n");
 }

 if (VAR_11) {
  for (VAR_14 = 0; VAR_11; VAR_11 >>= 1, VAR_14++) {
   if (VAR_11 & 1)
    FUNC_0(VAR_9, VAR_2,
         VAR_0,
         "BG_%d : UE_LOW %s bit set\n",
         VAR_8[VAR_14]);
  }
 }

 if (VAR_10) {
  for (VAR_14 = 0; VAR_10; VAR_10 >>= 1, VAR_14++) {
   if (VAR_10 & 1)
    FUNC_0(VAR_9, VAR_2,
         VAR_0,
         "BG_%d : UE_HIGH %s bit set\n",
         VAR_7[VAR_14]);
  }
 }
}
