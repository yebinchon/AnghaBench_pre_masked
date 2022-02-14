
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct MPT2SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int Function; } ;
typedef int Mpi2SasIOUnitPage1_t ;
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
 int FUNC_0 (struct MPT2SAS_ADAPTER*,TYPE_2__*,int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct MPT2SAS_ADAPTER*,int *) ;

int
FUNC_3(struct MPT2SAS_ADAPTER *VAR_8, Mpi2ConfigReply_t
    *VAR_9, Mpi2SasIOUnitPage1_t *VAR_10, u16 VAR_11)
{
 Mpi2ConfigRequest_t VAR_12;
 int VAR_13;

 FUNC_1(&VAR_12, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_12.Function = VAR_5;
 VAR_12.Action = VAR_0;
 VAR_12.Header.PageType = VAR_4;
 VAR_12.ExtPageType = VAR_3;
 VAR_12.Header.PageNumber = 1;
 VAR_12.Header.PageVersion = VAR_6;
 FUNC_2(VAR_8, &VAR_12.PageBufferSGE);
 VAR_13 = FUNC_0(VAR_8, &VAR_12, VAR_9,
     VAR_7, ((void*)0), 0);
 if (VAR_13)
  goto out;

 VAR_12.Action = VAR_1;
 FUNC_0(VAR_8, &VAR_12, VAR_9,
     VAR_7, VAR_10, VAR_11);
 VAR_12.Action = VAR_2;
 VAR_13 = FUNC_0(VAR_8, &VAR_12, VAR_9,
     VAR_7, VAR_10, VAR_11);
 out:
 return VAR_13;
}
