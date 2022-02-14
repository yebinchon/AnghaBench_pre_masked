
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ivtv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (struct ivtv*,unsigned char) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*) ;

__attribute__((used)) static int FUNC_4(struct ivtv *VAR_1, unsigned char VAR_2, unsigned char *VAR_3, u32 VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = -VAR_0;
 u32 VAR_8;

 for (VAR_6 = 0; VAR_7 != 0 && VAR_6 < 8; ++VAR_6) {
  VAR_7 = FUNC_2(VAR_1);

  if (VAR_7 == 0) {
   VAR_7 = FUNC_1(VAR_1, VAR_2<<1);
   for (VAR_8 = 0; VAR_7 == 0 && VAR_8 < VAR_4; ++VAR_8)
    VAR_7 = FUNC_1(VAR_1, VAR_3[VAR_8]);
  }
  if (VAR_7 != 0 || VAR_5) {
   FUNC_3(VAR_1);
  }
 }
 if (VAR_7)
  FUNC_0("i2c write to %x failed\n", VAR_2);
 return VAR_7;
}
