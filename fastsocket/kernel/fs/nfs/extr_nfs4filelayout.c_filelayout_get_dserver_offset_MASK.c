
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int dummy; } ;
struct nfs4_filelayout_segment {int stripe_type; } ;
typedef int loff_t ;


 int FUNC_0 () ;
 struct nfs4_filelayout_segment* FUNC_1 (struct pnfs_layout_segment*) ;


 int FUNC_2 (struct nfs4_filelayout_segment*,int ) ;

__attribute__((used)) static loff_t
FUNC_3(struct pnfs_layout_segment *VAR_0, loff_t VAR_1)
{
 struct nfs4_filelayout_segment *VAR_2 = FUNC_1(VAR_0);

 switch (VAR_2->stripe_type) {
 case 128:
  return VAR_1;

 case 129:
  return FUNC_2(VAR_2, VAR_1);
 }

 FUNC_0();
}
