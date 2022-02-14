
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs4_filelayout_segment {TYPE_1__* dsaddr; scalar_t__ first_stripe_index; int stripe_unit; scalar_t__ pattern_offset; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int stripe_count; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int FUNC_1 (scalar_t__,int ) ;

u32
FUNC_2(struct pnfs_layout_segment *VAR_0, loff_t VAR_1)
{
 struct nfs4_filelayout_segment *VAR_2 = FUNC_0(VAR_0);
 u64 VAR_3;

 VAR_3 = VAR_1 - VAR_2->pattern_offset;
 FUNC_1(VAR_3, VAR_2->stripe_unit);
 VAR_3 += VAR_2->first_stripe_index;
 return FUNC_1(VAR_3, VAR_2->dsaddr->stripe_count);
}
