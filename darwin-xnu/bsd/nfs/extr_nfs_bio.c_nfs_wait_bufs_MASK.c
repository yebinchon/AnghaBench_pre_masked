
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nfsbuflists {int dummy; } ;
struct nfsbuf {int dummy; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_5__ {int n_dirtyblkhd; int n_cleanblkhd; } ;


 int VAR_0 ;
 struct nfsbuf* FUNC_0 (struct nfsbuflists*) ;
 int FUNC_1 (int *,struct nfsbuf*,int ) ;
 int FUNC_2 (struct nfsbuf*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct nfsbuf*,int ,int ,int ) ;
 int FUNC_6 (struct nfsbuf*) ;
 int FUNC_7 (TYPE_1__*,struct nfsbuflists*,int ) ;
 int FUNC_8 (TYPE_1__*,struct nfsbuflists*,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct nfsbuf*) ;
 int FUNC_10 (struct nfsbuf*) ;

void
FUNC_11(nfsnode_t VAR_5)
{
 struct nfsbuf *VAR_6;
 struct nfsbuflists VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_4);
 if (!FUNC_8(VAR_5, &VAR_7, VAR_1)) {
  while ((VAR_6 = FUNC_0(&VAR_7))) {
   FUNC_2(VAR_6, VAR_3);
   FUNC_1(&VAR_5->n_cleanblkhd, VAR_6, VAR_3);
   FUNC_9(VAR_6);
   while ((VAR_8 = FUNC_5(VAR_6, 0, 0, 0))) {
    if (VAR_8 != VAR_0) {
     FUNC_10(VAR_6);
     FUNC_7(VAR_5, &VAR_7, VAR_1);
     FUNC_4(VAR_4);
     return;
    }
   }
   FUNC_10(VAR_6);
   FUNC_6(VAR_6);
  }
  FUNC_7(VAR_5, &VAR_7, VAR_1);
 }
 if (!FUNC_8(VAR_5, &VAR_7, VAR_2)) {
  while ((VAR_6 = FUNC_0(&VAR_7))) {
   FUNC_2(VAR_6, VAR_3);
   FUNC_1(&VAR_5->n_dirtyblkhd, VAR_6, VAR_3);
   FUNC_9(VAR_6);
   while ((VAR_8 = FUNC_5(VAR_6, 0, 0, 0))) {
    if (VAR_8 != VAR_0) {
     FUNC_10(VAR_6);
     FUNC_7(VAR_5, &VAR_7, VAR_2);
     FUNC_4(VAR_4);
     return;
    }
   }
   FUNC_10(VAR_6);
   FUNC_6(VAR_6);
  }
  FUNC_7(VAR_5, &VAR_7, VAR_2);
 }
 FUNC_4(VAR_4);
}
