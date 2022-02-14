
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270_request {struct con3270* callback_data; int callback; } ;
struct con3270 {int view; TYPE_1__* input; int read; } ;
struct TYPE_2__ {int len; int string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct raw3270_request*) ;
 int FUNC_1 (struct raw3270_request*,int ) ;
 int FUNC_2 (struct raw3270_request*,int ,int ) ;
 int FUNC_3 (int *,struct raw3270_request*) ;
 struct raw3270_request* FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct con3270 *VAR_2)
{
 struct raw3270_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(&VAR_2->read, 0);
 if (!VAR_3)

  return;
 VAR_3->callback = VAR_1;
 VAR_3->callback_data = VAR_2;
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_2->input->string, VAR_2->input->len);

 VAR_4 = FUNC_3(&VAR_2->view, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3);
}
