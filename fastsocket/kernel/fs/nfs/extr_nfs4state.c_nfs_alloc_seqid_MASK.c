
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_seqid_counter {int dummy; } ;
struct nfs_seqid {int list; struct nfs_seqid_counter* sequence; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct nfs_seqid* FUNC_1 (int,int ) ;

struct nfs_seqid *FUNC_2(struct nfs_seqid_counter *VAR_0, gfp_t VAR_1)
{
 struct nfs_seqid *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (VAR_2 != ((void*)0)) {
  VAR_2->sequence = VAR_0;
  FUNC_0(&VAR_2->list);
 }
 return VAR_2;
}
