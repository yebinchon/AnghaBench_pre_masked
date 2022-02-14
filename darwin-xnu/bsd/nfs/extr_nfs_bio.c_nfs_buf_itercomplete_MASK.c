
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsbuflists {int dummy; } ;
struct nfsbuf {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_3__ {int n_bufiterflags; struct nfsbuflists n_cleanblkhd; struct nfsbuflists n_dirtyblkhd; } ;


 int FUNC_0 (struct nfsbuflists*) ;
 struct nfsbuf* FUNC_1 (struct nfsbuflists*) ;
 int FUNC_2 (struct nfsbuflists*,struct nfsbuf*,int ) ;
 int FUNC_3 (struct nfsbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*) ;

void
FUNC_5(nfsnode_t VAR_4, struct nfsbuflists *VAR_5, int VAR_6)
{
 struct nfsbuflists * VAR_7;
 struct nfsbuf *VAR_8;

 if (VAR_6 & VAR_0)
  VAR_7 = &VAR_4->n_dirtyblkhd;
 else
  VAR_7 = &VAR_4->n_cleanblkhd;

 while (!FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  FUNC_3(VAR_8, VAR_3);
  FUNC_2(VAR_7, VAR_8, VAR_3);
 }

 VAR_4->n_bufiterflags &= ~VAR_1;
 if (VAR_4->n_bufiterflags & VAR_2) {
  VAR_4->n_bufiterflags &= ~VAR_2;
  FUNC_4(&VAR_4->n_bufiterflags);
 }
}
