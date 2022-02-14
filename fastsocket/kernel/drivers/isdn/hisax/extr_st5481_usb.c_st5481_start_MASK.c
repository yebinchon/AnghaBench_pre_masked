
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st5481_intr {int urb; } ;
struct st5481_adapter {int leds; struct st5481_intr intr; } ;


 int FUNC_0 (int,char*) ;






 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct st5481_adapter*,int ) ;
 int FUNC_3 (struct st5481_adapter*,int,int,int *,int *) ;

void FUNC_4(struct st5481_adapter *VAR_2)
{
 static const u8 VAR_3[]={
  129,0,
  128,0,
  131,0x0d,
  132,0x29,
  130,0x14,
  137,0x01,
  136,134,


  139,6,
  141,20,
  138,6,
  140,20,
  135,133 +142 +143,
  0
 };
 struct st5481_intr *VAR_4 = &VAR_2->intr;
 int VAR_5 = 0;
 u8 VAR_6,VAR_7;

 FUNC_0(8,"");

 VAR_2->leds = 134;


 FUNC_1(VAR_4->urb, VAR_0);

 while ((VAR_6 = VAR_3[VAR_5++])) {
  VAR_7 = VAR_3[VAR_5++];
  FUNC_3(VAR_2, VAR_6, VAR_7, ((void*)0), ((void*)0));
 }
 FUNC_2(VAR_2, VAR_1);
}
