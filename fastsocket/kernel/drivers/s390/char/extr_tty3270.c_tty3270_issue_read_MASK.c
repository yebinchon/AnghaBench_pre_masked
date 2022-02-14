
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty3270 {int read; int view; TYPE_1__* input; } ;
struct raw3270_request {struct tty3270* callback_data; int callback; } ;
struct TYPE_2__ {int len; int string; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw3270_request*) ;
 int FUNC_1 (struct raw3270_request*,int ) ;
 int FUNC_2 (struct raw3270_request*,int ,int ) ;
 int FUNC_3 (int *,struct raw3270_request*) ;
 int FUNC_4 (int *,struct raw3270_request*) ;
 int VAR_1 ;
 struct raw3270_request* FUNC_5 (int *,struct raw3270_request*) ;

__attribute__((used)) static void
FUNC_6(struct tty3270 *VAR_2, int VAR_3)
{
 struct raw3270_request *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(&VAR_2->read, 0);
 if (!VAR_4)

  return;
 VAR_4->callback = VAR_1;
 VAR_4->callback_data = VAR_2;
 FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_2->input->string, VAR_2->input->len);

 if (VAR_3) {
  VAR_5 = FUNC_3(&VAR_2->view, VAR_4);
 } else
  VAR_5 = FUNC_4(&VAR_2->view, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4);
  FUNC_5(&VAR_2->read, VAR_4);
 }
}
