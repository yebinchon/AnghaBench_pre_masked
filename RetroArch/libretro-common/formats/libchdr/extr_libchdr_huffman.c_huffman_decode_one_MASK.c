
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct huffman_decoder {int* lookup; int maxbits; } ;
struct bitstream {int dummy; } ;
typedef int lookup_value ;


 size_t FUNC_0 (struct bitstream*,int ) ;
 int FUNC_1 (struct bitstream*,int) ;

uint32_t FUNC_2(struct huffman_decoder* VAR_0, struct bitstream* VAR_1)
{

 uint32_t VAR_2 = FUNC_0(VAR_1, VAR_0->maxbits);


 lookup_value VAR_3 = VAR_0->lookup[VAR_2];
 FUNC_1(VAR_1, VAR_3 & 0x1f);


 return VAR_3 >> 5;
}
