
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int * data; int len; } ;
struct scatterlist {int length; } ;
struct hash_desc {int tfm; int flags; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hash_desc*,struct scatterlist*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct scatterlist*,int *,int ) ;

__be32
FUNC_10(char *VAR_5, struct xdr_netobj *VAR_6)
{
 struct xdr_netobj VAR_7;
 struct hash_desc VAR_8;
 struct scatterlist VAR_9;
 __be32 VAR_10 = VAR_4;

 FUNC_5("NFSD: nfs4_make_rec_clidname for %.*s\n",
   VAR_6->len, VAR_6->data);
 VAR_8.flags = VAR_1;
 VAR_8.tfm = FUNC_1("md5", 0, VAR_0);
 if (FUNC_0(VAR_8.tfm))
  goto out_no_tfm;
 VAR_7.len = FUNC_4(VAR_8.tfm);
 VAR_7.data = FUNC_7(VAR_7.len, VAR_2);
 if (VAR_7.data == ((void*)0))
   goto out;

 FUNC_9(&VAR_9, VAR_6->data, VAR_6->len);

 if (FUNC_3(&VAR_8, &VAR_9, VAR_9.length, VAR_7.data))
  goto out;

 FUNC_8(VAR_5, VAR_7.data);

 VAR_10 = VAR_3;
out:
 FUNC_6(VAR_7.data);
 FUNC_2(VAR_8.tfm);
out_no_tfm:
 return VAR_10;
}
