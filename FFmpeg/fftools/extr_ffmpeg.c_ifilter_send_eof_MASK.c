
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int eof; scalar_t__ format; scalar_t__ type; TYPE_2__* ist; scalar_t__ filter; } ;
struct TYPE_7__ {TYPE_1__* st; int file_index; } ;
struct TYPE_6__ {int index; int codecpar; } ;
typedef TYPE_3__ InputFilter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(InputFilter *VAR_5, int64_t VAR_6)
{
    int VAR_7;

    VAR_5->eof = 1;

    if (VAR_5->filter) {
        VAR_7 = FUNC_0(VAR_5->filter, VAR_6, VAR_3);
        if (VAR_7 < 0)
            return VAR_7;
    } else {

        if (VAR_5->format < 0)
            FUNC_2(VAR_5, VAR_5->ist->st->codecpar);
        if (VAR_5->format < 0 && (VAR_5->type == VAR_1 || VAR_5->type == VAR_2)) {
            FUNC_1(((void*)0), VAR_4, "Cannot determine format of input stream %d:%d after EOF\n", VAR_5->ist->file_index, VAR_5->ist->st->index);
            return VAR_0;
        }
    }

    return 0;
}
