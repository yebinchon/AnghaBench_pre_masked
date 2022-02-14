
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int dump ;







 struct pcf50633* FUNC_0 (struct device*) ;
 int FUNC_1 (int*,int,int,int,char*,int,int ) ;
 int FUNC_2 (struct pcf50633*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct pcf50633 *VAR_3 = FUNC_0(VAR_0);
 u8 VAR_4[16];
 int VAR_5, VAR_6, VAR_7 = 0;
 char *VAR_8 = VAR_2;
 static u8 VAR_9[] = {
  132,
  131,
  130,
  129,
  128,
  0
 };

 for (VAR_5 = 0; VAR_5 < 256; VAR_5 += sizeof(VAR_4)) {
  for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
   if (VAR_5 == VAR_9[VAR_7]) {
    VAR_7++;
    VAR_4[VAR_6] = 0x00;
   } else
    VAR_4[VAR_6] = FUNC_2(VAR_3, VAR_5 + VAR_6);

  FUNC_1(VAR_4, sizeof(VAR_4), 16, 1, VAR_8, 128, 0);
  VAR_8 += FUNC_3(VAR_8);
  *VAR_8++ = '\n';
  *VAR_8 = '\0';
 }

 return VAR_8 - VAR_2;
}
