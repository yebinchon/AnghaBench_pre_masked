
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nfsbuf {int nb_error; int nb_flags; int nb_lflags; TYPE_1__* nb_np; } ;
struct TYPE_4__ {int n_numoutput; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,struct nfsbuf*,int ,int ,int ) ;
 int FUNC_2 (int,struct nfsbuf*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct nfsbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (struct nfsbuf*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct nfsbuf*) ;

void
FUNC_15(struct nfsbuf *VAR_6)
{

 FUNC_2(550, VAR_6, FUNC_4(VAR_6), VAR_6->nb_flags, VAR_6->nb_error);

 if (FUNC_3(VAR_6->nb_flags, VAR_2))
  FUNC_12("nfs_buf_iodone already");

 if (!FUNC_3(VAR_6->nb_flags, VAR_3)) {
  FUNC_0(VAR_6->nb_flags, VAR_4);




  FUNC_13(FUNC_5(VAR_6->nb_np));
  FUNC_10(VAR_6->nb_np);
  VAR_6->nb_np->n_numoutput--;
  FUNC_11(VAR_6->nb_np);
 }
 if (FUNC_3(VAR_6->nb_flags, VAR_1)) {
  FUNC_6(VAR_6->nb_flags, VAR_2);
  FUNC_9(VAR_6, 1);
 } else {
         FUNC_7(VAR_5);
  FUNC_6(VAR_6->nb_flags, VAR_2);
  FUNC_0(VAR_6->nb_lflags, VAR_0);
         FUNC_8(VAR_5);
  FUNC_14(VAR_6);
 }

 FUNC_1(550, VAR_6, FUNC_4(VAR_6), VAR_6->nb_flags, VAR_6->nb_error);
}
