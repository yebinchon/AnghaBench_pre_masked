
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsbuf {int nb_lflags; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nfsbuf*) ;

void
FUNC_4(struct nfsbuf *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_1(VAR_2->nb_lflags, VAR_0))
  FUNC_2("nfs_buf_drop: buffer not busy!");
 if (FUNC_1(VAR_2->nb_lflags, VAR_1)) {

  VAR_3 = 1;
 }

 FUNC_0(VAR_2->nb_lflags, (VAR_0 | VAR_1));

 if (VAR_3)
         FUNC_3(VAR_2);
}
