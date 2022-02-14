
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_12__ {int IOCStatus; } ;
struct TYPE_9__ {int PageVersion; scalar_t__ PageNumber; int PageType; } ;
struct TYPE_11__ {int Action; int PageAddress; int PageBufferSGE; TYPE_1__ Header; int Function; } ;
struct TYPE_10__ {int NumPhysDisks; } ;
typedef TYPE_2__ Mpi2RaidVolPage0_t ;
typedef TYPE_3__ Mpi2ConfigRequest_t ;
typedef TYPE_4__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_3__*,TYPE_4__*,int ,TYPE_2__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_5(struct MPT3SAS_ADAPTER *VAR_9, u16 VAR_10,
 u8 *VAR_11)
{
 Mpi2ConfigRequest_t VAR_12;
 Mpi2RaidVolPage0_t VAR_13;
 Mpi2ConfigReply_t VAR_14;
 int VAR_15;
 u16 VAR_16;

 FUNC_3(&VAR_12, 0, sizeof(Mpi2ConfigRequest_t));
 *VAR_11 = 0;
 VAR_12.Function = VAR_3;
 VAR_12.Action = VAR_0;
 VAR_12.Header.PageType = VAR_2;
 VAR_12.Header.PageNumber = 0;
 VAR_12.Header.PageVersion = VAR_6;
 VAR_9->build_zero_len_sge_mpi(VAR_9, &VAR_12.PageBufferSGE);
 VAR_15 = FUNC_0(VAR_9, &VAR_12, &VAR_14,
     VAR_8, ((void*)0), 0);
 if (VAR_15)
  goto out;

 VAR_12.PageAddress =
     FUNC_1(VAR_7 | VAR_10);
 VAR_12.Action = VAR_1;
 VAR_15 = FUNC_0(VAR_9, &VAR_12, &VAR_14,
     VAR_8, &VAR_13,
     sizeof(Mpi2RaidVolPage0_t));
 if (!VAR_15) {
  VAR_16 = FUNC_2(VAR_14.IOCStatus) &
      VAR_4;
  if (VAR_16 == VAR_5)
   *VAR_11 = VAR_13.NumPhysDisks;
 }

 out:
 return VAR_15;
}
