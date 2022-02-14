
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ VAR_7 ;

int FUNC_3(UWORD VAR_8, int VAR_9)
{
 int VAR_10 = 0xff;
 if (!VAR_5) {
  VAR_10 = FUNC_1(VAR_8);
 }
 else if (!VAR_4) {
  VAR_10 = FUNC_1(VAR_8);
 }
 else if (!VAR_6) {
  if (VAR_7 == 0 ) {
   if ((VAR_8&0xff)<0x40) {
    VAR_10 = VAR_3[VAR_8&0xff];
    if ((VAR_8&0xff) == 0x3a) {
     VAR_10 = 0x01;
    }
   }
   FUNC_0(FUNC_2("AF80 Read addr:%4x cpu:%4x\n", VAR_8, VAR_1[(VAR_2-1)%VAR_0]));
  }
 }
 return VAR_10;
}
