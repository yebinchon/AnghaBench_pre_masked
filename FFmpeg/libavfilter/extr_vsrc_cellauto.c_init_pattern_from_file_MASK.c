
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int file_bufsize; scalar_t__* pattern; int file_buf; int filename; } ;
typedef TYPE_1__ CellAutoContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int*,int ,TYPE_2__*) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1)
{
    CellAutoContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    VAR_3 = FUNC_1(VAR_2->filename,
                      &VAR_2->file_buf, &VAR_2->file_bufsize, 0, VAR_1);
    if (VAR_3 < 0)
        return VAR_3;


    VAR_2->pattern = FUNC_2(VAR_2->file_bufsize + 1);
    if (!VAR_2->pattern)
        return FUNC_0(VAR_0);
    FUNC_4(VAR_2->pattern, VAR_2->file_buf, VAR_2->file_bufsize);
    VAR_2->pattern[VAR_2->file_bufsize] = 0;

    return FUNC_3(VAR_1);
}
