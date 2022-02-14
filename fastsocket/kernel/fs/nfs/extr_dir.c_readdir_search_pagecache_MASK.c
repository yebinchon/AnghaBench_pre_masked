
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ page_index; scalar_t__ last_cookie; scalar_t__ current_index; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline
int FUNC_1(nfs_readdir_descriptor_t *VAR_1)
{
 int VAR_2;

 if (VAR_1->page_index == 0) {
  VAR_1->current_index = 0;
  VAR_1->last_cookie = 0;
 }
 do {
  VAR_2 = FUNC_0(VAR_1);
 } while (VAR_2 == -VAR_0);
 return VAR_2;
}
