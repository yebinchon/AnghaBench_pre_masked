
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tqe_next; } ;
struct nfsbuf {TYPE_1__ nb_free; int nb_flags; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,struct nfsbuf*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct nfsbuf *VAR_10)
{
 if (VAR_10->nb_free.tqe_next == VAR_2)
  FUNC_3("nfsbuf not on free list");
 if (FUNC_0(VAR_10->nb_flags, VAR_0)) {
  VAR_5--;
  FUNC_2(&VAR_4, VAR_10, VAR_3);
 } else if (FUNC_0(VAR_10->nb_flags, VAR_1)) {
  VAR_9--;
  FUNC_2(&VAR_8, VAR_10, VAR_3);
 } else {
  VAR_7--;
  FUNC_2(&VAR_6, VAR_10, VAR_3);
 }
 VAR_10->nb_free.tqe_next = VAR_2;
 FUNC_1();
}
