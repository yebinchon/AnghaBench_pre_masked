
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {scalar_t__ io_start; scalar_t__ good_bytes; int error; int lock; int flags; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfs_pgio_header *VAR_2, int VAR_3, loff_t VAR_4)
{
 FUNC_2(&VAR_2->lock);
 if (VAR_4 < VAR_2->io_start + VAR_2->good_bytes) {
  FUNC_1(VAR_1, &VAR_2->flags);
  FUNC_0(VAR_0, &VAR_2->flags);
  VAR_2->good_bytes = VAR_4 - VAR_2->io_start;
  VAR_2->error = VAR_3;
 }
 FUNC_3(&VAR_2->lock);
}
