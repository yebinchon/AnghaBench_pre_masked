
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dme1737_data {int has_fan; int has_pwm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_2, struct dme1737_data *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 u16 VAR_6;

 FUNC_0(VAR_2);




 VAR_5 = VAR_1 ? VAR_1 : FUNC_2(VAR_2, 0x20);
 if (!(VAR_5 == 0x77 || VAR_5 == 0x78 || VAR_5 == 0x89)) {
  VAR_4 = -VAR_0;
  goto exit;
 }


 FUNC_3(VAR_2, 0x07, 0x0a);


 if (!(VAR_6 = (FUNC_2(VAR_2, 0x60) << 8) |
        FUNC_2(VAR_2, 0x61))) {
  VAR_4 = -VAR_0;
  goto exit;
 }




 if ((FUNC_4(VAR_6 + 0x43) & 0x0c) == 0x08) {
  VAR_3->has_fan |= (1 << 5);
 }
 if ((FUNC_4(VAR_6 + 0x44) & 0x0c) == 0x08) {
  VAR_3->has_pwm |= (1 << 5);
 }
 if ((FUNC_4(VAR_6 + 0x45) & 0x0c) == 0x08) {
  VAR_3->has_fan |= (1 << 4);
 }
 if ((FUNC_4(VAR_6 + 0x46) & 0x0c) == 0x08) {
  VAR_3->has_pwm |= (1 << 4);
 }

exit:
 FUNC_1(VAR_2);

 return VAR_4;
}
