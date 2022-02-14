
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_t {scalar_t__ numbits; int bits; } ;
struct huffman_decoder {int numcodes; int maxbits; int * lookup; struct node_t* huffnode; } ;
typedef int lookup_value ;


 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct huffman_decoder* VAR_0)
{

 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->numcodes; VAR_1++)
 {

  struct node_t* VAR_2 = &VAR_0->huffnode[VAR_1];
  if (VAR_2->numbits > 0)
  {
         int VAR_3;
         lookup_value *VAR_4;
         lookup_value *VAR_5;

   lookup_value VAR_6 = FUNC_0(VAR_1, VAR_2->numbits);


   VAR_3 = VAR_0->maxbits - VAR_2->numbits;
   VAR_4 = &VAR_0->lookup[VAR_2->bits << VAR_3];
   VAR_5 = &VAR_0->lookup[((VAR_2->bits + 1) << VAR_3) - 1];
   while (VAR_4 <= VAR_5)
    *VAR_4++ = VAR_6;
  }
 }
}
