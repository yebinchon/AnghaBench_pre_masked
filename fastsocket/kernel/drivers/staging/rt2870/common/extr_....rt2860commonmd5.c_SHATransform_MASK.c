
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

VOID FUNC_2(UINT32 VAR_3[5], UINT32 VAR_4[20])
{
    UINT32 VAR_5[5],VAR_6;
 unsigned int VAR_7;
    UINT32 VAR_8[80];

    static UINT32 VAR_9[4] = { 0x5a827999, 0x6ed9eba1,
                                  0x8f1bbcdc, 0xca62c1d6 };

    VAR_5[0]=VAR_3[0];
 VAR_5[1]=VAR_3[1];
 VAR_5[2]=VAR_3[2];
 VAR_5[3]=VAR_3[3];
 VAR_5[4]=VAR_3[4];


 for(VAR_7 = 0; VAR_7 < 16; VAR_7++)
    {
     VAR_8[VAR_7] = (VAR_4[VAR_7] >> 24) & 0xff;
        VAR_8[VAR_7] |= (VAR_4[VAR_7] >> 8 ) & 0xff00;
        VAR_8[VAR_7] |= (VAR_4[VAR_7] << 8 ) & 0xff0000;
        VAR_8[VAR_7] |= (VAR_4[VAR_7] << 24) & 0xff000000;
    }


    for (VAR_7 = 0; VAR_7 < 64; VAR_7++)
     VAR_8[16+VAR_7] = FUNC_0(VAR_8[VAR_7] ^ VAR_8[2+VAR_7] ^ VAR_8[8+VAR_7] ^ VAR_8[13+VAR_7], 1);



    for (VAR_7=0; VAR_7<80; VAR_7++)
    {
        if (VAR_7<20)
            FUNC_1(VAR_0, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4],
                     VAR_8[VAR_7], VAR_9[0]);

        else if (VAR_7>=20 && VAR_7<40)
            FUNC_1(VAR_1, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4],
                     VAR_8[VAR_7], VAR_9[1]);

  else if (VAR_7>=40 && VAR_7<60)
            FUNC_1(VAR_2, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4],
                      VAR_8[VAR_7], VAR_9[2]);

        else
            FUNC_1(VAR_1, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4],
                     VAR_8[VAR_7], VAR_9[3]);



  VAR_6 = VAR_5[4];
        VAR_5[4] = VAR_5[3];
        VAR_5[3] = VAR_5[2];
        VAR_5[2] = VAR_5[1];
        VAR_5[1] = VAR_5[0];
        VAR_5[0] = VAR_6;

    }



    for (VAR_7=0; VAR_7<5; VAR_7++)
        VAR_3[VAR_7] += VAR_5[VAR_7];

}
