
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct input_dev {int keybit; } ;
struct TYPE_3__ {int keycode; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, int VAR_3, int VAR_4)
{
 u16 VAR_5;
 unsigned VAR_6;

 if (((unsigned)VAR_3) >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = VAR_1[VAR_3].keycode;
 VAR_1[VAR_3].keycode = VAR_4;
 FUNC_2(VAR_4, VAR_2->keybit);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_1[VAR_3].keycode == VAR_5)
   goto done;
 }
 FUNC_1(VAR_5, VAR_2->keybit);
done:
 return 0;
}
