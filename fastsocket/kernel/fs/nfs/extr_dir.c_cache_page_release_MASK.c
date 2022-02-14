
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* page; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;
struct TYPE_6__ {int mapping; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_2(nfs_readdir_descriptor_t *VAR_0)
{
 if (!VAR_0->page->mapping)
  FUNC_0(VAR_0->page);
 FUNC_1(VAR_0->page);
 VAR_0->page = ((void*)0);
}
