
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7146 {int dummy; } ;


 int FUNC_0 (struct saa7146*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct saa7146 *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 u8 *VAR_13;
 if (VAR_10)
  VAR_13 = VAR_8;
 else
  VAR_13 = VAR_7;
 VAR_12 = FUNC_1(VAR_6) & 0x08;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_3) {
   if (VAR_13[VAR_11 * 2] == 0x3a)
    FUNC_0(VAR_9, 0x88, 0x3a, 0x13, 2);
   else if (VAR_13[VAR_11 * 2] == 0x6b)
    FUNC_0(VAR_9, 0x88, 0x6b, 0x20, 2);
   else if (VAR_13[VAR_11 * 2] == 0x6c)
    FUNC_0(VAR_9, 0x88, 0x6c,
      VAR_10 ? 0x09 : 0xf5, 2);
   else if (VAR_13[VAR_11 * 2] == 0x6d)
    FUNC_0(VAR_9, 0x88, 0x6d,
      VAR_10 ? 0x20 : 0x00, 2);
   else if (VAR_13[VAR_11 * 2] == 0x7a)
    FUNC_0(VAR_9, 0x88, 0x7a,
      VAR_10 ? (VAR_4 - 1) :
      (VAR_1 - 4), 2);
   else if (VAR_13[VAR_11 * 2] == 0x7b)
    FUNC_0(VAR_9, 0x88, 0x7b,
      VAR_10 ? VAR_5 :
      VAR_2, 2);
   else
    FUNC_0(VAR_9, 0x88, VAR_13[VAR_11 * 2],
      VAR_13[VAR_11 * 2 + 1], 2);
  } else {
   if (VAR_13[VAR_11 * 2] == 0x6b && VAR_12)
    FUNC_0(VAR_9, 0x88, 0x6b,
      (VAR_13[VAR_11 * 2 + 1] ^ 0x09), 2);
   else if (VAR_13[VAR_11 * 2] == 0x7a)
    FUNC_0(VAR_9, 0x88, 0x7a,
      VAR_10 ? (VAR_4 - 1) :
      (VAR_1 - 4), 2);
   else if (VAR_13[VAR_11 * 2] == 0x7b)
    FUNC_0(VAR_9, 0x88, 0x7b,
      VAR_10 ? VAR_5 :
      VAR_2, 2);
   else
    FUNC_0(VAR_9, 0x88, VAR_13[VAR_11 * 2],
      VAR_13[VAR_11 * 2 + 1], 2);
  }
 }
}
