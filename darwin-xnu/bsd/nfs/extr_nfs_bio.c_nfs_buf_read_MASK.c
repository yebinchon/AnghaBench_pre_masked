
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * thread_t ;
struct nfsbuf {int nb_flags; int nb_rcred; int nb_np; } ;
typedef int nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_2__ {int read_bios; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nfsbuf*) ;
 int FUNC_4 (int,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfsbuf*,int *,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 (char*) ;

int
FUNC_10(struct nfsbuf *VAR_4)
{
 int VAR_5 = 0;
 nfsnode_t VAR_6;
 thread_t VAR_7;
 kauth_cred_t VAR_8;

 VAR_6 = VAR_4->nb_np;
 VAR_8 = VAR_4->nb_rcred;
 if (FUNC_2(VAR_8))
  FUNC_6(VAR_8);
 VAR_7 = FUNC_1(VAR_4->nb_flags, VAR_0) ? ((void*)0) : FUNC_5();


 if (!FUNC_1(VAR_4->nb_flags, VAR_2))
  FUNC_9("nfs_buf_read: !NB_READ");
 if (FUNC_1(VAR_4->nb_flags, VAR_1))
  FUNC_0(VAR_4->nb_flags, VAR_1);

 FUNC_3(VAR_4);

 FUNC_4(1, &VAR_3.read_bios);

 VAR_5 = FUNC_8(VAR_4, VAR_7, VAR_8);





 if (FUNC_2(VAR_8))
  FUNC_7(&VAR_8);
 return (VAR_5);
}
