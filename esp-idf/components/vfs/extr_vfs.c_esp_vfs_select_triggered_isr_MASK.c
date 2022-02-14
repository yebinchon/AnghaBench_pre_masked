
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* stop_socket_select_isr ) (int ,int *) ;} ;
struct TYPE_7__ {TYPE_1__ vfs; } ;
typedef TYPE_2__ vfs_entry_t ;
struct TYPE_8__ {int sem; scalar_t__ is_sem_local; } ;
typedef TYPE_3__ esp_vfs_select_sem_t ;
typedef int BaseType_t ;


 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(esp_vfs_select_sem_t VAR_2, BaseType_t *VAR_3)
{
    if (VAR_2.is_sem_local) {
        FUNC_1(VAR_2.sem, VAR_3);
    } else {



        for (int VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {


            const vfs_entry_t *VAR_5 = VAR_0[VAR_4];
            if (VAR_5 != ((void*)0) && VAR_5->vfs.stop_socket_select_isr != ((void*)0)) {
                VAR_5->vfs.stop_socket_select_isr(VAR_2.sem, VAR_3);
                break;
            }
        }
    }
}
