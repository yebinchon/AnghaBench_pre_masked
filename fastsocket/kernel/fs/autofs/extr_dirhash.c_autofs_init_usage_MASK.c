
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dirhash {int expiry_head; } ;
struct autofs_dir_ent {int last_usage; int exp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct autofs_dirhash *VAR_1,
         struct autofs_dir_ent *VAR_2)
{
 FUNC_0(&VAR_2->exp, &VAR_1->expiry_head);
 VAR_2->last_usage = VAR_0;
}
