
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
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct wiimote_t*,char**,char**) ;
 int FUNC_6 (struct wiimote_t*,int ,int*,int,int *) ;
 int FUNC_7 (struct wiimote_t*,int *) ;
 int FUNC_8 (struct wiimote_t*,int ,int*,int,int *) ;

void FUNC_9(struct wiimote_t *VAR_12,int VAR_13)
{
 ubyte VAR_14 = 0x00;
 int VAR_15 = 0;
 char* VAR_16 = ((void*)0);
 char* VAR_17 = ((void*)0);

 if(!VAR_12) return;







 if(!FUNC_2(VAR_12,VAR_1)) {
  FUNC_3("Tried to enable IR, will wait until handshake finishes.\n");
  if(VAR_13)
   FUNC_1(VAR_12, VAR_3);
  else
   FUNC_0(VAR_12, VAR_3);
  return;
 }




 VAR_15 = FUNC_5(VAR_12, &VAR_16, &VAR_17);
 if (!VAR_15) {
  FUNC_4("No IR sensitivity setting selected.");
  return;
 }

 if (VAR_13) {

  if (FUNC_2(VAR_12, VAR_2)) {
   FUNC_7(VAR_12,((void*)0));
   return;
  }
 } else {

  if (!FUNC_2(VAR_12, VAR_2)) {
   FUNC_7(VAR_12,((void*)0));
   return;
  }
 }

 VAR_14 = (VAR_13 ? 0x04 : 0x00);
 FUNC_6(VAR_12,VAR_4,&VAR_14,1,((void*)0));
 FUNC_6(VAR_12,VAR_5,&VAR_14,1,((void*)0));

 if (!VAR_13) {
  FUNC_3("Disabled IR cameras for wiimote id %i.", VAR_12->unid);
  FUNC_7(VAR_12,((void*)0));
  return;
 }


 VAR_14 = 0x08;
 FUNC_8(VAR_12,VAR_8,&VAR_14,1,((void*)0));

 FUNC_8(VAR_12, VAR_9, (ubyte*)VAR_16, 9, ((void*)0));
 FUNC_8(VAR_12, VAR_10, (ubyte*)VAR_17, 2, ((void*)0));

 if(FUNC_2(VAR_12,VAR_0)) VAR_14 = VAR_6;
 else VAR_14 = VAR_7;
 FUNC_8(VAR_12,VAR_11, &VAR_14, 1, ((void*)0));

 FUNC_7(VAR_12,((void*)0));
 return;
}
