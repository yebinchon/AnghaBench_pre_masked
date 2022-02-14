
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nfsbuf {scalar_t__ nb_bufsize; scalar_t__ nb_data; } ;
struct nfs_vattr {int dummy; } ;
struct nfs_dir_buf_header {int ndbh_count; scalar_t__ ndbh_entry_end; } ;



uint32_t
FUNC_0(struct nfsbuf *VAR_0, int VAR_1)
{
 struct nfs_dir_buf_header *VAR_2 = (struct nfs_dir_buf_header*)VAR_0->nb_data;
 uint32_t VAR_3;

 if (!VAR_2)
  return (0);
 VAR_3 = VAR_0->nb_bufsize - VAR_2->ndbh_entry_end;
 if (VAR_1)
  VAR_3 -= VAR_2->ndbh_count * sizeof(struct nfs_vattr);
 return (VAR_3);
}
