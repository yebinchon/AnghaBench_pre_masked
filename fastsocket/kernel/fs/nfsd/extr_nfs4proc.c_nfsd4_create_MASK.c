
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct TYPE_3__ {int ia_valid; } ;
struct nfsd4_create {int cr_type; size_t cr_linklen; int cr_cinfo; int cr_bmval; int * cr_acl; TYPE_1__ cr_iattr; int cr_namelen; int cr_name; int cr_specdata2; int cr_specdata1; int * cr_linkname; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int dev_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct nfsd4_compound_state*,int ,int ) ;
 int FUNC_4 (struct svc_rqst*,struct svc_fh*,int *,int ) ;
 int FUNC_5 (int *,struct svc_fh*) ;
 int FUNC_6 (struct svc_fh*,int ) ;
 int FUNC_7 (struct svc_fh*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,int *,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (struct svc_rqst*,int *,int ,int ,TYPE_1__*,int ,int ,struct svc_fh*) ;
 scalar_t__ FUNC_11 (struct svc_rqst*,int *,int ,int ,int *,size_t,struct svc_fh*,TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_13(struct svc_rqst *VAR_13, struct nfsd4_compound_state *VAR_14,
      struct nfsd4_create *VAR_15)
{
 struct svc_fh VAR_16;
 __be32 VAR_17;
 dev_t VAR_18;

 FUNC_6(&VAR_16, VAR_1);

 VAR_17 = FUNC_9(VAR_13, &VAR_14->current_fh, VAR_5,
      VAR_2);
 if (VAR_17 == VAR_12)
  VAR_17 = VAR_11;
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_13, VAR_14, VAR_15->cr_bmval,
        VAR_8);
 if (VAR_17)
  return VAR_17;

 switch (VAR_15->cr_type) {
 case 129:







  VAR_15->cr_linkname[VAR_15->cr_linklen] = 0;

  VAR_17 = FUNC_11(VAR_13, &VAR_14->current_fh,
          VAR_15->cr_name, VAR_15->cr_namelen,
          VAR_15->cr_linkname, VAR_15->cr_linklen,
          &VAR_16, &VAR_15->cr_iattr);
  break;

 case 133:
  VAR_18 = FUNC_2(VAR_15->cr_specdata1, VAR_15->cr_specdata2);
  if (FUNC_0(VAR_18) != VAR_15->cr_specdata1 ||
      FUNC_1(VAR_18) != VAR_15->cr_specdata2)
   return VAR_10;
  VAR_17 = FUNC_10(VAR_13, &VAR_14->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_3, VAR_18, &VAR_16);
  break;

 case 132:
  VAR_18 = FUNC_2(VAR_15->cr_specdata1, VAR_15->cr_specdata2);
  if (FUNC_0(VAR_18) != VAR_15->cr_specdata1 ||
      FUNC_1(VAR_18) != VAR_15->cr_specdata2)
   return VAR_10;
  VAR_17 = FUNC_10(VAR_13, &VAR_14->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr,VAR_4, VAR_18, &VAR_16);
  break;

 case 128:
  VAR_17 = FUNC_10(VAR_13, &VAR_14->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_7, 0, &VAR_16);
  break;

 case 130:
  VAR_17 = FUNC_10(VAR_13, &VAR_14->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_6, 0, &VAR_16);
  break;

 case 131:
  VAR_15->cr_iattr.ia_valid &= ~VAR_0;
  VAR_17 = FUNC_10(VAR_13, &VAR_14->current_fh,
         VAR_15->cr_name, VAR_15->cr_namelen,
         &VAR_15->cr_iattr, VAR_5, 0, &VAR_16);
  break;

 default:
  VAR_17 = VAR_9;
 }

 if (VAR_17)
  goto out;

 if (VAR_15->cr_acl != ((void*)0))
  FUNC_4(VAR_13, &VAR_16, VAR_15->cr_acl,
    VAR_15->cr_bmval);

 FUNC_8(&VAR_14->current_fh);
 FUNC_12(&VAR_15->cr_cinfo, &VAR_14->current_fh);
 FUNC_5(&VAR_14->current_fh, &VAR_16);
out:
 FUNC_7(&VAR_16);
 return VAR_17;
}
