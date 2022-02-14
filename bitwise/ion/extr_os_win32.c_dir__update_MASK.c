
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _finddata_t {int attrib; int name; int size; } ;
struct TYPE_3__ {int valid; int error; int is_dir; scalar_t__* name; int size; } ;
typedef TYPE_1__ DirListIter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,int ,int) ;

void FUNC_1(DirListIter *VAR_4, bool VAR_5, struct _finddata_t *VAR_6) {
    VAR_4->valid = !VAR_5;
    VAR_4->error = VAR_5 && VAR_3 != VAR_0;
    if (!VAR_5) {
        VAR_4->size = VAR_6->size;
        FUNC_0(VAR_4->name, VAR_6->name, sizeof(VAR_4->name) - 1);
        VAR_4->name[VAR_1 - 1] = 0;
        VAR_4->is_dir = VAR_6->attrib & VAR_2;
    }
}
