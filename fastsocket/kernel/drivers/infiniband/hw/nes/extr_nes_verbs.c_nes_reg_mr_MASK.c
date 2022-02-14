
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct nes_root_vpbl {scalar_t__ pbl_pbase; int pbl_vbase; int * member_2; int * member_1; int member_0; } ;
struct nes_pd {int pd_id; } ;
struct nes_hw_cqp_wqe {int * wqe_words; } ;
struct nes_device {int pcidev; struct nes_adapter* nesadapter; } ;
struct nes_cqp_request {int waiting; scalar_t__ request_done; int major_code; int minor_code; int waitq; int refcount; struct nes_hw_cqp_wqe cqp_wqe; } ;
struct nes_adapter {int free_256pbl; int free_4kpbl; int max_4kpbl; int pbl_lock; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct nes_hw_cqp_wqe*,struct nes_device*) ;
 int FUNC_5 (struct nes_device*,struct nes_cqp_request*) ;
 struct nes_cqp_request* FUNC_6 (struct nes_device*) ;
 int FUNC_7 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_8 (struct nes_device*,struct nes_cqp_request*) ;
 int FUNC_9 (int ,int,int ,int) ;
 int FUNC_10 (struct nes_device*,struct nes_root_vpbl*,struct nes_root_vpbl*,int) ;
 int FUNC_11 (int *,size_t,int) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int ,int,int ) ;

