
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ le_next; } ;
struct nfsbuf {int nb_flags; int nb_error; TYPE_1__ nb_vnbufs; int nb_dirty; int nb_dirtyend; int nb_dirtyoff; TYPE_2__* nb_np; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_7__ {int n_flag; int n_dirtyblkhd; } ;


 int FUNC_0 (int,struct nfsbuf*,int ,int ,int ) ;
 int FUNC_1 (int,struct nfsbuf*,int ,int ,int ) ;
 int FUNC_2 (int,struct nfsbuf*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct nfsbuf*,int ) ;
 int FUNC_5 (struct nfsbuf*,int ) ;
 int FUNC_6 (struct nfsbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct nfsbuf*,int) ;
 int FUNC_13 (struct nfsbuf*) ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int ,int ,int ,char*) ;

void
FUNC_18(struct nfsbuf *VAR_10)
{
 nfsnode_t VAR_11 = VAR_10->nb_np;

 FUNC_2(551, VAR_10, FUNC_6(VAR_10), VAR_10->nb_flags, 0);
 FUNC_0(551, VAR_10, VAR_10->nb_dirtyoff, VAR_10->nb_dirtyend, VAR_10->nb_dirty);






 if (!FUNC_3(VAR_10->nb_flags, VAR_1)) {
  FUNC_9(VAR_10->nb_flags, VAR_1);

  FUNC_10(VAR_8);
  VAR_9++;
  FUNC_7();
  if (VAR_10->nb_vnbufs.le_next != VAR_3)
   FUNC_5(VAR_10, VAR_7);
  FUNC_4(&VAR_11->n_dirtyblkhd, VAR_10, VAR_7);
  FUNC_11(VAR_8);
 }





 FUNC_17(FUNC_8(VAR_11), VAR_6, 0, 0, "nfs_buf_write_delayed");


 FUNC_14(VAR_11);
 VAR_11->n_flag |= VAR_5;
 FUNC_15(VAR_11);





 if (VAR_9 < 0)
  FUNC_16("nfs_buf_write_delayed: Negative nfs_nbdwrite");
 if (VAR_9 > VAR_4) {

  FUNC_9(VAR_10->nb_flags, VAR_0);
  FUNC_13(VAR_10);
  FUNC_1(551, VAR_10, FUNC_6(VAR_10), VAR_10->nb_flags, VAR_10->nb_error);
  return;
 }


 FUNC_9(VAR_10->nb_flags, VAR_2);
 FUNC_12(VAR_10, 1);
 FUNC_1(551, VAR_10, FUNC_6(VAR_10), VAR_10->nb_flags, 0);
 return;
}
