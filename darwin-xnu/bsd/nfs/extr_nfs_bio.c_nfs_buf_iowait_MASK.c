
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsbuf {int nb_error; int nb_flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct nfsbuf*,int ,int ,int) ;
 int FUNC_2 (int,struct nfsbuf*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nfsbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nfsbuf*,int ,scalar_t__,char*,int *) ;
 int VAR_6 ;

int
FUNC_8(struct nfsbuf *VAR_7)
{
 FUNC_2(549, VAR_7, FUNC_4(VAR_7), VAR_7->nb_flags, VAR_7->nb_error);

 FUNC_5(VAR_6);

 while (!FUNC_3(VAR_7->nb_flags, VAR_2))
  FUNC_7(VAR_7, VAR_6, VAR_5 + 1, "nfs_buf_iowait", ((void*)0));

 FUNC_6(VAR_6);

 FUNC_1(549, VAR_7, FUNC_4(VAR_7), VAR_7->nb_flags, VAR_7->nb_error);


 if (FUNC_3(VAR_7->nb_flags, VAR_3)) {
  FUNC_0(VAR_7->nb_flags, VAR_3);
  return (VAR_0);
 } else if (FUNC_3(VAR_7->nb_flags, VAR_4))
  return (VAR_7->nb_error ? VAR_7->nb_error : VAR_1);
 return (0);
}
