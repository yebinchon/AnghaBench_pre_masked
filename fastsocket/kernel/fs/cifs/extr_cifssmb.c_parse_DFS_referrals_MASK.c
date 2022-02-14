
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nls_table {int dummy; } ;
struct dfs_referral_level_3 {scalar_t__ VersionNumber; scalar_t__ ServerType; scalar_t__ ReferralEntryFlags; scalar_t__ DfsPathOffset; scalar_t__ NetworkAddressOffset; } ;
struct dfs_info3_param {int path_consumed; int server_type; int ref_flag; void* node_name; void* path_name; int flags; } ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ DataCount; } ;
struct TYPE_5__ {int Flags2; } ;
struct TYPE_7__ {scalar_t__ NumberOfReferrals; scalar_t__ PathConsumed; int DFSFlags; TYPE_2__ t2; int referrals; TYPE_1__ hdr; } ;
typedef TYPE_3__ TRANSACTION2_GET_DFS_REFER_RSP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,unsigned int,int ) ;
 int FUNC_2 (int *,char const*,int ,struct nls_table const*,int) ;
 void* FUNC_3 (char*,int,int,struct nls_table const*) ;
 int FUNC_4 (int *,int,struct nls_table const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dfs_info3_param*,unsigned int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;
 struct dfs_info3_param* FUNC_9 (int,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int
FUNC_13(TRANSACTION2_GET_DFS_REFER_RSP *VAR_5,
  unsigned int *VAR_6,
  struct dfs_info3_param **VAR_7,
  const struct nls_table *VAR_8, int VAR_9,
  const char *VAR_10)
{
 int VAR_11, VAR_12 = 0;
 char *VAR_13;
 bool VAR_14;
 struct dfs_referral_level_3 *VAR_15;

 if (VAR_5->hdr.Flags2 & VAR_4)
  VAR_14 = 1;
 else
  VAR_14 = 0;
 *VAR_6 = FUNC_10(VAR_5->NumberOfReferrals);

 if (*VAR_6 < 1) {
  FUNC_0(1, "num_referrals: must be at least > 0,"
   "but we get num_referrals = %d\n", *VAR_6);
  VAR_12 = -VAR_0;
  goto parse_DFS_referrals_exit;
 }

 VAR_15 = (struct dfs_referral_level_3 *) &(VAR_5->referrals);
 if (VAR_15->VersionNumber != FUNC_5(3)) {
  FUNC_0(1, "Referrals of V%d version are not supported,"
   "should be V3", FUNC_10(VAR_15->VersionNumber));
  VAR_12 = -VAR_0;
  goto parse_DFS_referrals_exit;
 }


 VAR_13 = (char *)(&(VAR_5->PathConsumed)) +
    FUNC_10(VAR_5->t2.DataCount);

 FUNC_1(1, "num_referrals: %d dfs flags: 0x%x ...\n",
   *VAR_6,
   FUNC_11(VAR_5->DFSFlags));

 *VAR_7 = FUNC_9(sizeof(struct dfs_info3_param) *
   *VAR_6, VAR_2);
 if (*VAR_7 == ((void*)0)) {
  FUNC_0(1, "Failed to allocate buffer for target_nodes\n");
  VAR_12 = -VAR_1;
  goto parse_DFS_referrals_exit;
 }


 for (VAR_11 = 0; VAR_11 < *VAR_6; VAR_11++) {
  char *VAR_16;
  int VAR_17;
  struct dfs_info3_param *VAR_18 = (*VAR_7)+VAR_11;

  VAR_18->flags = FUNC_11(VAR_5->DFSFlags);
  if (VAR_14) {
   __le16 *VAR_19 = FUNC_8(FUNC_12(VAR_10)*2 + 2,
      VAR_2);
   if (VAR_19 == ((void*)0)) {
    VAR_12 = -VAR_1;
    goto parse_DFS_referrals_exit;
   }
   FUNC_2((__le16 *) VAR_19, VAR_10,
     VAR_3, VAR_8, VAR_9);
   VAR_18->path_consumed = FUNC_4(VAR_19,
     FUNC_10(VAR_5->PathConsumed),
     VAR_8);
   FUNC_7(VAR_19);
  } else
   VAR_18->path_consumed = FUNC_10(VAR_5->PathConsumed);

  VAR_18->server_type = FUNC_10(VAR_15->ServerType);
  VAR_18->ref_flag = FUNC_10(VAR_15->ReferralEntryFlags);


  VAR_16 = (char *)VAR_15 + FUNC_10(VAR_15->DfsPathOffset);
  VAR_17 = VAR_13 - VAR_16;
  VAR_18->path_name = FUNC_3(VAR_16, VAR_17,
            VAR_14, VAR_8);
  if (!VAR_18->path_name) {
   VAR_12 = -VAR_1;
   goto parse_DFS_referrals_exit;
  }


  VAR_16 = (char *)VAR_15 + FUNC_10(VAR_15->NetworkAddressOffset);
  VAR_17 = VAR_13 - VAR_16;
  VAR_18->node_name = FUNC_3(VAR_16, VAR_17,
            VAR_14, VAR_8);
  if (!VAR_18->node_name)
   VAR_12 = -VAR_1;
 }

parse_DFS_referrals_exit:
 if (VAR_12) {
  FUNC_6(*VAR_7, *VAR_6);
  *VAR_7 = ((void*)0);
  *VAR_6 = 0;
 }
 return VAR_12;
}
