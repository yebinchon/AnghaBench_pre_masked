
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_inode_info {void* ino; void* version; void* size; void* rdev; void* blocks; void* blocksize; void* gid; void* uid; void* nlink; void* mode; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static inline void FUNC_2(struct netfs_inode_info *VAR_0)
{
 VAR_0->mode = FUNC_0(VAR_0->mode);
 VAR_0->nlink = FUNC_0(VAR_0->nlink);
 VAR_0->uid = FUNC_0(VAR_0->uid);
 VAR_0->gid = FUNC_0(VAR_0->gid);
 VAR_0->blocksize = FUNC_0(VAR_0->blocksize);
 VAR_0->blocks = FUNC_1(VAR_0->blocks);
 VAR_0->rdev = FUNC_1(VAR_0->rdev);
 VAR_0->size = FUNC_1(VAR_0->size);
 VAR_0->version = FUNC_1(VAR_0->version);
 VAR_0->ino = FUNC_1(VAR_0->ino);
}
