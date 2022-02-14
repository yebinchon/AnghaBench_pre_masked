
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volume_left; int volume_right; } ;
struct av7110 {int adac_type; TYPE_1__ mixer; } ;






 int VAR_0 ;
 int FUNC_0 (struct av7110*,int,int) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 int FUNC_2 (struct av7110*,int,int,int) ;
 int FUNC_3 (struct av7110*,int ,int,int) ;

int FUNC_4(struct av7110 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = 0;

 FUNC_1(2, "av7110:%p, \n", VAR_1);

 VAR_1->mixer.volume_left = VAR_2;
 VAR_1->mixer.volume_right = VAR_3;

 switch (VAR_1->adac_type) {
 case 128:
  VAR_2 = (VAR_2 * 256) / 1036;
  VAR_3 = (VAR_3 * 256) / 1036;
  if (VAR_2 > 0x3f)
   VAR_2 = 0x3f;
  if (VAR_3 > 0x3f)
   VAR_3 = 0x3f;
  if ((VAR_4 = FUNC_0(VAR_1, 3, 0x80 + VAR_2)))
   return VAR_4;
  return FUNC_0(VAR_1, 4, VAR_3);

 case 131:
  VAR_2 = 127 - VAR_2 / 2;
  VAR_3 = 127 - VAR_3 / 2;
  FUNC_2(VAR_1, 0x20, 0x03, VAR_2);
  FUNC_2(VAR_1, 0x20, 0x04, VAR_3);
  return 0;

 case 130:
  VAR_5 = (VAR_2 > VAR_3) ? VAR_2 : VAR_3;
  VAR_6 = (VAR_5 * 0x73 / 255) << 8;
  if (VAR_5 > 0)
         VAR_7 = ((VAR_3 - VAR_2) * 127) / VAR_5;
  FUNC_3(VAR_1, VAR_0, 0x0001, VAR_7 << 8);
  FUNC_3(VAR_1, VAR_0, 0x0000, VAR_6);
  FUNC_3(VAR_1, VAR_0, 0x0006, VAR_6);
  return 0;

 case 129:
  VAR_5 = (VAR_2 > VAR_3) ? VAR_2 : VAR_3;
  VAR_6 = (VAR_5 * 0x73 / 255) << 8;
  if (VAR_5 > 0)
   VAR_7 = ((VAR_3 - VAR_2) * 127) / VAR_5;
  FUNC_3(VAR_1, VAR_0, 0x0001, VAR_7 << 8);
  FUNC_3(VAR_1, VAR_0, 0x0000, VAR_6);
  return 0;
 }

 return 0;
}
