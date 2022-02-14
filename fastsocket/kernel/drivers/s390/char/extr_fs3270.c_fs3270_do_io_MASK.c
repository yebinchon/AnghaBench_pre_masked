
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {int dummy; } ;
struct raw3270_request {int * callback_data; int callback; } ;
struct fs3270 {int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fs3270*) ;
 int FUNC_1 (struct raw3270_request*) ;
 int FUNC_2 (struct raw3270_view*,struct raw3270_request*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct raw3270_view *VAR_2, struct raw3270_request *VAR_3)
{
 struct fs3270 *VAR_4;
 int VAR_5;

 VAR_4 = (struct fs3270 *) VAR_2;
 VAR_3->callback = VAR_1;
 VAR_3->callback_data = &VAR_4->wait;

 do {
  if (!FUNC_0(VAR_4)) {

   VAR_5 = FUNC_4(VAR_4->wait,
            FUNC_0(VAR_4));
   if (VAR_5 != 0)
    break;
  }
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5 == 0) {

   FUNC_3(VAR_4->wait, FUNC_1(VAR_3));
  }
 } while (VAR_5 == -VAR_0);
 return VAR_5;
}
