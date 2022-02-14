
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsmount {scalar_t__ nm_vers; } ;
struct nfsbuf {int nb_validend; int nb_endio; scalar_t__ nb_bufsize; int nb_valid; scalar_t__ nb_data; scalar_t__ nb_validoff; int nb_flags; TYPE_1__* nb_np; } ;
typedef scalar_t__ off_t ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_3__ {scalar_t__ n_size; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfsbuf*) ;
 int VAR_0 ;
 struct nfsmount* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct nfsbuf*) ;
 int FUNC_5 (int) ;

void
FUNC_6(struct nfsbuf *VAR_4)
{
 nfsnode_t VAR_5 = VAR_4->nb_np;
 struct nfsmount *VAR_6;

 if (!FUNC_0(VAR_4->nb_flags, VAR_0)) {

  VAR_4->nb_validoff = 0;
  VAR_4->nb_validend = VAR_4->nb_endio;
  if (VAR_4->nb_endio < (int)VAR_4->nb_bufsize) {
   off_t VAR_7 = FUNC_1(VAR_4);
   if ((off_t)VAR_5->n_size >= (VAR_7 + VAR_4->nb_bufsize))
    VAR_4->nb_validend = VAR_4->nb_bufsize;
   else if ((off_t)VAR_5->n_size >= VAR_7)
    VAR_4->nb_validend = VAR_5->n_size - VAR_7;
   else
    VAR_4->nb_validend = 0;
  }
  if ((VAR_6 = FUNC_2(VAR_5)) && (VAR_6->nm_vers == VAR_1) &&
      ((FUNC_1(VAR_4) + VAR_4->nb_validend) > 0x100000000LL))
   VAR_4->nb_validend = 0x100000000LL - FUNC_1(VAR_4);
  VAR_4->nb_valid = (1 << (FUNC_5(VAR_4->nb_validend) / VAR_3)) - 1;
  if (VAR_4->nb_validend & VAR_2) {

   FUNC_3(VAR_4->nb_data + VAR_4->nb_validend, VAR_3 - (VAR_4->nb_validend & VAR_2));
  }
 }
 FUNC_4(VAR_4);
}
