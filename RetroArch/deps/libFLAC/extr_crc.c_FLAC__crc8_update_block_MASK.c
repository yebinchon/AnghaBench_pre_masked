
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t FLAC__uint8 ;
typedef int FLAC__byte ;


 size_t* VAR_0 ;

void FUNC_0(const FLAC__byte *VAR_1, unsigned VAR_2, FLAC__uint8 *VAR_3)
{
 while(VAR_2--)
  *VAR_3 = VAR_0[*VAR_3 ^ *VAR_1++];
}
