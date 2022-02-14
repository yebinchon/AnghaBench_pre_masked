
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int programmableDelay; } ;
struct aiptek {TYPE_1__ curSetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct aiptek*,unsigned char,unsigned char) ;
 int FUNC_1 (struct aiptek*,int,int,int*,int const) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int const,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct aiptek *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 const int VAR_6 = 3 * sizeof(u8);
 int VAR_7;
 u8 *VAR_8;

 VAR_8 = FUNC_5(VAR_6, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8[0] = 2;
 VAR_8[1] = VAR_4;
 VAR_8[2] = VAR_5;

 if (FUNC_0(VAR_3, VAR_4, VAR_5) != 0) {
  FUNC_4(VAR_8);
  return -VAR_0;
 }
 FUNC_6(VAR_3->curSetting.programmableDelay);

 if ((VAR_7 =
      FUNC_1(VAR_3, 3, 2, VAR_8, VAR_6)) != VAR_6) {
  FUNC_2("aiptek_query failed: returned 0x%02x 0x%02x 0x%02x",
      VAR_8[0], VAR_8[1], VAR_8[2]);
  VAR_7 = -VAR_0;
 } else {
  VAR_7 = FUNC_3(VAR_8 + 1);
 }
 FUNC_4(VAR_8);
 return VAR_7;
}
