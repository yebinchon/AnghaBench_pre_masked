
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd {int reset; int type; int layout; int wait; int serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct sunkbd *VAR_4)
{
 VAR_4->reset = -2;
 FUNC_0(VAR_4->serio, VAR_2);
 FUNC_1(VAR_4->wait, VAR_4->reset >= 0, VAR_0);
 if (VAR_4->reset < 0)
  return -1;

 VAR_4->type = VAR_4->reset;

 if (VAR_4->type == 4) {
  VAR_4->layout = -2;
  FUNC_0(VAR_4->serio, VAR_1);
  FUNC_1(VAR_4->wait,
       VAR_4->layout >= 0, VAR_0 / 4);
  if (VAR_4->layout < 0)
   return -1;
  if (VAR_4->layout & VAR_3)
   VAR_4->type = 5;
 }

 return 0;
}
