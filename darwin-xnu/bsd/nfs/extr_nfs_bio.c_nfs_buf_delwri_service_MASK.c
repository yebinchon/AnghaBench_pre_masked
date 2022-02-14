
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsbuf {int nb_flags; int nb_np; } ;
typedef int nfsnode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 struct nfsbuf* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nfsbuf*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (struct nfsbuf*,int ,int ,int ) ;
 int FUNC_7 (int ,struct nfsbuf*) ;
 int FUNC_8 (struct nfsbuf*) ;
 int VAR_4 ;
 int FUNC_9 (struct nfsbuf*) ;
 int FUNC_10 (struct nfsbuf*) ;
 int FUNC_11 (struct nfsbuf*) ;
 int FUNC_12 (struct nfsbuf*) ;
 int FUNC_13 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_14(void)
{
 struct nfsbuf *VAR_7;
 nfsnode_t VAR_8;
 int VAR_9, VAR_10 = 0;

 while (VAR_10 < 8 && (VAR_7 = FUNC_2(&VAR_5)) != ((void*)0)) {
  VAR_8 = VAR_7->nb_np;
  FUNC_11(VAR_7);
  FUNC_9(VAR_7);
  while ((VAR_9 = FUNC_6(VAR_7, 0, 0, 0)) == VAR_0);
  FUNC_10(VAR_7);
  if (VAR_9)
   break;
  if (!VAR_7->nb_np) {

   FUNC_8(VAR_7);
   continue;
  }
  if (FUNC_0(VAR_7->nb_flags, VAR_2))
   FUNC_7(VAR_8, VAR_7);
  if (FUNC_0(VAR_7->nb_flags, VAR_2)) {

   FUNC_3(&VAR_5, VAR_7, VAR_3);
   VAR_6++;
   FUNC_8(VAR_7);
   FUNC_5(VAR_4);
   FUNC_13(VAR_8, 1);
  } else {
   FUNC_1(VAR_7->nb_flags, VAR_1);
   FUNC_5(VAR_4);
   FUNC_12(VAR_7);
  }
  VAR_10++;
  FUNC_4(VAR_4);
 }
}
