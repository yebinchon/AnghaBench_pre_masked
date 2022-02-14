
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct apple_key_translation {int to; scalar_t__ from; } ;


 int VAR_0 ;
 struct apple_key_translation* VAR_1 ;
 struct apple_key_translation* VAR_2 ;
 struct apple_key_translation* VAR_3 ;
 struct apple_key_translation* VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_5)
{
 const struct apple_key_translation *VAR_6;

 FUNC_0(VAR_0, VAR_5->keybit);


 for (VAR_6 = VAR_1; VAR_6->from; VAR_6++)
  FUNC_0(VAR_6->to, VAR_5->keybit);

 for (VAR_6 = VAR_3; VAR_6->from; VAR_6++)
  FUNC_0(VAR_6->to, VAR_5->keybit);

 for (VAR_6 = VAR_4; VAR_6->from; VAR_6++)
  FUNC_0(VAR_6->to, VAR_5->keybit);

 for (VAR_6 = VAR_2; VAR_6->from; VAR_6++)
  FUNC_0(VAR_6->to, VAR_5->keybit);
}
