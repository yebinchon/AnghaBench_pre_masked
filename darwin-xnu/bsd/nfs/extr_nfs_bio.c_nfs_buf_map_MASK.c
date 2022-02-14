
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct nfsbuf {scalar_t__ nb_data; int nb_flags; int nb_pagelist; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct nfsbuf*,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct nfsbuf*) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int
FUNC_5(struct nfsbuf *VAR_3)
{
 kern_return_t VAR_4;

 if (VAR_3->nb_data)
  return (0);
 if (!FUNC_1(VAR_3->nb_flags, VAR_2))
  return (VAR_0);

 VAR_4 = FUNC_4(VAR_3->nb_pagelist, (vm_offset_t *)&(VAR_3->nb_data));
 if (VAR_4 != VAR_1)
  FUNC_3("nfs_buf_map: ubc_upl_map() failed with (%d)", VAR_4);
 if (VAR_3->nb_data == 0)
  FUNC_3("ubc_upl_map mapped 0");
 FUNC_0(540, VAR_3, VAR_3->nb_flags, FUNC_2(VAR_3), VAR_3->nb_data);
 return (0);
}
