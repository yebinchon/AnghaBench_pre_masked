
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt_uint8 ;
typedef int stbtt_uint32 ;
typedef int stbtt_uint16 ;
typedef scalar_t__ stbtt_int32 ;
typedef int const ch ;
typedef int const c ;



__attribute__((used)) static stbtt_int32 FUNC_0(const stbtt_uint8 *VAR_0, stbtt_int32 VAR_1, const stbtt_uint8 *VAR_2, stbtt_int32 VAR_3)
{
   stbtt_int32 VAR_4=0;


   while (VAR_3) {
      stbtt_uint16 VAR_5 = VAR_2[0]*256 + VAR_2[1];
      if (VAR_5 < 0x80)
      {
         if (VAR_4 >= VAR_1) return -1;
         if (VAR_0[VAR_4++] != VAR_5) return -1;
      }
      else if (VAR_5 < 0x800)
      {
         if (VAR_4+1 >= VAR_1) return -1;
         if (VAR_0[VAR_4++] != 0xc0 + (VAR_5 >> 6)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + (VAR_5 & 0x3f)) return -1;
      }
      else if (VAR_5 >= 0xd800 && VAR_5 < 0xdc00)
      {
         stbtt_uint32 VAR_6;
         stbtt_uint16 VAR_7 = VAR_2[2]*256 + VAR_2[3];
         if (VAR_4+3 >= VAR_1) return -1;
         VAR_6 = ((VAR_5 - 0xd800) << 10) + (VAR_7 - 0xdc00) + 0x10000;
         if (VAR_0[VAR_4++] != 0xf0 + (VAR_6 >> 18)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + ((VAR_6 >> 12) & 0x3f)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + ((VAR_6 >> 6) & 0x3f)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + ((VAR_6 ) & 0x3f)) return -1;
         VAR_2 += 2;
         VAR_3 -= 2;
      }
      else if (VAR_5 >= 0xdc00 && VAR_5 < 0xe000)
         return -1;
      else
      {
         if (VAR_4+2 >= VAR_1) return -1;
         if (VAR_0[VAR_4++] != 0xe0 + (VAR_5 >> 12)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + ((VAR_5 >> 6) & 0x3f)) return -1;
         if (VAR_0[VAR_4++] != 0x80 + ((VAR_5 ) & 0x3f)) return -1;
      }
      VAR_2 += 2;
      VAR_3 -= 2;
   }
   return VAR_4;
}
