
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct representation* buffer; } ;
struct representation {struct representation* url_template; TYPE_2__* ctx; int input; int parent; TYPE_1__ pb; struct representation* init_sec_buf; int init_section; int cur_seg; } ;
struct TYPE_4__ {int * pb; } ;


 int FUNC_0 (struct representation**) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct representation*) ;
 int FUNC_5 (struct representation*) ;

__attribute__((used)) static void FUNC_6(struct representation *VAR_0)
{
    FUNC_4(VAR_0);
    FUNC_5(VAR_0);
    FUNC_3(&VAR_0->cur_seg);
    FUNC_3(&VAR_0->init_section);
    FUNC_0(&VAR_0->init_sec_buf);
    FUNC_0(&VAR_0->pb.buffer);
    FUNC_2(VAR_0->parent, &VAR_0->input);
    if (VAR_0->ctx) {
        VAR_0->ctx->pb = ((void*)0);
        FUNC_1(&VAR_0->ctx);
    }

    FUNC_0(&VAR_0->url_template);
    FUNC_0(&VAR_0);
}
