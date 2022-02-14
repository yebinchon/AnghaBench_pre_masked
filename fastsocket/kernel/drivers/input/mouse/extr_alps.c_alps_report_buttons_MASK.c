
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct input_dev {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_3,
    struct input_dev *VAR_4, struct input_dev *VAR_5,
    int VAR_6, int VAR_7, int VAR_8)
{
 struct input_dev *VAR_9;






 VAR_9 = FUNC_2(VAR_0, VAR_5->key) ? VAR_5 : VAR_4;
 FUNC_0(VAR_9, VAR_0, VAR_6);

 VAR_9 = FUNC_2(VAR_2, VAR_5->key) ? VAR_5 : VAR_4;
 FUNC_0(VAR_9, VAR_2, VAR_7);

 VAR_9 = FUNC_2(VAR_1, VAR_5->key) ? VAR_5 : VAR_4;
 FUNC_0(VAR_9, VAR_1, VAR_8);





 FUNC_1(VAR_5);
}
