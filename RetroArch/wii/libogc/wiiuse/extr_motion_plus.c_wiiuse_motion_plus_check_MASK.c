
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uword ;
typedef int ubyte ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct wiimote_t {TYPE_1__ exp; int event; int motion_plus_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wiimote_t*,int ) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct wiimote_t*,int ,int ,int,void (*) (struct wiimote_t*,int*,int )) ;
 int FUNC_3 (struct wiimote_t*) ;

void FUNC_4(struct wiimote_t *VAR_7,ubyte *VAR_8,uword VAR_9)
{
 u32 VAR_10;
 if(VAR_8 == ((void*)0))
 {
  FUNC_2(VAR_7, VAR_7->motion_plus_id, VAR_6, 6, FUNC_4);
 }
 else
 {
  FUNC_0(VAR_7, VAR_2);
  FUNC_0(VAR_7, VAR_3);
  FUNC_0(VAR_7, VAR_4);
  VAR_10 = (VAR_8[3] << 16) | (VAR_8[2] << 24) | (VAR_8[4] << 8) | VAR_8[5];
  if(VAR_10 == VAR_0)
  {

   VAR_7->event = VAR_5;
   VAR_7->exp.type = VAR_1;

   FUNC_1(VAR_7,VAR_2);
   FUNC_3(VAR_7);
  }
 }
}
