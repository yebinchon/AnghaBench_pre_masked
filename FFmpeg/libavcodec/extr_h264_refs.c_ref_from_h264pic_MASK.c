
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pic_id; int poc; int reference; TYPE_1__* f; } ;
struct TYPE_7__ {TYPE_3__* parent; int pic_id; int poc; int reference; int linesize; int data; } ;
struct TYPE_6__ {int linesize; int data; } ;
typedef TYPE_2__ H264Ref ;
typedef TYPE_3__ H264Picture ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(H264Ref *VAR_0, H264Picture *VAR_1)
{
    FUNC_0(VAR_0->data, VAR_1->f->data, sizeof(VAR_0->data));
    FUNC_0(VAR_0->linesize, VAR_1->f->linesize, sizeof(VAR_0->linesize));
    VAR_0->reference = VAR_1->reference;
    VAR_0->poc = VAR_1->poc;
    VAR_0->pic_id = VAR_1->pic_id;
    VAR_0->parent = VAR_1;
}
