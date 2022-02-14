
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct huffman_decoder {int numcodes; TYPE_1__* huffnode; } ;
struct bitstream {int dummy; } ;
typedef enum huffman_error { ____Placeholder_huffman_error } huffman_error ;
struct TYPE_2__ {int numbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bitstream*) ;
 void* FUNC_1 (struct bitstream*,int) ;
 struct huffman_decoder* FUNC_2 (int,int) ;
 int FUNC_3 (struct huffman_decoder*) ;
 int FUNC_4 (struct huffman_decoder*) ;
 int FUNC_5 (struct huffman_decoder*) ;
 int FUNC_6 (struct huffman_decoder*,struct bitstream*) ;

enum huffman_error FUNC_7(struct huffman_decoder* VAR_3, struct bitstream* VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
   uint32_t VAR_7;
   enum huffman_error VAR_8;
 uint8_t VAR_9 = 0;
 int VAR_10, VAR_11 = 0;
   int VAR_12;

 struct huffman_decoder* VAR_13 = FUNC_2(24, 6);

 VAR_13->huffnode[0].numbits = FUNC_1(VAR_4, 3);
 VAR_12 = FUNC_1(VAR_4, 3) + 1;

 for (VAR_10 = 1; VAR_10 < 24; VAR_10++)
 {
  if (VAR_10 < VAR_12 || VAR_11 == 7)
   VAR_13->huffnode[VAR_10].numbits = 0;
  else
  {
   VAR_11 = FUNC_1(VAR_4, 3);
   VAR_13->huffnode[VAR_10].numbits = (VAR_11 == 7) ? 0 : VAR_11;
  }
 }


 VAR_8 = FUNC_4(VAR_13);
 if (VAR_8 != VAR_2)
  return VAR_8;
 FUNC_5(VAR_13);


 VAR_7 = VAR_3->numcodes - 9;
 while (VAR_7 != 0)
    {
        VAR_7 >>= 1;
        VAR_9++;
    }


 for (VAR_6 = 0; VAR_6 < VAR_3->numcodes; )
 {
  int VAR_14 = FUNC_6(VAR_13, VAR_4);
  if (VAR_14 != 0)
   VAR_3->huffnode[VAR_6++].numbits = VAR_5 = VAR_14 - 1;
  else
  {
   int VAR_15 = FUNC_1(VAR_4, 3) + 2;
   if (VAR_15 == 7+2)
    VAR_15 += FUNC_1(VAR_4, VAR_9);
   for ( ; VAR_15 != 0 && VAR_6 < VAR_3->numcodes; VAR_15--)
    VAR_3->huffnode[VAR_6++].numbits = VAR_5;
  }
 }


 if (VAR_6 != VAR_3->numcodes)
   {
      FUNC_3(VAR_13);
  return VAR_1;
   }


 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8 != VAR_2)
   {
      FUNC_3(VAR_13);
  return VAR_8;
   }


 FUNC_5(VAR_3);
 FUNC_3(VAR_13);


 return FUNC_0(VAR_4) ? VAR_0 : VAR_2;
}
