
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void hpfs_dirent ;
struct dnode {int first_free; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline struct hpfs_dirent *FUNC_1 (struct dnode *VAR_0)
{
  FUNC_0(VAR_0->first_free>=0x14 && VAR_0->first_free<=0xa00,("HPFS: dnode_end_de: dnode->first_free = %d\n",(int)VAR_0->first_free));
  return (void *) VAR_0 + VAR_0->first_free;
}
