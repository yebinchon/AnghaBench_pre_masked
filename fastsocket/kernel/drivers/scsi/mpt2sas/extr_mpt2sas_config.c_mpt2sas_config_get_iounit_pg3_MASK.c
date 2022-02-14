
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct MPT2SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageBufferSGE; TYPE_1__ Header; int Function; } ;
typedef int Mpi2IOUnitPage3_t ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,TYPE_2__*,int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct MPT2SAS_ADAPTER*,int *) ;

int
FUNC_3(struct MPT2SAS_ADAPTER *VAR_6,
 Mpi2ConfigReply_t *VAR_7, Mpi2IOUnitPage3_t *VAR_8, u16 VAR_9)
{
 Mpi2ConfigRequest_t VAR_10;
 int VAR_11;

 FUNC_1(&VAR_10, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_10.Function = VAR_3;
 VAR_10.Action = VAR_0;
 VAR_10.Header.PageType = VAR_2;
 VAR_10.Header.PageNumber = 3;
 VAR_10.Header.PageVersion = VAR_4;
 FUNC_2(VAR_6, &VAR_10.PageBufferSGE);
 VAR_11 = FUNC_0(VAR_6, &VAR_10, VAR_7,
     VAR_5, ((void*)0), 0);
 if (VAR_11)
  goto out;

 VAR_10.Action = VAR_1;
 VAR_11 = FUNC_0(VAR_6, &VAR_10, VAR_7,
     VAR_5, VAR_8, VAR_9);
 out:
 return VAR_11;
}
