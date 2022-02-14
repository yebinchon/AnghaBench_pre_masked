
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct huffman_decoder {int maxbits; int numcodes; TYPE_1__* huffnode; } ;
struct bitstream {int dummy; } ;
typedef enum huffman_error { ____Placeholder_huffman_error } huffman_error ;
struct TYPE_2__ {int numbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bitstream*) ;
 int FUNC_1 (struct bitstream*,int) ;
 int FUNC_2 (struct huffman_decoder*) ;
 int FUNC_3 (struct huffman_decoder*) ;

enum huffman_error FUNC_4(struct huffman_decoder* VAR_3, struct bitstream* VAR_4)
{
   enum huffman_error VAR_5;

 int VAR_6;
 int VAR_7;
 if (VAR_3->maxbits >= 16)
  VAR_6 = 5;
 else if (VAR_3->maxbits >= 8)
  VAR_6 = 4;
 else
  VAR_6 = 3;


 for (VAR_7 = 0; VAR_7 < VAR_3->numcodes; )
 {

  int VAR_8 = FUNC_1(VAR_4, VAR_6);
  if (VAR_8 != 1)
   VAR_3->huffnode[VAR_7++].numbits = VAR_8;


  else
  {

   VAR_8 = FUNC_1(VAR_4, VAR_6);
   if (VAR_8 == 1)
    VAR_3->huffnode[VAR_7++].numbits = VAR_8;


   else
   {
    int VAR_9 = FUNC_1(VAR_4, VAR_6) + 3;
    while (VAR_9--)
     VAR_3->huffnode[VAR_7++].numbits = VAR_8;
   }
  }
 }


 if (VAR_7 != VAR_3->numcodes)
  return VAR_1;


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_5;


 FUNC_3(VAR_3);


 return FUNC_0(VAR_4) ? VAR_0 : VAR_2;
}
