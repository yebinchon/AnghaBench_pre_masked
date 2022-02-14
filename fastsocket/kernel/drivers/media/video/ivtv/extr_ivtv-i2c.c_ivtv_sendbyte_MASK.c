
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*,int) ;
 int FUNC_4 (struct ivtv*,int) ;
 int FUNC_5 (struct ivtv*,int) ;
 int FUNC_6 (struct ivtv*,int) ;

__attribute__((used)) static int FUNC_7(struct ivtv *VAR_1, unsigned char VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0("write %x\n",VAR_2);
 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3, VAR_2<<=1) {
  FUNC_3(VAR_1, 0);
  if (!FUNC_5(VAR_1, 0)) {
   FUNC_1("Error setting SCL low\n");
   return -VAR_0;
  }
  VAR_4 = (VAR_2>>7)&1;
  FUNC_4(VAR_1, VAR_4);
  if (!FUNC_6(VAR_1, VAR_4)) {
   FUNC_1("Error setting SDA\n");
   return -VAR_0;
  }
  FUNC_3(VAR_1, 1);
  if (!FUNC_5(VAR_1, 1)) {
   FUNC_1("Slave not ready for bit\n");
   return -VAR_0;
  }
 }
 FUNC_3(VAR_1, 0);
 if (!FUNC_5(VAR_1, 0)) {
  FUNC_1("Error setting SCL low\n");
  return -VAR_0;
 }
 return FUNC_2(VAR_1);
}
