
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct media_bay_info {int cached_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct media_bay_info*,int ,int) ;
 int FUNC_1 (struct media_bay_info*,int ,int ) ;
 int FUNC_2 (struct media_bay_info*,int ) ;
 int FUNC_3 (struct media_bay_info*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static u8
FUNC_5(struct media_bay_info *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_2) & VAR_0;
 if (VAR_6) {
  VAR_5->cached_gpio = VAR_6;
  return VAR_4;
 } else if (VAR_5->cached_gpio != VAR_6) {
  FUNC_1(VAR_5, VAR_1, VAR_3);
  (void)FUNC_2(VAR_5, VAR_1);
  FUNC_4(5);
  FUNC_0(VAR_5, VAR_1, 0x0000000F);
  (void)FUNC_2(VAR_5, VAR_1);
  FUNC_4(5);
  VAR_5->cached_gpio = VAR_6;
 }
 return (FUNC_2(VAR_5, VAR_1) >> 4) & 7;
}
