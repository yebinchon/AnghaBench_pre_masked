
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT32 ;
typedef int UCHAR ;


 int FUNC_0 (int ,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

VOID FUNC_1(UINT32 VAR_4[4], UINT32 VAR_5[16])
{
    UINT32 VAR_6[4], VAR_7;
 unsigned int VAR_8;

    static UCHAR VAR_9[16] =
    {
        7, 12, 17, 22,
  5, 9 , 14, 20,
  4, 11, 16, 23,
   6, 10, 15, 21,
  };



    static UINT32 VAR_10[64] =
 {
  0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
  0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
  0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
     0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,

     0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
     0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
     0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
     0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,

     0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
     0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
     0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
     0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,

     0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
     0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
     0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
     0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
 };


    for (VAR_8=0; VAR_8<4; VAR_8++)
        VAR_6[VAR_8]=VAR_4[VAR_8];



    for (VAR_8=0; VAR_8<16; VAR_8++)
    {
        FUNC_0(VAR_0, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_5[VAR_8],
                VAR_10[VAR_8], VAR_9[VAR_8 & 0x3]);


        VAR_7 = VAR_6[3];
        VAR_6[3] = VAR_6[2];
        VAR_6[2] = VAR_6[1];
        VAR_6[1] = VAR_6[0];
        VAR_6[0] = VAR_7;
    }
    for (VAR_8=16; VAR_8<32; VAR_8++)
    {
        FUNC_0(VAR_1, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_5[(5*(VAR_8 & 0xf)+1) & 0xf],
                VAR_10[VAR_8], VAR_9[(0x1 << 2)+(VAR_8 & 0x3)]);


        VAR_7 = VAR_6[3];
        VAR_6[3] = VAR_6[2];
        VAR_6[2] = VAR_6[1];
        VAR_6[1] = VAR_6[0];
        VAR_6[0] = VAR_7;
    }
    for (VAR_8=32; VAR_8<48; VAR_8++)
    {
        FUNC_0(VAR_2, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_5[(3*(VAR_8 & 0xf)+5) & 0xf],
                VAR_10[VAR_8], VAR_9[(0x1 << 3)+(VAR_8 & 0x3)]);


        VAR_7 = VAR_6[3];
        VAR_6[3] = VAR_6[2];
        VAR_6[2] = VAR_6[1];
        VAR_6[1] = VAR_6[0];
        VAR_6[0] = VAR_7;
    }
    for (VAR_8=48; VAR_8<64; VAR_8++)
    {
        FUNC_0(VAR_3, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_5[(7*(VAR_8 & 0xf)) & 0xf],
                VAR_10[VAR_8], VAR_9[(0x3 << 2)+(VAR_8 & 0x3)]);


        VAR_7 = VAR_6[3];
        VAR_6[3] = VAR_6[2];
        VAR_6[2] = VAR_6[1];
        VAR_6[1] = VAR_6[0];
        VAR_6[0] = VAR_7;
    }



    for (VAR_8=0; VAR_8<4; VAR_8++)
        VAR_4[VAR_8] += VAR_6[VAR_8];

}
