
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv {TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct ivtv *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->card->type != VAR_0)
  return;
 FUNC_0("Resetting PVR150 IR\n");
 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = FUNC_2(VAR_1);
 VAR_4 |= 0x80;
 FUNC_4(VAR_4, VAR_1);
 VAR_5 = (VAR_5 & ~0xF) | 1;
 FUNC_4(VAR_5, VAR_2);

 FUNC_3(FUNC_1(1));
 VAR_5 |= 2;
 FUNC_4(VAR_5, VAR_2);
 VAR_4 &= ~0x80;
 FUNC_4(VAR_4, VAR_1);
}
