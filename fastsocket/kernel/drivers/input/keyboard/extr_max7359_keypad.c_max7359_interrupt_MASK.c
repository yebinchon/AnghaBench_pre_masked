
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max7359_keypad {int * keycodes; TYPE_1__* client; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int,int,char*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct max7359_keypad *VAR_7 = VAR_6;
 struct input_dev *VAR_8 = VAR_7->input_dev;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_5(VAR_7->client, VAR_2);
 VAR_10 = VAR_9 & 0x7;
 VAR_11 = (VAR_9 >> 3) & 0x7;
 VAR_12 = VAR_9 & 0x40;

 VAR_13 = FUNC_0(VAR_10, VAR_11, VAR_3);

 FUNC_1(&VAR_7->client->dev,
  "key[%d:%d] %s\n", VAR_10, VAR_11, VAR_12 ? "release" : "press");

 FUNC_2(VAR_8, VAR_0, VAR_4, VAR_13);
 FUNC_3(VAR_8, VAR_7->keycodes[VAR_13], !VAR_12);
 FUNC_4(VAR_8);

 return VAR_1;
}
