
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulg ;
typedef int uch ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 unsigned int VAR_3 ;
 int* VAR_4 ;
 size_t VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_0(void)
{
    ulg VAR_7 = VAR_1;
    unsigned VAR_8;
    uch *VAR_9, *VAR_10, VAR_11;

    VAR_9 = VAR_6;
    VAR_10 = &VAR_4[VAR_5];
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
     VAR_11 = *VAR_10++ = *VAR_9++;
     VAR_7 = VAR_2[((int)VAR_7 ^ VAR_11) & 0xff] ^ (VAR_7 >> 8);
    }
    VAR_1 = VAR_7;
    VAR_0 += (ulg)VAR_3;
    VAR_5 += (ulg)VAR_3;
    VAR_3 = 0;
}
