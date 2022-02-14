
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;
 int* FUNC_0 (int,int ,int ) ;
 int* VAR_1 ;

void FUNC_1 (void)
{
    int VAR_2;

    VAR_1 = FUNC_0 (256*3+255, VAR_0, 0);
    VAR_1 = (byte *)(( (int)VAR_1 + 255 )& ~255);


    for (VAR_2=0 ; VAR_2<256 ; VAR_2++)
    {
 if (VAR_2 >= 0x70 && VAR_2<= 0x7f)
 {

     VAR_1[VAR_2] = 0x60 + (VAR_2&0xf);
     VAR_1 [VAR_2+256] = 0x40 + (VAR_2&0xf);
     VAR_1 [VAR_2+512] = 0x20 + (VAR_2&0xf);
 }
 else
 {

     VAR_1[VAR_2] = VAR_1[VAR_2+256]
  = VAR_1[VAR_2+512] = VAR_2;
 }
    }
}
