
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsLockInfo {int llist; int type; void* length; void* offset; } ;
struct cifsFileInfo {int lock_mutex; int llist; } ;
typedef int __u8 ;
typedef void* __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct cifsLockInfo* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cifsFileInfo *VAR_2, __u64 VAR_3,
    __u64 VAR_4, __u8 VAR_5)
{
 struct cifsLockInfo *VAR_6 =
  FUNC_0(sizeof(struct cifsLockInfo), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_6->offset = VAR_4;
 VAR_6->length = VAR_3;
 VAR_6->type = VAR_5;
 FUNC_2(&VAR_2->lock_mutex);
 FUNC_1(&VAR_6->llist, &VAR_2->llist);
 FUNC_3(&VAR_2->lock_mutex);
 return 0;
}
