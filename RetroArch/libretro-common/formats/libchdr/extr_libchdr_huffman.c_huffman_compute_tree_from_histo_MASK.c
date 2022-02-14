
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct huffman_decoder {int numcodes; int maxbits; scalar_t__* datahisto; } ;
typedef enum huffman_error { ____Placeholder_huffman_error } huffman_error ;


 int FUNC_0 (struct huffman_decoder*) ;
 int FUNC_1 (struct huffman_decoder*,int,int) ;

enum huffman_error FUNC_2(struct huffman_decoder* VAR_0)
{

 int VAR_1;
   uint32_t VAR_2;
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->numcodes; VAR_1++)
  VAR_4 += VAR_0->datahisto[VAR_1];


 VAR_2 = VAR_4 * 2;
 while (1)
 {

  uint32_t VAR_5 = (VAR_2 + VAR_3) / 2;
  int VAR_6 = FUNC_1(VAR_0, VAR_4, VAR_5);


  if (VAR_6 <= VAR_0->maxbits)
  {
   VAR_3 = VAR_5;


   if (VAR_5 == VAR_4 || (VAR_2 - VAR_3) <= 1)
    break;
  }
  else
   VAR_2 = VAR_5;
 }


 return FUNC_0(VAR_0);
}
