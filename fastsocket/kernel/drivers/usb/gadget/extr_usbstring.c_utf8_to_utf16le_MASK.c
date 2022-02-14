
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
typedef int __le16 ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, __le16 *VAR_1, unsigned VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4;
 u16 VAR_5;





 while (VAR_2 != 0 && (VAR_4 = (u8) *VAR_0++) != 0) {
  if (FUNC_1(VAR_4 & 0x80)) {


   if ((VAR_4 & 0xe0) == 0xc0) {
    VAR_5 = (VAR_4 & 0x1f) << 6;

    VAR_4 = (u8) *VAR_0++;
    if ((VAR_4 & 0xc0) != 0x80)
     goto fail;
    VAR_4 &= 0x3f;
    VAR_5 |= VAR_4;



   } else if ((VAR_4 & 0xf0) == 0xe0) {
    VAR_5 = (VAR_4 & 0x0f) << 12;

    VAR_4 = (u8) *VAR_0++;
    if ((VAR_4 & 0xc0) != 0x80)
     goto fail;
    VAR_4 &= 0x3f;
    VAR_5 |= VAR_4 << 6;

    VAR_4 = (u8) *VAR_0++;
    if ((VAR_4 & 0xc0) != 0x80)
     goto fail;
    VAR_4 &= 0x3f;
    VAR_5 |= VAR_4;


    if (0xd800 <= VAR_5 && VAR_5 <= 0xdfff)
     goto fail;







   } else
    goto fail;
  } else
   VAR_5 = VAR_4;
  FUNC_0(VAR_5, VAR_1++);
  VAR_3++;
  VAR_2--;
 }
 return VAR_3;
fail:
 return -1;
}
