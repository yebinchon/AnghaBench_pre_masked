
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ksign_signature {int have; void** keyid; void* timestamp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (char*) ;
 void* FUNC_2 (int const**) ;

__attribute__((used)) static int FUNC_3(struct ksign_signature *VAR_3,
         const uint8_t *VAR_4,
         size_t VAR_5)
{
 size_t VAR_6;
 uint8_t VAR_7;

 while (VAR_5 > 0) {

  VAR_6 = *VAR_4++;
  VAR_5--;
  if (VAR_6 == 0)
   continue;
  if (VAR_6 > 192 && VAR_6 < 255) {
   if (VAR_5 < 192)
    goto too_short;
   VAR_6 -= 192;
   VAR_6 <<= 8;
   VAR_6 += *VAR_4++;
   VAR_6 += 192;
   VAR_5--;
  } else if (VAR_6 == 255) {
   if (VAR_5 < 4)
    goto too_short;
   VAR_6 = FUNC_2(&VAR_4);
   VAR_5 -= 4;
   if (VAR_6 == 0)
    goto too_short;
  }
  if (VAR_6 > VAR_5)
   return -VAR_0;
  VAR_5 -= VAR_6;

  VAR_7 = *VAR_4++;
  VAR_6--;

  switch (VAR_7 & 0x7f) {
  case 128:
   if (VAR_6 < 4)
    goto too_short;
   VAR_3->timestamp = FUNC_2(&VAR_4);
   VAR_3->have |= VAR_2;
   break;

  case 129:
   if (VAR_6 < 8)
    goto too_short;
   VAR_3->keyid[0] = FUNC_2(&VAR_4);
   VAR_3->keyid[1] = FUNC_2(&VAR_4);
   VAR_3->have |= VAR_1;
   break;

  default:
   VAR_4 += VAR_6;
   break;
  }
 }

 FUNC_0(VAR_5 != 0);
 return 0;

too_short:
 FUNC_1("ksign: signature subpkt too short\n");
 return -VAR_0;
}
