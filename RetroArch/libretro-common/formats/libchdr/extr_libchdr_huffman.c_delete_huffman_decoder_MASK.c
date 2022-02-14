
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman_decoder {struct huffman_decoder* huffnode; struct huffman_decoder* lookup; } ;


 int FUNC_0 (struct huffman_decoder*) ;

void FUNC_1(struct huffman_decoder* VAR_0)
{
 if (VAR_0 != ((void*)0))
 {
  if (VAR_0->lookup != ((void*)0))
   FUNC_0(VAR_0->lookup);
  if (VAR_0->huffnode != ((void*)0))
   FUNC_0(VAR_0->huffnode);
  FUNC_0(VAR_0);
 }
}
