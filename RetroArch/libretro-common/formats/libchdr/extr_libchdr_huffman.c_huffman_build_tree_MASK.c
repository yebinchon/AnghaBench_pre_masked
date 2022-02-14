
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct node_t {scalar_t__ count; int bits; int weight; int m_weight; int m_bits; int numbits; struct node_t* parent; } ;
struct huffman_decoder {int numcodes; scalar_t__* datahisto; struct node_t* huffnode; } ;
typedef int list ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct node_t**) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct node_t**,struct node_t**,int) ;
 int FUNC_5 (struct node_t*,int ,int) ;
 int FUNC_6 (struct node_t**,int,int,int ) ;
 int VAR_1 ;

int FUNC_7(struct huffman_decoder* VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
   int VAR_5;
 int VAR_6 = 0;

 struct node_t** VAR_7 = (struct node_t**)
      FUNC_3(sizeof(struct node_t*) * VAR_2->numcodes * 2);
 int VAR_8, VAR_9 = 0;

 FUNC_5(VAR_2->huffnode, 0,
         VAR_2->numcodes * sizeof(VAR_2->huffnode[0]));

 for (VAR_8 = 0; VAR_8 < VAR_2->numcodes; VAR_8++)
  if (VAR_2->datahisto[VAR_8] != 0)
  {
   VAR_7[VAR_9++] = &VAR_2->huffnode[VAR_8];
   VAR_2->huffnode[VAR_8].count = VAR_2->datahisto[VAR_8];
   VAR_2->huffnode[VAR_8].bits = VAR_8;


   VAR_2->huffnode[VAR_8].weight = ((uint64_t)VAR_2->datahisto[VAR_8]) * ((uint64_t)VAR_4) / ((uint64_t)VAR_3);
   if (VAR_2->huffnode[VAR_8].weight == 0)
    VAR_2->huffnode[VAR_8].weight = 1;
  }
 FUNC_6(&VAR_7[0], VAR_9, sizeof(VAR_7[0]), VAR_0);
 VAR_5 = VAR_2->numcodes;

 while (VAR_9 > 1)
 {
  int VAR_10;

  struct node_t* VAR_11 = &(*VAR_7[--VAR_9]);
  struct node_t* VAR_12 = &(*VAR_7[--VAR_9]);


  struct node_t* VAR_13 = &VAR_2->huffnode[VAR_5++];
  VAR_13->parent = ((void*)0);
  VAR_12->parent =
         VAR_11->parent = VAR_13;
  VAR_13->weight =
         VAR_12->weight + VAR_11->weight;


  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   if (VAR_13->weight > VAR_7[VAR_10]->weight)
   {
    FUNC_4(&VAR_7[VAR_10+1],
                  &VAR_7[VAR_10],
                  (VAR_9 - VAR_10) * sizeof(VAR_7[0]));
    break;
   }
  VAR_7[VAR_10] = VAR_13;
  VAR_9++;
 }



 for (VAR_8 = 0; VAR_8 < VAR_2->numcodes; VAR_8++)
 {
  struct node_t *VAR_14;
  struct node_t* VAR_15 = &VAR_2->huffnode[VAR_8];
  VAR_15->numbits = 0;
  VAR_15->bits = 0;


  if (VAR_15->weight > 0)
  {

   for (VAR_14 = VAR_15;
               VAR_14->parent != ((void*)0); VAR_14 = VAR_14->parent)
    VAR_15->numbits++;
   if (VAR_15->numbits == 0)
    VAR_15->numbits = 1;


   VAR_6 = FUNC_0(VAR_6, ((int)VAR_15->numbits));
  }
 }
   FUNC_2(VAR_7);
 return VAR_6;
}
