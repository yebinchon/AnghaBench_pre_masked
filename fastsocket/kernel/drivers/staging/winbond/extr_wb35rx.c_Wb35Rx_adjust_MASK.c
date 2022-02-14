
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int R01_decryption_method; } ;
struct wb35_descriptor {int** buffer_address; int* buffer_size; TYPE_1__ R01; } ;



__attribute__((used)) static void FUNC_0(struct wb35_descriptor *VAR_0)
{
 u32 * VAR_1;
 u32 VAR_2;
 u32 VAR_3;
 u16 VAR_4;

 VAR_2 = VAR_0->R01.R01_decryption_method;
 VAR_1 = VAR_0->buffer_address[0];
 VAR_4 = VAR_0->buffer_size[0];


 VAR_4 -= 4;
 if (VAR_2)
  VAR_4 -= 4;
 if (VAR_2 == 3)
  VAR_4 -= 4;


 if (VAR_2 == 1)
 {
  for( VAR_3=6; VAR_3>0; VAR_3-- )
   VAR_1[VAR_3] = VAR_1[VAR_3-1];
  VAR_0->buffer_address[0] = VAR_1 + 1;
  VAR_4 -= 4;
 }
 else if( VAR_2 )
 {
  for (VAR_3=7; VAR_3>1; VAR_3--)
   VAR_1[VAR_3] = VAR_1[VAR_3-2];
  VAR_0->buffer_address[0] = VAR_1 + 2;
  VAR_4 -= 8;
 }
 VAR_0->buffer_size[0] = VAR_4;
}
