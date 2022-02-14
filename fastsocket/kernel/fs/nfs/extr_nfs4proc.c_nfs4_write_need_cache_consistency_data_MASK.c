
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_write_data {int * ds_clp; struct nfs_pgio_header* header; } ;
struct nfs_pgio_header {int inode; int * dreq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
bool FUNC_1(const struct nfs_write_data *VAR_1)
{
 const struct nfs_pgio_header *VAR_2 = VAR_1->header;


 if (VAR_1->ds_clp != ((void*)0) || VAR_2->dreq != ((void*)0))
  return 0;



 return FUNC_0(VAR_2->inode, VAR_0) == 0;
}
