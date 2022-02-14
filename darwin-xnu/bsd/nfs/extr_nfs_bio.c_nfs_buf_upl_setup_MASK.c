
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * upl_t ;
struct nfsbuf {int nb_flags; int * nb_pagelist; int nb_np; int nb_bufsize; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct nfsbuf*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct nfsbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int **,int *,int,int ) ;

int
FUNC_7(struct nfsbuf *VAR_9)
{
 kern_return_t VAR_10;
 upl_t VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_9->nb_flags, VAR_4))
  return (0);

 VAR_12 = VAR_6;
 if (!FUNC_1(VAR_9->nb_flags, VAR_5)) {




  VAR_12 |= VAR_7;
 }
 VAR_10 = FUNC_6(FUNC_3(VAR_9->nb_np), FUNC_2(VAR_9), VAR_9->nb_bufsize,
    &VAR_11, ((void*)0), VAR_12, VAR_8);
 if (VAR_10 == VAR_2) {

  VAR_9->nb_pagelist = ((void*)0);
  return (VAR_0);
 }
 if (VAR_10 != VAR_3) {
  FUNC_5("nfs_buf_upl_setup(): failed to get pagelist %d\n", VAR_10);
  VAR_9->nb_pagelist = ((void*)0);
  return (VAR_1);
 }

 FUNC_0(538, VAR_9, FUNC_2(VAR_9), VAR_9->nb_bufsize, VAR_9->nb_np);

 VAR_9->nb_pagelist = VAR_11;
 FUNC_4(VAR_9->nb_flags, VAR_4);
 return (0);
}
