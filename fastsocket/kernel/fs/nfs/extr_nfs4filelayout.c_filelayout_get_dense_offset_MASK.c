
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nfs4_filelayout_segment {int stripe_unit; scalar_t__ pattern_offset; TYPE_1__* dsaddr; } ;
typedef int loff_t ;
struct TYPE_2__ {int stripe_count; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static loff_t
FUNC_1(struct nfs4_filelayout_segment *VAR_0,
       loff_t VAR_1)
{
 u32 VAR_2 = VAR_0->stripe_unit * VAR_0->dsaddr->stripe_count;
 u64 VAR_3;

 VAR_1 -= VAR_0->pattern_offset;
 VAR_3 = VAR_1;
 FUNC_0(VAR_3, VAR_2);

 return VAR_3 * VAR_0->stripe_unit + FUNC_0(VAR_1, VAR_0->stripe_unit);
}
