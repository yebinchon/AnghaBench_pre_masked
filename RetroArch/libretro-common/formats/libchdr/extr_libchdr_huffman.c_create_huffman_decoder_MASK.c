
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_t {int dummy; } ;
struct huffman_decoder {int numcodes; int maxbits; scalar_t__ rleremaining; scalar_t__ prevdata; int * datahisto; struct node_t* huffnode; int * lookup; } ;
typedef int lookup_value ;


 scalar_t__ FUNC_0 (int) ;

struct huffman_decoder* FUNC_1(int VAR_0, int VAR_1)
{
   struct huffman_decoder* VAR_2;

 if (VAR_1 > 24)
  return ((void*)0);

 VAR_2 = (struct huffman_decoder*)FUNC_0(sizeof(struct huffman_decoder));
 VAR_2->numcodes = VAR_0;
 VAR_2->maxbits = VAR_1;
 VAR_2->lookup = (lookup_value*)FUNC_0(sizeof(lookup_value) * (1 << VAR_1));
 VAR_2->huffnode = (struct node_t*)FUNC_0(sizeof(struct node_t) * VAR_0);
 VAR_2->datahisto = ((void*)0);
 VAR_2->prevdata = 0;
 VAR_2->rleremaining = 0;
 return VAR_2;
}
