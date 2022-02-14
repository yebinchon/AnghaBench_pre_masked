
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtouch {scalar_t__ idx; int data; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct mtouch *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->dev;

 if (VAR_3 == ++VAR_5->idx) {
  FUNC_3(VAR_6, VAR_0, FUNC_1(VAR_5->data));
  FUNC_3(VAR_6, VAR_1, VAR_4 - FUNC_2(VAR_5->data));
  FUNC_4(VAR_6, VAR_2, FUNC_0(VAR_5->data));
  FUNC_5(VAR_6);

  VAR_5->idx = 0;
 }
}
