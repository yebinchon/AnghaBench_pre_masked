
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_dirent {int length; int down; } ;
typedef int dnode_secno ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline dnode_secno FUNC_1 (struct hpfs_dirent *VAR_0)
{
  FUNC_0(VAR_0->down,("HPFS: de_down_pointer: !de->down\n"));
  return *(dnode_secno *) ((void *) VAR_0 + VAR_0->length - 4);
}
