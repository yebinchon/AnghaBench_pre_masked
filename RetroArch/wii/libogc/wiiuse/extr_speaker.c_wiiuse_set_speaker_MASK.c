
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int unid; } ;


 int FUNC_0 (struct wiimote_t*,int ) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 scalar_t__ FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct wiimote_t*,int ,int*,int,int *) ;
 int FUNC_6 (struct wiimote_t*,int *) ;
 int FUNC_7 (struct wiimote_t*,int ,int*,int,int *) ;

void FUNC_8(struct wiimote_t *VAR_11,int VAR_12)
{
 ubyte VAR_13[7];
 ubyte VAR_14 = 0x00;

 if(!VAR_11) return;

 if(!FUNC_2(VAR_11,VAR_0)) {
  FUNC_3("Tried to enable speaker, will wait until handshake finishes.\n");
  if(VAR_12)
   FUNC_1(VAR_11, VAR_2);
  else
   FUNC_0(VAR_11, VAR_2);
  return;
 }

 if(VAR_12) {
  if(FUNC_2(VAR_11,VAR_1)) {
   FUNC_6(VAR_11,((void*)0));
   return;
  }
 } else {
  if(!FUNC_2(VAR_11,VAR_1)) {
   FUNC_6(VAR_11,((void*)0));
   return;
  }
 }

 VAR_14 = 0x04;
 FUNC_5(VAR_11,VAR_4,&VAR_14,1,((void*)0));

 if (!VAR_12) {
  FUNC_3("Disabled speaker for wiimote id %i.", VAR_11->unid);

  VAR_14 = 0x01;
  FUNC_7(VAR_11,VAR_6,&VAR_14,1,((void*)0));

  VAR_14 = 0x00;
  FUNC_7(VAR_11,VAR_8,&VAR_14,1,((void*)0));

  VAR_14 = 0x00;
  FUNC_5(VAR_11,VAR_3,&VAR_14,1,((void*)0));

  FUNC_6(VAR_11,((void*)0));
  return;
 }

 FUNC_4(VAR_13,VAR_9,7);

 VAR_14 = 0x04;
 FUNC_5(VAR_11,VAR_3,&VAR_14,1,((void*)0));

 VAR_14 = 0x01;
 FUNC_7(VAR_11,VAR_8,&VAR_14,1,((void*)0));

 VAR_14 = 0x08;
 FUNC_7(VAR_11,VAR_6,&VAR_14,1,((void*)0));

 VAR_13[2] = 0xd0;
 VAR_13[3] = 0x07;
 VAR_13[4] = VAR_10;
 FUNC_7(VAR_11,VAR_5,VAR_13,7,((void*)0));

 VAR_14 = 0x01;
 FUNC_7(VAR_11,VAR_7,&VAR_14,1,((void*)0));

 VAR_14 = 0x00;
 FUNC_5(VAR_11,VAR_4,&VAR_14,1,((void*)0));

 FUNC_6(VAR_11,((void*)0));
 return;
}
