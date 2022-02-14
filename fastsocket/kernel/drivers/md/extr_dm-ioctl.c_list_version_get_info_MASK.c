
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vers_iter {char* end; TYPE_1__* vers; TYPE_1__* old_vers; int flags; } ;
struct target_type {int name; int * version; } ;
struct TYPE_2__ {int name; scalar_t__ next; int * version; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct target_type *VAR_1, void *VAR_2)
{
    struct vers_iter *VAR_3 = VAR_2;


    if ((char *)VAR_3->vers + sizeof(VAR_1->version) + FUNC_2(VAR_1->name) + 1 >
 VAR_3->end) {

 VAR_3->flags = VAR_0;
 return;
    }

    if (VAR_3->old_vers)
 VAR_3->old_vers->next = (uint32_t) ((void *)VAR_3->vers -
        (void *)VAR_3->old_vers);
    VAR_3->vers->version[0] = VAR_1->version[0];
    VAR_3->vers->version[1] = VAR_1->version[1];
    VAR_3->vers->version[2] = VAR_1->version[2];
    VAR_3->vers->next = 0;
    FUNC_1(VAR_3->vers->name, VAR_1->name);

    VAR_3->old_vers = VAR_3->vers;
    VAR_3->vers = FUNC_0(((void *) ++VAR_3->vers) + FUNC_2(VAR_1->name) + 1);
}
