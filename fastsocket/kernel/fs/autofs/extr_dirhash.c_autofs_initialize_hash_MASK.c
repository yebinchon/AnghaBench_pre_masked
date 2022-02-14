
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dirhash {int expiry_head; int h; } ;
struct autofs_dir_ent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct autofs_dirhash *VAR_1) {
 FUNC_1(&VAR_1->h, 0, VAR_0*sizeof(struct autofs_dir_ent *));
 FUNC_0(&VAR_1->expiry_head);
}
