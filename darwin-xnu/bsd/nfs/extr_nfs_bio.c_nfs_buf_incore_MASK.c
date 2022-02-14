
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nfsbuf* le_next; } ;
struct nfsbuf {scalar_t__ nb_np; int nb_flags; int nb_lblkno; TYPE_1__ nb_hash; } ;
typedef scalar_t__ nfsnode_t ;
typedef int daddr64_t ;
struct TYPE_4__ {struct nfsbuf* lh_first; } ;


 int FUNC_0 (int,struct nfsbuf*,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (scalar_t__,int ) ;

struct nfsbuf *
FUNC_3(nfsnode_t VAR_1, daddr64_t VAR_2)
{

 struct nfsbuf * VAR_3 = FUNC_2(VAR_1, VAR_2)->lh_first;
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->nb_hash.le_next)
  if ((VAR_3->nb_lblkno == VAR_2) && (VAR_3->nb_np == VAR_1)) {
   if (!FUNC_1(VAR_3->nb_flags, VAR_0)) {
    FUNC_0(547, VAR_3, VAR_2, VAR_3->nb_flags, VAR_3->nb_np);
    return (VAR_3);
   }
  }
 return (((void*)0));
}
