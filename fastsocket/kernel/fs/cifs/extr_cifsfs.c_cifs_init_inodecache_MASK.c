
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_0 (char*,int,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
 VAR_4 = FUNC_0("cifs_inode_cache",
           sizeof(struct cifsInodeInfo),
           0, (VAR_2|
      VAR_1),
           VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 return 0;
}
