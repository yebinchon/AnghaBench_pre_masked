
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct node_t {int numbits; scalar_t__ bits; } ;
struct huffman_decoder {int numcodes; int maxbits; struct node_t* huffnode; } ;
typedef enum huffman_error { ____Placeholder_huffman_error } huffman_error ;


 int VAR_0 ;
 int VAR_1 ;

enum huffman_error FUNC_0(struct huffman_decoder* VAR_2)
{
 uint32_t VAR_3 = 0;

 int VAR_4, VAR_5;
 uint32_t VAR_6[33] = { 0 };
 for (VAR_4 = 0; VAR_4 < VAR_2->numcodes; VAR_4++)
 {
  struct node_t* VAR_7 = &VAR_2->huffnode[VAR_4];
  if (VAR_7->numbits > VAR_2->maxbits)
   return VAR_0;
  if (VAR_7->numbits <= 32)
   VAR_6[VAR_7->numbits]++;
 }


 for (VAR_5 = 32; VAR_5 > 0; VAR_5--)
 {
  uint32_t VAR_8 = (VAR_3 + VAR_6[VAR_5]) >> 1;
  if (VAR_5 != 1 && VAR_8 * 2 != (VAR_3 + VAR_6[VAR_5]))
   return VAR_0;
  VAR_6[VAR_5] = VAR_3;
  VAR_3 = VAR_8;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->numcodes; VAR_4++)
 {
  struct node_t* VAR_9 = &VAR_2->huffnode[VAR_4];
  if (VAR_9->numbits > 0)
   VAR_9->bits = VAR_6[VAR_9->numbits]++;
 }
 return VAR_1;
}
