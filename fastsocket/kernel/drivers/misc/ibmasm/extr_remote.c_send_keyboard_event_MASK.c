
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short key_code; int key_down; } ;
struct TYPE_4__ {TYPE_1__ keyboard; } ;
struct remote_input {TYPE_2__ data; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,unsigned int,int ) ;
 int FUNC_1 (struct input_dev*) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_2,
  struct remote_input *VAR_3)
{
 unsigned int VAR_4;
 unsigned short VAR_5 = VAR_3->data.keyboard.key_code;

 if (VAR_5 & 0xff00)
  VAR_4 = VAR_1[VAR_5 & 0xff];
 else
  VAR_4 = VAR_0[VAR_5];
 FUNC_0(VAR_2, VAR_4, VAR_3->data.keyboard.key_down);
 FUNC_1(VAR_2);
}
