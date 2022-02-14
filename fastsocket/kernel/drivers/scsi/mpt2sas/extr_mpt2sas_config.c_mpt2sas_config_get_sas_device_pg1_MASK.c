
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct MPT2SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageAddress; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int Function; } ;
typedef int Mpi2SasDevicePage1_t ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,TYPE_2__*,int *,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*,int *) ;

int
FUNC_4(struct MPT2SAS_ADAPTER *VAR_7, Mpi2ConfigReply_t
    *VAR_8, Mpi2SasDevicePage1_t *VAR_9, u32 VAR_10, u32 VAR_11)
{
 Mpi2ConfigRequest_t VAR_12;
 int VAR_13;

 FUNC_2(&VAR_12, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_12.Function = VAR_4;
 VAR_12.Action = VAR_0;
 VAR_12.Header.PageType = VAR_3;
 VAR_12.ExtPageType = VAR_2;
 VAR_12.Header.PageVersion = VAR_5;
 VAR_12.Header.PageNumber = 1;
 FUNC_3(VAR_7, &VAR_12.PageBufferSGE);
 VAR_13 = FUNC_0(VAR_7, &VAR_12, VAR_8,
     VAR_6, ((void*)0), 0);
 if (VAR_13)
  goto out;

 VAR_12.PageAddress = FUNC_1(VAR_10 | VAR_11);
 VAR_12.Action = VAR_1;
 VAR_13 = FUNC_0(VAR_7, &VAR_12, VAR_8,
     VAR_6, VAR_9,
     sizeof(*VAR_9));
 out:
 return VAR_13;
}
