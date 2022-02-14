
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* end_select ) (void*) ;} ;
struct TYPE_7__ {TYPE_1__ vfs; } ;
typedef TYPE_2__ vfs_entry_t ;
struct TYPE_8__ {scalar_t__ isset; } ;
typedef TYPE_3__ fds_triple_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(int VAR_2, const fds_triple_t *VAR_3, void **VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        const vfs_entry_t *VAR_6 = FUNC_2(VAR_5);
        const fds_triple_t *VAR_7 = &VAR_3[VAR_5];
        if (VAR_6 && VAR_6->vfs.end_select && VAR_7->isset) {
            esp_err_t VAR_8 = VAR_6->vfs.end_select(VAR_4[VAR_5]);
            if (VAR_8 != VAR_0) {
                FUNC_0(VAR_1, "end_select failed: %s", FUNC_1(VAR_8));
            }
        }
    }
}
