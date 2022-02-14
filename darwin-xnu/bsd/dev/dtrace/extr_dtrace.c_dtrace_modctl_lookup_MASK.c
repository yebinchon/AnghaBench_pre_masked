
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modctl {scalar_t__ mod_id; struct modctl* mod_next; } ;
struct kmod_info {scalar_t__ id; } ;
typedef struct modctl modctl_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct modctl* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static modctl_t *
FUNC_1(struct kmod_info * VAR_3)
{
    FUNC_0(&VAR_2, VAR_0);

    struct modctl * VAR_4;

    for (VAR_4 = VAR_1; VAR_4; VAR_4=VAR_4->mod_next) {
 if (VAR_4->mod_id == VAR_3->id)
     return(VAR_4);
    }
    return (((void*)0));
}
