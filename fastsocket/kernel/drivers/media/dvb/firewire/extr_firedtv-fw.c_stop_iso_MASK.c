
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firedtv_receive_context {int context; int buffer; } ;
struct firedtv {struct firedtv_receive_context* backend_data; } ;
struct TYPE_2__ {int card; } ;


 TYPE_1__* FUNC_0 (struct firedtv*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct firedtv_receive_context*) ;

__attribute__((used)) static void FUNC_5(struct firedtv *VAR_0)
{
 struct firedtv_receive_context *VAR_1 = VAR_0->backend_data;

 FUNC_3(VAR_1->context);
 FUNC_1(&VAR_1->buffer, FUNC_0(VAR_0)->card);
 FUNC_2(VAR_1->context);
 FUNC_4(VAR_1);
}
