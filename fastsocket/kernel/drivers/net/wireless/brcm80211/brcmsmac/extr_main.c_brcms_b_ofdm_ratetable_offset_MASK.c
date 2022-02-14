
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcms_hardware {int dummy; } ;


 size_t FUNC_0 (struct plcp_signal_rate_lookup const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct brcms_hardware*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(struct brcms_hardware *VAR_9,
      u8 VAR_10)
{
 uint VAR_11;
 u8 VAR_12 = 0;
 struct plcp_signal_rate_lookup {
  u8 rate;
  u8 signal_rate;
 };

 const struct plcp_signal_rate_lookup VAR_13[] = {
  {VAR_6, 0xB},
  {VAR_7, 0xF},
  {VAR_0, 0xA},
  {VAR_1, 0xE},
  {VAR_2, 0x9},
  {VAR_3, 0xD},
  {VAR_4, 0x8},
  {VAR_5, 0xC}
 };

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_13); VAR_11++) {
  if (VAR_10 == VAR_13[VAR_11].rate) {
   VAR_12 = VAR_13[VAR_11].signal_rate;
   break;
  }
 }




 return 2 * FUNC_1(VAR_9, VAR_8 + (VAR_12 * 2));
}
