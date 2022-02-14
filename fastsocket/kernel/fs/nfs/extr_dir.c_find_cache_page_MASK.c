
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int page; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static
int FUNC_5(nfs_readdir_descriptor_t *VAR_0)
{
 int VAR_1;

 VAR_0->page = FUNC_3(VAR_0);
 if (FUNC_0(VAR_0->page))
  return FUNC_1(VAR_0->page);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 != 0)
  FUNC_2(VAR_0);
 return VAR_1;
}
