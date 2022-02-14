
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int Flags; } ;
struct TYPE_6__ {int IOCCapabilities; } ;
struct TYPE_7__ {int EEDPTagMode; } ;
struct MPT3SAS_ADAPTER {TYPE_3__ iounit_pg1; TYPE_1__ facts; int iounit_pg0; int ioc_pg8; int bios_pg3; int bios_pg2; TYPE_2__ manu_pg11; int name; int manu_pg10; scalar_t__ ir_firmware; int manu_pg0; } ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int *,TYPE_3__*) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_9 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_10 (struct MPT3SAS_ADAPTER*,int *,TYPE_2__*) ;
 int FUNC_11 (struct MPT3SAS_ADAPTER*,int *,TYPE_3__*) ;
 int FUNC_12 (struct MPT3SAS_ADAPTER*,int *,TYPE_2__*) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static void
FUNC_14(struct MPT3SAS_ADAPTER *VAR_2)
{
 Mpi2ConfigReply_t VAR_3;
 u32 VAR_4;

 FUNC_8(VAR_2, &VAR_3, &VAR_2->manu_pg0);
 if (VAR_2->ir_firmware)
  FUNC_9(VAR_2, &VAR_3,
      &VAR_2->manu_pg10);





 FUNC_10(VAR_2, &VAR_3, &VAR_2->manu_pg11);
 if (VAR_2->manu_pg11.EEDPTagMode == 0) {
  FUNC_13("%s: overriding NVDATA EEDPTagMode setting\n",
      VAR_2->name);
  VAR_2->manu_pg11.EEDPTagMode &= ~0x3;
  VAR_2->manu_pg11.EEDPTagMode |= 0x1;
  FUNC_12(VAR_2, &VAR_3,
      &VAR_2->manu_pg11);
 }

 FUNC_3(VAR_2, &VAR_3, &VAR_2->bios_pg2);
 FUNC_4(VAR_2, &VAR_3, &VAR_2->bios_pg3);
 FUNC_5(VAR_2, &VAR_3, &VAR_2->ioc_pg8);
 FUNC_6(VAR_2, &VAR_3, &VAR_2->iounit_pg0);
 FUNC_7(VAR_2, &VAR_3, &VAR_2->iounit_pg1);
 FUNC_0(VAR_2);





 VAR_4 = FUNC_2(VAR_2->iounit_pg1.Flags);
 if ((VAR_2->facts.IOCCapabilities &
     VAR_0))
  VAR_4 &=
      ~VAR_1;
 else
  VAR_4 |=
      VAR_1;
 VAR_2->iounit_pg1.Flags = FUNC_1(VAR_4);
 FUNC_11(VAR_2, &VAR_3, &VAR_2->iounit_pg1);
}
