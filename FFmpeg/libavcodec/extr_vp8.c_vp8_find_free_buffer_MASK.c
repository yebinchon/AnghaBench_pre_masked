
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* f; } ;
struct TYPE_11__ {TYPE_2__ tf; } ;
typedef TYPE_3__ VP8Frame ;
struct TYPE_12__ {int avctx; TYPE_3__* frames; TYPE_3__** framep; } ;
typedef TYPE_4__ VP8Context ;
struct TYPE_9__ {scalar_t__* buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static VP8Frame *FUNC_3(VP8Context *VAR_5)
{
    VP8Frame *VAR_6 = ((void*)0);
    int VAR_7;


    for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
        if (&VAR_5->frames[VAR_7] != VAR_5->framep[VAR_1] &&
            &VAR_5->frames[VAR_7] != VAR_5->framep[VAR_4] &&
            &VAR_5->frames[VAR_7] != VAR_5->framep[VAR_2] &&
            &VAR_5->frames[VAR_7] != VAR_5->framep[VAR_3]) {
            VAR_6 = &VAR_5->frames[VAR_7];
            break;
        }
    if (VAR_7 == 5) {
        FUNC_1(VAR_5->avctx, VAR_0, "Ran out of free frames!\n");
        FUNC_0();
    }
    if (VAR_6->tf.f->buf[0])
        FUNC_2(VAR_5, VAR_6);

    return VAR_6;
}
