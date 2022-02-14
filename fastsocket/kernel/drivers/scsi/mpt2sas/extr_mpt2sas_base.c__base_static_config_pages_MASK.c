
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int Flags; } ;
struct TYPE_4__ {int IOCCapabilities; } ;
struct MPT2SAS_ADAPTER {TYPE_2__ iounit_pg1; TYPE_1__ facts; int iounit_pg0; int ioc_pg8; int bios_pg3; int bios_pg2; int manu_pg10; scalar_t__ ir_firmware; int manu_pg0; } ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_4 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_5 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_6 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_7 (struct MPT2SAS_ADAPTER*,int *,TYPE_2__*) ;
 int FUNC_8 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_9 (struct MPT2SAS_ADAPTER*,int *,int *) ;
 int FUNC_10 (struct MPT2SAS_ADAPTER*,int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(struct MPT2SAS_ADAPTER *VAR_2)
{
 Mpi2ConfigReply_t VAR_3;
 u32 VAR_4;

 FUNC_8(VAR_2, &VAR_3, &VAR_2->manu_pg0);
 if (VAR_2->ir_firmware)
  FUNC_9(VAR_2, &VAR_3,
      &VAR_2->manu_pg10);
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
 FUNC_10(VAR_2, &VAR_3, &VAR_2->iounit_pg1);

}
