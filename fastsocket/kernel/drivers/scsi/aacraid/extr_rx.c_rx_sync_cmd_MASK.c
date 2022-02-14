
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {int OIMR; TYPE_1__* IndexRegs; } ;
struct TYPE_4__ {int OIMR; } ;
struct TYPE_3__ {int * Mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aac_dev*) ;
 unsigned long VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct aac_dev*,int ) ;
 int FUNC_4 (struct aac_dev*,int ) ;
 int FUNC_5 (struct aac_dev*,int ,int) ;
 int FUNC_6 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct aac_dev *VAR_8, u32 VAR_9,
 u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13, u32 VAR_14, u32 VAR_15,
 u32 *VAR_16, u32 * VAR_17, u32 * VAR_18, u32 * VAR_19, u32 * VAR_20)
{
 unsigned long VAR_21;
 int VAR_22;



 FUNC_10(VAR_9, &VAR_8->IndexRegs->Mailbox[0]);



 FUNC_10(VAR_10, &VAR_8->IndexRegs->Mailbox[1]);
 FUNC_10(VAR_11, &VAR_8->IndexRegs->Mailbox[2]);
 FUNC_10(VAR_12, &VAR_8->IndexRegs->Mailbox[3]);
 FUNC_10(VAR_13, &VAR_8->IndexRegs->Mailbox[4]);



 FUNC_6(VAR_8, VAR_6, VAR_5);



 FUNC_5(VAR_8, VAR_4.OIMR, VAR_8->OIMR = 0xff);




 FUNC_3 (VAR_8, VAR_4.OIMR);



 FUNC_6(VAR_8, VAR_3, VAR_2);

 VAR_22 = 0;
 VAR_21 = VAR_7;




 while (FUNC_7(VAR_7, VAR_21+30*VAR_1))
 {
  FUNC_8(5);



  if (FUNC_4(VAR_8, VAR_6) & VAR_5) {



   FUNC_6(VAR_8, VAR_6, VAR_5);
   VAR_22 = 1;
   break;
  }



  FUNC_1(1);
 }
 if (FUNC_9(VAR_22 != 1)) {



  FUNC_0(VAR_8);
  return -VAR_0;
 }



 if (VAR_16)
  *VAR_16 = FUNC_2(&VAR_8->IndexRegs->Mailbox[0]);
 if (VAR_17)
  *VAR_17 = FUNC_2(&VAR_8->IndexRegs->Mailbox[1]);
 if (VAR_18)
  *VAR_18 = FUNC_2(&VAR_8->IndexRegs->Mailbox[2]);
 if (VAR_19)
  *VAR_19 = FUNC_2(&VAR_8->IndexRegs->Mailbox[3]);
 if (VAR_20)
  *VAR_20 = FUNC_2(&VAR_8->IndexRegs->Mailbox[4]);



 FUNC_6(VAR_8, VAR_6, VAR_5);



 FUNC_0(VAR_8);
 return 0;

}
