
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int rq_snd_buf; } ;
struct nfs4_server_caps_arg {int fhandle; int seq_args; } ;
struct compound_hdr {int minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xdr_stream*,struct rpc_rqst*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int,struct compound_hdr*) ;
 int FUNC_2 (struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,struct compound_hdr*) ;
 int FUNC_4 (struct xdr_stream*,int *,struct compound_hdr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xdr_stream*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct rpc_rqst *VAR_4, __be32 *VAR_5,
        struct nfs4_server_caps_arg *VAR_6)
{
 struct xdr_stream VAR_7;
 struct compound_hdr VAR_8 = {
  .minorversion = FUNC_5(&VAR_6->seq_args),
 };

 FUNC_6(&VAR_7, &VAR_4->rq_snd_buf, VAR_5);
 FUNC_0(&VAR_7, VAR_4, &VAR_8);
 FUNC_4(&VAR_7, &VAR_6->seq_args, &VAR_8);
 FUNC_3(&VAR_7, VAR_6->fhandle, &VAR_8);
 FUNC_1(&VAR_7, VAR_2|
      VAR_1|
      VAR_3|
      VAR_0, &VAR_8);
 FUNC_2(&VAR_8);
 return 0;
}
