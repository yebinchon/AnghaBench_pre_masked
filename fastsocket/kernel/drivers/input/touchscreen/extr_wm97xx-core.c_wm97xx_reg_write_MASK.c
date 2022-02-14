
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int* dig; int* gpio; int misc; TYPE_3__* ac97; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* write ) (TYPE_3__*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int) ;

void FUNC_1(struct wm97xx *VAR_4, u16 VAR_5, u16 VAR_6)
{

 if (VAR_5 >= VAR_2 && VAR_5 <= VAR_3)
  VAR_4->dig[(VAR_5 - VAR_2) >> 1] = VAR_6;


 if (VAR_5 >= VAR_0 && VAR_5 <= VAR_1)
  VAR_4->gpio[(VAR_5 - VAR_0) >> 1] = VAR_6;


 if (VAR_5 == 0x5a)
  VAR_4->misc = VAR_6;

 if (VAR_4->ac97)
  VAR_4->ac97->bus->ops->write(VAR_4->ac97, VAR_5, VAR_6);
}
