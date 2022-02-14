
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HuffmanTree ;


 unsigned int FUNC_0 (int *,unsigned int*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned FUNC_3(HuffmanTree* VAR_1)
{
  unsigned VAR_2, VAR_3 = 0;
  unsigned* VAR_4 = (unsigned*)FUNC_2(VAR_0 * sizeof(unsigned));
  if(!VAR_4) return 83;


  for(VAR_2 = 0; VAR_2 <= 143; VAR_2++) VAR_4[VAR_2] = 8;
  for(VAR_2 = 144; VAR_2 <= 255; VAR_2++) VAR_4[VAR_2] = 9;
  for(VAR_2 = 256; VAR_2 <= 279; VAR_2++) VAR_4[VAR_2] = 7;
  for(VAR_2 = 280; VAR_2 <= 287; VAR_2++) VAR_4[VAR_2] = 8;

  VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_0, 15);

  FUNC_1(VAR_4);
  return VAR_3;
}
