
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsc2007 {TYPE_1__* client; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct tsc2007 *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->input;

 FUNC_0(&VAR_2->client->dev, "UP\n");

 FUNC_2(VAR_3, VAR_1, 0);
 FUNC_1(VAR_3, VAR_0, 0);
 FUNC_3(VAR_3);
}
