
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int err; } ;
struct nfsd3_readdirres {int buflen; scalar_t__ offset; scalar_t__ buffer; scalar_t__ count; int verf; TYPE_1__ common; int fh; struct svc_rqst* rqstp; } ;
struct nfsd3_readdirargs {int count; scalar_t__ cookie; scalar_t__ buffer; int verf; int fh; } ;
typedef int loff_t ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct svc_rqst*,int *,int *,TYPE_1__*,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_2, struct nfsd3_readdirargs *VAR_3,
        struct nfsd3_readdirres *VAR_4)
{
 __be32 VAR_5;
 int VAR_6;

 FUNC_2("nfsd: READDIR(3)  %s %d bytes at %d\n",
    FUNC_1(&VAR_3->fh),
    VAR_3->count, (u32) VAR_3->cookie);



 VAR_6 = (VAR_3->count >> 2) - 2;


 FUNC_3(&VAR_4->fh, &VAR_3->fh);

 VAR_4->buflen = VAR_6;
 VAR_4->common.err = VAR_1;
 VAR_4->buffer = VAR_3->buffer;
 VAR_4->rqstp = VAR_2;
 VAR_5 = FUNC_5(VAR_2, &VAR_4->fh, (loff_t*) &VAR_3->cookie,
     &VAR_4->common, VAR_0);
 FUNC_4(VAR_4->verf, VAR_3->verf, 8);
 VAR_4->count = VAR_4->buffer - VAR_3->buffer;
 if (VAR_4->offset)
  FUNC_6(VAR_4->offset, VAR_3->cookie);

 FUNC_0(VAR_5);
}
