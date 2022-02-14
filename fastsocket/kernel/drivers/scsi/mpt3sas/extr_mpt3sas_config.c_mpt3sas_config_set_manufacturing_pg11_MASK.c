
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Mpi2ManufacturingPage11_t {int dummy; } ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageBufferSGE; TYPE_1__ Header; int Function; } ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_2__*,int *,int ,struct Mpi2ManufacturingPage11_t*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_3(struct MPT3SAS_ADAPTER *VAR_7,
 Mpi2ConfigReply_t *VAR_8,
 struct Mpi2ManufacturingPage11_t *VAR_9)
{
 Mpi2ConfigRequest_t VAR_10;
 int VAR_11;

 FUNC_1(&VAR_10, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_10.Function = VAR_4;
 VAR_10.Action = VAR_0;
 VAR_10.Header.PageType = VAR_3;
 VAR_10.Header.PageNumber = 11;
 VAR_10.Header.PageVersion = VAR_5;
 VAR_7->build_zero_len_sge_mpi(VAR_7, &VAR_10.PageBufferSGE);
 VAR_11 = FUNC_0(VAR_7, &VAR_10, VAR_8,
     VAR_6, ((void*)0), 0);
 if (VAR_11)
  goto out;

 VAR_10.Action = VAR_1;
 VAR_11 = FUNC_0(VAR_7, &VAR_10, VAR_8,
     VAR_6, VAR_9,
     sizeof(*VAR_9));
 VAR_10.Action = VAR_2;
 VAR_11 = FUNC_0(VAR_7, &VAR_10, VAR_8,
     VAR_6, VAR_9,
     sizeof(*VAR_9));
 out:
 return VAR_11;
}
