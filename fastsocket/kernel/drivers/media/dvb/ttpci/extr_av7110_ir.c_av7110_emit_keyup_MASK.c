
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct infrared {TYPE_1__* input_dev; int last_key; } ;
struct TYPE_3__ {int key; } ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct infrared *VAR_1 = (struct infrared *) VAR_0;

 if (!VAR_1 || !FUNC_2(VAR_1->last_key, VAR_1->input_dev->key))
  return;

 FUNC_0(VAR_1->input_dev, VAR_1->last_key, 0);
 FUNC_1(VAR_1->input_dev);
}
