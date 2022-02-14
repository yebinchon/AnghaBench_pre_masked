
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct wiimote_t {int unid; } ;


 int FUNC_0 (struct wiimote_t*,int) ;
 int FUNC_1 (struct wiimote_t*,int) ;
 int FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct wiimote_t*,char**,char**) ;
 int FUNC_5 (struct wiimote_t*,int ,int *,int,int *) ;

void FUNC_6(struct wiimote_t* VAR_8, int VAR_9) {
 char* VAR_10 = ((void*)0);
 char* VAR_11 = ((void*)0);

 if (!VAR_8) return;

 if (VAR_9 > 5) VAR_9 = 5;
 if (VAR_9 < 1) VAR_9 = 1;

 FUNC_0(VAR_8, (VAR_1 |
        VAR_2 |
        VAR_3 |
        VAR_4 |
        VAR_5));

 switch (VAR_9) {
  case 1:
   FUNC_1(VAR_8, VAR_1);
   break;
  case 2:
   FUNC_1(VAR_8, VAR_2);
   break;
  case 3:
   FUNC_1(VAR_8, VAR_3);
   break;
  case 4:
   FUNC_1(VAR_8, VAR_4);
   break;
  case 5:
   FUNC_1(VAR_8, VAR_5);
   break;
  default:
   return;
 }

 if(!FUNC_2(VAR_8,VAR_0)) return;


 FUNC_4(VAR_8, &VAR_10, &VAR_11);

 FUNC_5(VAR_8, VAR_6, (ubyte*)VAR_10, 9,((void*)0));
 FUNC_5(VAR_8, VAR_7, (ubyte*)VAR_11, 2,((void*)0));

 FUNC_3("Set IR sensitivity to level %i (unid %i)", VAR_9, VAR_8->unid);
}
