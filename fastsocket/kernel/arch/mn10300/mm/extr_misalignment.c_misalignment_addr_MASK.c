
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8_t ;
typedef scalar_t__ int16_t ;





 size_t* VAR_0 ;
 int FUNC_0 () ;



 size_t* VAR_1 ;
 size_t* VAR_2 ;






 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_3, unsigned long VAR_4,
        unsigned VAR_5, unsigned VAR_6,
        unsigned long VAR_7,
        void **VAR_8, unsigned long **VAR_9,
        unsigned long *VAR_10)
{
 unsigned long *VAR_11 = ((void*)0), VAR_12 = 0, VAR_13;

 if (!(VAR_5 & 0x1000000)) {
  FUNC_1("noinc");
  *VAR_10 = 0;
  VAR_10 = ((void*)0);
 }

 VAR_5 &= 0x00ffffff;

 do {
  switch (VAR_5 & 0xff) {
  case 150:
   VAR_11 = &VAR_3[VAR_1[VAR_6 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 149:
   VAR_11 = &VAR_3[VAR_1[VAR_6 >> 2 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 148:
   VAR_11 = &VAR_3[VAR_1[VAR_6 >> 4 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 153:
   VAR_11 = &VAR_3[VAR_0[VAR_6 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 152:
   VAR_11 = &VAR_3[VAR_0[VAR_6 >> 2 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 151:
   VAR_11 = &VAR_3[VAR_0[VAR_6 >> 4 & 0x03]];
   VAR_12 += *VAR_11;
   break;
  case 138:
   VAR_11 = &VAR_3[VAR_2[VAR_6 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 137:
   VAR_11 = &VAR_3[VAR_2[VAR_6 >> 2 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 136:
   VAR_11 = &VAR_3[VAR_2[VAR_6 >> 4 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 135:
   VAR_11 = &VAR_3[VAR_2[VAR_6 >> 8 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 134:
   VAR_11 = &VAR_3[VAR_2[VAR_6 >> 12 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 140:
   VAR_11 = &VAR_3[VAR_2[VAR_7 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 139:
   VAR_11 = &VAR_3[VAR_2[VAR_7 >> 4 & 0x0f]];
   VAR_12 += *VAR_11;
   break;
  case 128:
   VAR_12 += VAR_4;
   break;




  case 131:
  case 129:
   VAR_7 = (long) (int8_t) (VAR_7 & 0xff);
   goto displace_or_inc;
  case 133:
   VAR_7 = (long) (int16_t) (VAR_7 & 0xffff);
   goto displace_or_inc;
  case 132:
   VAR_13 = VAR_7 << 8;
   asm("asr 8,%0" : "=r"(VAR_13) : "0"(VAR_13));
   VAR_7 = (long) VAR_13;
   goto displace_or_inc;
  case 130:
   VAR_13 = VAR_6 >> 4 & 0x0f;
   VAR_13 <<= 28;
   asm("asr 28,%0" : "=r"(VAR_13) : "0"(VAR_13));
   VAR_7 = (long) VAR_13;
   goto displace_or_inc;
  case 141:
   VAR_7 &= 0x000000ff;
   goto displace_or_inc;
  case 147:
   VAR_7 &= 0x0000ffff;
   goto displace_or_inc;
  case 146:
   VAR_7 &= 0x00ffffff;
   goto displace_or_inc;
  case 145:
  case 142:
  case 144:
  case 143:
  displace_or_inc:
   FUNC_1("%s %lx", VAR_10 ? "incr" : "disp", VAR_7);
   if (!VAR_10)
    VAR_12 += VAR_7;
   else
    *VAR_10 = VAR_7;
   break;
  default:
   FUNC_0();
   return 0;
  }
 } while ((VAR_5 >>= 8));

 *VAR_8 = (void *) VAR_12;
 *VAR_9 = VAR_11;
 return 1;
}
