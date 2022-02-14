
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {scalar_t__ id; scalar_t__ value; } ;
struct em28xx {scalar_t__ mute; scalar_t__ volume; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ minimum; scalar_t__ maximum; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct em28xx*) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_2, const struct v4l2_control *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_3->id == VAR_1[VAR_4].id)
   goto handle;


 return 1;

handle:
 if (VAR_3->value < VAR_1[VAR_4].minimum ||
     VAR_3->value > VAR_1[VAR_4].maximum)
  return -VAR_0;

 switch (VAR_3->id) {
 case 129:
  VAR_2->mute = VAR_3->value;
  break;
 case 128:
  VAR_2->volume = VAR_3->value;
  break;
 }

 return FUNC_1(VAR_2);
}
