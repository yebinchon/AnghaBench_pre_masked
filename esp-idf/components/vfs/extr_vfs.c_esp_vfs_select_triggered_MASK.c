
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* stop_socket_select ) (int ) ;} ;
struct TYPE_7__ {TYPE_1__ vfs; } ;
typedef TYPE_2__ vfs_entry_t ;
struct TYPE_8__ {int sem; scalar_t__ is_sem_local; } ;
typedef TYPE_3__ esp_vfs_select_sem_t ;


 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(esp_vfs_select_sem_t VAR_2)
{
    if (VAR_2.is_sem_local) {
        FUNC_1(VAR_2.sem);
    } else {



        for (int VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {


            const vfs_entry_t *VAR_4 = VAR_0[VAR_3];
            if (VAR_4 != ((void*)0) && VAR_4->vfs.stop_socket_select != ((void*)0)) {
                VAR_4->vfs.stop_socket_select(VAR_2.sem);
                break;
            }
        }
    }
}