__attribute__((used)) static int FUNC_16(struct nes_device *VAR_27, struct nes_pd *VAR_28,
  u32 VAR_29, u64 VAR_30, struct nes_root_vpbl *VAR_31,
  dma_addr_t VAR_32, u16 VAR_33,
  u16 VAR_34, int VAR_35, u64 *VAR_36,
  u16 *VAR_37, u8 *VAR_38)
{
 struct nes_hw_cqp_wqe *VAR_39;
 struct nes_cqp_request *VAR_40;
 unsigned long VAR_41;
 int VAR_42;
 struct nes_adapter *VAR_43 = VAR_27->nesadapter;
 uint VAR_44 = 0;
 u16 VAR_45 = 0;
 u16 VAR_46 = 0;
 u8 VAR_47 = 0;
 u8 VAR_48 = 0;
 u16 VAR_49 = (VAR_33 > 1) ? 1 : 0;
 struct nes_root_vpbl VAR_50 = { 0, ((void*)0), ((void*)0) };
 u32 VAR_51 = 0;
 u16 VAR_52;


 VAR_40 = FUNC_6(VAR_27);
 if (VAR_40 == ((void*)0)) {
  FUNC_3(VAR_25, "Failed to get a cqp_request.\n");
  return -VAR_1;
 }
 VAR_40->waiting = 1;
 VAR_39 = &VAR_40->cqp_wqe;

 if (VAR_33) {
  FUNC_13(&VAR_43->pbl_lock, VAR_41);

  VAR_44 = ((VAR_33 - 1) * 512) + VAR_34;
  VAR_45 = (VAR_44 + 31) / 32;
  if (VAR_44 <= 32) {
   if (VAR_45 <= VAR_43->free_256pbl)
    VAR_47 = 1;
   else if (VAR_33 <= VAR_43->free_4kpbl)
    VAR_48 = 1;
  } else if (VAR_44 <= 2048) {
   if (((VAR_33 + VAR_49) <= VAR_43->free_4kpbl) &&
       (VAR_43->free_4kpbl > (VAR_43->max_4kpbl >> 1))) {
    VAR_48 = 1;
   } else if ((VAR_45 + 1) <= VAR_43->free_256pbl) {
    VAR_47 = 1;
    VAR_49 = 1;
   } else if ((VAR_33 + VAR_49) <= VAR_43->free_4kpbl) {
    VAR_48 = 1;
   }
  } else {
   if ((VAR_33 + 1) <= VAR_43->free_4kpbl)
    VAR_48 = 1;
  }

  if (VAR_47) {
   VAR_46 = VAR_45;
   VAR_43->free_256pbl -= VAR_46 + VAR_49;
  } else if (VAR_48) {
   VAR_46 = VAR_33;
   VAR_43->free_4kpbl -= VAR_46 + VAR_49;
  } else {
   FUNC_14(&VAR_43->pbl_lock, VAR_41);
   FUNC_3(VAR_25, "Out of Pbls\n");
   FUNC_5(VAR_27, VAR_40);
   return -VAR_1;
  }

  FUNC_14(&VAR_43->pbl_lock, VAR_41);
 }

 if (VAR_47 && VAR_49) {
  if (FUNC_10(VAR_27, VAR_31, &VAR_50, VAR_33) == 1) {
   if (VAR_50.pbl_pbase != 0)
    VAR_31 = &VAR_50;
  } else {
   FUNC_13(&VAR_43->pbl_lock, VAR_41);
   VAR_43->free_256pbl += VAR_45 + VAR_49;
   VAR_47 = 0;

   if (VAR_33 == 1)
    VAR_49 = 0;
   VAR_46 = VAR_33;

   if ((VAR_33 + VAR_49) <= VAR_43->free_4kpbl) {
    VAR_43->free_4kpbl -= VAR_46 + VAR_49;
    VAR_48 = 1;
   }
   FUNC_14(&VAR_43->pbl_lock, VAR_41);

   if (VAR_48 == 0)
    return -VAR_1;
  }
 }

 VAR_51 = VAR_7 | VAR_11 |
     VAR_16 | VAR_8;
 if (VAR_35 & VAR_3)
  VAR_51 |= VAR_12;
 if (VAR_35 & VAR_6)
  VAR_51 |= VAR_14 | VAR_10;
 if (VAR_35 & VAR_5)
  VAR_51 |= VAR_13 | VAR_10;
 if (VAR_35 & VAR_4)
  VAR_51 |= VAR_15 | VAR_10;

 FUNC_4(VAR_39, VAR_27);
 FUNC_11(VAR_39->wqe_words, VAR_24, VAR_51);
 FUNC_12(VAR_39->wqe_words, VAR_23, *VAR_36);
 FUNC_11(VAR_39->wqe_words, VAR_18, VAR_30);

 VAR_39->wqe_words[VAR_17] =
   FUNC_2((u32)(VAR_30 >> 8) & 0xff000000);
 VAR_39->wqe_words[VAR_17] |=
   FUNC_2(VAR_28->pd_id & 0x00007fff);
 FUNC_11(VAR_39->wqe_words, VAR_22, VAR_29);

 if (VAR_46 == 0) {
  FUNC_12(VAR_39->wqe_words, VAR_19, VAR_32);
 } else {
  FUNC_12(VAR_39->wqe_words, VAR_19, VAR_31->pbl_pbase);
  FUNC_11(VAR_39->wqe_words, VAR_20, VAR_46);
  FUNC_11(VAR_39->wqe_words, VAR_21, (VAR_44 * 8));

  if (VAR_48)
   VAR_39->wqe_words[VAR_24] |= FUNC_2(VAR_9);
 }
 FUNC_1();

 FUNC_0(&VAR_40->refcount, 2);
 FUNC_7(VAR_27, VAR_40);


 VAR_42 = FUNC_15(VAR_40->waitq, (0 != VAR_40->request_done),
   VAR_26);
 FUNC_3(VAR_25, "Register STag 0x%08X completed, wait_event_timeout ret = %u,"
   " CQP Major:Minor codes = 0x%04X:0x%04X.\n",
   VAR_29, VAR_42, VAR_40->major_code, VAR_40->minor_code);
 VAR_52 = VAR_40->major_code;
 FUNC_8(VAR_27, VAR_40);

 if ((!VAR_42 || VAR_52) && VAR_46 != 0) {
  FUNC_13(&VAR_43->pbl_lock, VAR_41);
  if (VAR_47)
   VAR_43->free_256pbl += VAR_46 + VAR_49;
  else if (VAR_48)
   VAR_43->free_4kpbl += VAR_46 + VAR_49;
  FUNC_14(&VAR_43->pbl_lock, VAR_41);
 }
 if (VAR_50.pbl_pbase)
  FUNC_9(VAR_27->pcidev, 512, VAR_50.pbl_vbase,
        VAR_50.pbl_pbase);

 if (!VAR_42)
  return -VAR_2;
 else if (VAR_52)
  return -VAR_0;

 *VAR_37 = VAR_46 + VAR_49;
 *VAR_38 = VAR_48;
 return 0;
}
