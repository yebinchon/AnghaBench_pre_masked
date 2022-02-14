
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct alps_data {int y_max; int x_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct alps_data *VAR_7,
       struct input_dev *VAR_8)
{
 FUNC_0(VAR_8, VAR_0, 0, VAR_7->x_max, 0, 0);
 FUNC_0(VAR_8, VAR_1, 0, VAR_7->y_max, 0, 0);

 FUNC_1(VAR_4, VAR_8->keybit);
 FUNC_1(VAR_6, VAR_8->keybit);
 FUNC_1(VAR_5, VAR_8->keybit);

 FUNC_0(VAR_8, VAR_2, 0, VAR_7->x_max, 0, 0);
 FUNC_0(VAR_8, VAR_3, 0, VAR_7->y_max, 0, 0);
}
