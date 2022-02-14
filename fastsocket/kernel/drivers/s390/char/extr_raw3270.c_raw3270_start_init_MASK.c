
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw3270_view {TYPE_1__* dev; } ;
struct raw3270_request {int rc; int * callback_data; int * callback; } ;
struct raw3270 {int dummy; } ;
struct TYPE_2__ {int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw3270*,struct raw3270_view*,struct raw3270_request*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct raw3270_request*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct raw3270_request*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct raw3270 *VAR_4, struct raw3270_view *VAR_5,
     struct raw3270_request *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 VAR_6->callback = VAR_3;
 VAR_6->callback_data = &VAR_2;
 FUNC_5(FUNC_2(VAR_5->dev->cdev), VAR_7);
 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 FUNC_6(FUNC_2(VAR_5->dev->cdev), VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_9(VAR_2,
          FUNC_4(VAR_6));
 if (VAR_8 == -VAR_0) {
  FUNC_3(VAR_5->dev, VAR_6);

  FUNC_8(VAR_2, FUNC_4(VAR_6));
  return -VAR_0;
 }
 return VAR_6->rc;
}
