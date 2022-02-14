
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_filelayout_segment {scalar_t__ stripe_type; int num_fh; struct nfs_fh** fh_array; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (struct pnfs_layout_segment*,size_t) ;

struct nfs_fh *
FUNC_2(struct pnfs_layout_segment *VAR_1, u32 VAR_2)
{
 struct nfs4_filelayout_segment *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;

 if (VAR_3->stripe_type == VAR_0) {
  if (VAR_3->num_fh == 1)
   VAR_4 = 0;
  else if (VAR_3->num_fh == 0)

   return ((void*)0);
  else
   VAR_4 = FUNC_1(VAR_1, VAR_2);
 } else
  VAR_4 = VAR_2;
 return VAR_3->fh_array[VAR_4];
}
