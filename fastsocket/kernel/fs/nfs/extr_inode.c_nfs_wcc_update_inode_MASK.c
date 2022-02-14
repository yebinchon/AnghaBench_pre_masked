
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {scalar_t__ change_attr; int cache_validity; scalar_t__ npages; } ;
struct nfs_fattr {int valid; scalar_t__ pre_change_attr; scalar_t__ change_attr; int size; int pre_size; int mtime; int pre_mtime; int ctime; int pre_ctime; } ;
struct inode {int i_mode; int i_mtime; int i_ctime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static unsigned long FUNC_8(struct inode *VAR_10, struct nfs_fattr *VAR_11)
{
 struct nfs_inode *VAR_12 = FUNC_0(VAR_10);
 unsigned long VAR_13 = 0;

 if ((VAR_11->valid & VAR_3)
   && (VAR_11->valid & VAR_0)
   && VAR_12->change_attr == VAR_11->pre_change_attr) {
  VAR_12->change_attr = VAR_11->change_attr;
  if (FUNC_1(VAR_10->i_mode))
   VAR_12->cache_validity |= VAR_9;
  VAR_13 |= VAR_8;
 }

 if ((VAR_11->valid & VAR_4)
   && (VAR_11->valid & VAR_1)
   && FUNC_7(&VAR_10->i_ctime, &VAR_11->pre_ctime)) {
  FUNC_4(&VAR_10->i_ctime, &VAR_11->ctime, sizeof(VAR_10->i_ctime));
  VAR_13 |= VAR_8;
 }

 if ((VAR_11->valid & VAR_5)
   && (VAR_11->valid & VAR_2)
   && FUNC_7(&VAR_10->i_mtime, &VAR_11->pre_mtime)) {
  FUNC_4(&VAR_10->i_mtime, &VAR_11->mtime, sizeof(VAR_10->i_mtime));
  if (FUNC_1(VAR_10->i_mode))
   VAR_12->cache_validity |= VAR_9;
  VAR_13 |= VAR_8;
 }
 if ((VAR_11->valid & VAR_6)
   && (VAR_11->valid & VAR_7)
   && FUNC_2(VAR_10) == FUNC_6(VAR_11->pre_size)
   && VAR_12->npages == 0) {
  FUNC_3(VAR_10, FUNC_6(VAR_11->size));
  VAR_13 |= VAR_8;
 }

 if (VAR_12->cache_validity & VAR_9)
  FUNC_5(VAR_10);

 return VAR_13;
}
