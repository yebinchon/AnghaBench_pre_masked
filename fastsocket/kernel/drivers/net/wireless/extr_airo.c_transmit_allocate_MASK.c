
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
typedef int txControl ;
struct airo_info {int sem; } ;
typedef int __le16 ;
struct TYPE_6__ {int parm0; int cmd; } ;
struct TYPE_5__ {int status; } ;
typedef TYPE_1__ Resp ;
typedef TYPE_2__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct airo_info*,int,int,int ) ;
 int FUNC_3 (struct airo_info*,int *,int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct airo_info*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static u16 FUNC_8(struct airo_info *VAR_14, int VAR_15, int VAR_16)
{
 unsigned int VAR_17 = 3000;
 Cmd VAR_18;
 Resp VAR_19;
 u16 VAR_20;
 __le16 VAR_21;

 VAR_18.cmd = VAR_1;
 VAR_18.parm0 = VAR_15;
 if (FUNC_5(&VAR_14->sem))
  return VAR_2;
 if (FUNC_6(VAR_14, &VAR_18, &VAR_19) != VAR_6) {
  VAR_20 = VAR_2;
  goto done;
 }
 if ( (VAR_19.status & 0xFF00) != 0) {
  VAR_20 = VAR_2;
  goto done;
 }



 while (((FUNC_0(VAR_14, VAR_4) & VAR_5) == 0) && --VAR_17);
 if (!VAR_17) {
  VAR_20 = VAR_2;
  goto done;
 }


 VAR_20 = FUNC_0(VAR_14, VAR_7);
 FUNC_1(VAR_14, VAR_3, VAR_5);






 if (VAR_16)
  VAR_21 = FUNC_4(VAR_13 | VAR_12 | VAR_8
   | VAR_10 | VAR_11);
 else
  VAR_21 = FUNC_4(VAR_13 | VAR_12 | VAR_9
   | VAR_10 | VAR_11);
 if (FUNC_2(VAR_14, VAR_20, 0x0008, VAR_0) != VAR_6)
  VAR_20 = VAR_2;
 else
  FUNC_3(VAR_14, &VAR_21, sizeof(VAR_21), VAR_0);

done:
 FUNC_7(&VAR_14->sem);

 return VAR_20;
}
