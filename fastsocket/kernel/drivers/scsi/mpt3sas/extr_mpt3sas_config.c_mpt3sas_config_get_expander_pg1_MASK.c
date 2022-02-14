
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageAddress; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int Function; } ;
typedef int Mpi2ExpanderPage1_t ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_2__*,int *,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_4(struct MPT3SAS_ADAPTER *VAR_9, Mpi2ConfigReply_t
 *VAR_10, Mpi2ExpanderPage1_t *VAR_11, u32 VAR_12,
 u16 VAR_13)
{
 Mpi2ConfigRequest_t VAR_14;
 int VAR_15;

 FUNC_2(&VAR_14, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_14.Function = VAR_4;
 VAR_14.Action = VAR_0;
 VAR_14.Header.PageType = VAR_3;
 VAR_14.ExtPageType = VAR_2;
 VAR_14.Header.PageNumber = 1;
 VAR_14.Header.PageVersion = VAR_5;
 VAR_9->build_zero_len_sge_mpi(VAR_9, &VAR_14.PageBufferSGE);
 VAR_15 = FUNC_0(VAR_9, &VAR_14, VAR_10,
     VAR_8, ((void*)0), 0);
 if (VAR_15)
  goto out;

 VAR_14.PageAddress =
     FUNC_1(VAR_6 |
     (VAR_12 << VAR_7) | VAR_13);
 VAR_14.Action = VAR_1;
 VAR_15 = FUNC_0(VAR_9, &VAR_14, VAR_10,
     VAR_8, VAR_11,
     sizeof(*VAR_11));
 out:
 return VAR_15;
}
