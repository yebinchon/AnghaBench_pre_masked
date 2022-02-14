
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int dummy; } ;


 int FUNC_0 (struct wiimote_t*,int ) ;
 scalar_t__ FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct wiimote_t*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct wiimote_t*,int ,int*,int,int ) ;

void FUNC_4(struct wiimote_t *VAR_5, int VAR_6)
{
 ubyte VAR_7;

 if(FUNC_1(VAR_5,VAR_0))
  return;

 FUNC_0(VAR_5, VAR_0);
 if(VAR_6)
 {
  VAR_7 = 0x04;
  FUNC_3(VAR_5,VAR_2,&VAR_7,1,VAR_3);
 }
 else
 {
  FUNC_2(VAR_5);
  VAR_7 = 0x55;
  FUNC_3(VAR_5,VAR_1,&VAR_7,1,VAR_4);
 }
}
