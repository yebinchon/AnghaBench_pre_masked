
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_server_caps_res* rpc_resp; struct nfs4_server_caps_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int* attr_bitmask; int caps; int* cache_consistency_bitmask; int acl_bitmask; int client; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_server_caps_res {int* attr_bitmask; scalar_t__ has_links; scalar_t__ has_symlinks; int acl_bitmask; int seq_res; } ;
struct nfs4_server_caps_arg {int seq_args; struct nfs_fh* fhandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_23 ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_24, struct nfs_fh *VAR_25)
{
 struct nfs4_server_caps_arg VAR_26 = {
  .fhandle = VAR_25,
 };
 struct nfs4_server_caps_res VAR_27 = {};
 struct rpc_message VAR_28 = {
  .rpc_proc = &VAR_23[VAR_11],
  .rpc_argp = &VAR_26,
  .rpc_resp = &VAR_27,
 };
 int VAR_29;

 VAR_29 = FUNC_1(VAR_24->client, VAR_24, &VAR_28, &VAR_26.seq_args, &VAR_27.seq_res, 0);
 if (VAR_29 == 0) {
  FUNC_0(VAR_24->attr_bitmask, VAR_27.attr_bitmask, sizeof(VAR_24->attr_bitmask));
  VAR_24->caps &= ~(VAR_12|VAR_16|
    VAR_22|VAR_15|
    VAR_17|VAR_19|VAR_20|
    VAR_21|VAR_13|
    VAR_14|VAR_18);
  if (VAR_27.attr_bitmask[0] & VAR_0)
   VAR_24->caps |= VAR_12;
  if (VAR_27.has_links != 0)
   VAR_24->caps |= VAR_16;
  if (VAR_27.has_symlinks != 0)
   VAR_24->caps |= VAR_22;
  if (VAR_27.attr_bitmask[0] & VAR_2)
   VAR_24->caps |= VAR_15;
  if (VAR_27.attr_bitmask[1] & VAR_4)
   VAR_24->caps |= VAR_17;
  if (VAR_27.attr_bitmask[1] & VAR_5)
   VAR_24->caps |= VAR_19;
  if (VAR_27.attr_bitmask[1] & VAR_6)
   VAR_24->caps |= VAR_20;
  if (VAR_27.attr_bitmask[1] & VAR_7)
   VAR_24->caps |= VAR_21;
  if (VAR_27.attr_bitmask[1] & VAR_8)
   VAR_24->caps |= VAR_13;
  if (VAR_27.attr_bitmask[1] & VAR_9)
   VAR_24->caps |= VAR_14;
  if (VAR_27.attr_bitmask[1] & VAR_10)
   VAR_24->caps |= VAR_18;

  FUNC_0(VAR_24->cache_consistency_bitmask, VAR_27.attr_bitmask, sizeof(VAR_24->cache_consistency_bitmask));
  VAR_24->cache_consistency_bitmask[0] &= VAR_1|VAR_3;
  VAR_24->cache_consistency_bitmask[1] &= VAR_9|VAR_10;
  VAR_24->acl_bitmask = VAR_27.acl_bitmask;
 }

 return VAR_29;
}
