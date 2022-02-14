
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct aac_dev {int OIMR; TYPE_1__* IndexRegs; int sync_mode; } ;
struct TYPE_4__ {int ODR_C; int ODR_R; int IDR; int OIMR; } ;
struct TYPE_3__ {int * Mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aac_dev*) ;
 unsigned long VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct aac_dev*,int ) ;
 int FUNC_4 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_9(struct aac_dev *VAR_9, u32 VAR_10,
 u32 VAR_11, u32 VAR_12, u32 VAR_13, u32 VAR_14, u32 VAR_15, u32 VAR_16,
 u32 *VAR_17, u32 * VAR_18, u32 * VAR_19, u32 * VAR_20, u32 * VAR_21)
{
 unsigned long VAR_22;
 int VAR_23;




 FUNC_8(VAR_10, &VAR_9->IndexRegs->Mailbox[0]);



 FUNC_8(VAR_11, &VAR_9->IndexRegs->Mailbox[1]);
 FUNC_8(VAR_12, &VAR_9->IndexRegs->Mailbox[2]);
 FUNC_8(VAR_13, &VAR_9->IndexRegs->Mailbox[3]);
 FUNC_8(VAR_14, &VAR_9->IndexRegs->Mailbox[4]);




 FUNC_4(VAR_9, VAR_3.ODR_C, VAR_4 << VAR_7);




 FUNC_4(VAR_9, VAR_3.OIMR, VAR_9->OIMR = 0xffffffff);





 FUNC_3(VAR_9, VAR_3.OIMR);




 FUNC_4(VAR_9, VAR_3.IDR, VAR_2 << VAR_6);

 if (!VAR_9->sync_mode || VAR_10 != VAR_5) {
  VAR_23 = 0;
  VAR_22 = VAR_8;




  while (FUNC_5(VAR_8, VAR_22+300*VAR_1)) {
   FUNC_6(5);



   if ((FUNC_3(VAR_9, VAR_3.ODR_R) >> VAR_7) & VAR_4) {



    FUNC_4(VAR_9, VAR_3.ODR_C, VAR_4 << VAR_7);
    VAR_23 = 1;
    break;
   }



   FUNC_1(1);
  }
  if (FUNC_7(VAR_23 != 1)) {



   FUNC_0(VAR_9);
   return -VAR_0;
  }



  if (VAR_17)
   *VAR_17 = FUNC_2(&VAR_9->IndexRegs->Mailbox[0]);
  if (VAR_18)
   *VAR_18 = FUNC_2(&VAR_9->IndexRegs->Mailbox[1]);
  if (VAR_19)
   *VAR_19 = FUNC_2(&VAR_9->IndexRegs->Mailbox[2]);
  if (VAR_20)
   *VAR_20 = FUNC_2(&VAR_9->IndexRegs->Mailbox[3]);
  if (VAR_21)
   *VAR_21 = FUNC_2(&VAR_9->IndexRegs->Mailbox[4]);




  FUNC_4(VAR_9, VAR_3.ODR_C, VAR_4 << VAR_7);
 }




 FUNC_0(VAR_9);
 return 0;
}
