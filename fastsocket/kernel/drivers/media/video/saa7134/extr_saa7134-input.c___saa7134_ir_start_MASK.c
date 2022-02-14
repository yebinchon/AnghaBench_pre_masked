
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct saa7134_card_ir {int running; int active; TYPE_1__ timer; scalar_t__ raw_decode; scalar_t__ polling; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_5)
{
 struct saa7134_dev *VAR_6 = VAR_5;
 struct saa7134_card_ir *VAR_7;

 if (!VAR_6 || !VAR_6->remote)
  return -VAR_0;

 VAR_7 = VAR_6->remote;
 if (VAR_7->running)
  return 0;

 VAR_7->running = 1;
 VAR_7->active = 0;

 if (VAR_7->polling) {
  FUNC_1(&VAR_7->timer, VAR_4,
       (unsigned long)VAR_6);
  VAR_7->timer.expires = VAR_3 + VAR_1;
  FUNC_0(&VAR_7->timer);
 } else if (VAR_7->raw_decode) {

  FUNC_1(&VAR_7->timer, VAR_2,
       (unsigned long)VAR_6);
 }

 return 0;
}
