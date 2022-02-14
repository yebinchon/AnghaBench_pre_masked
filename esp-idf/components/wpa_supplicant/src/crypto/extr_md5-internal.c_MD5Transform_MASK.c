
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__ const,int) ;

__attribute__((used)) static void
FUNC_1(u32 VAR_4[4], u32 const VAR_5[16])
{
    register u32 VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_6 = VAR_4[0];
    VAR_7 = VAR_4[1];
    VAR_8 = VAR_4[2];
    VAR_9 = VAR_4[3];

    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[0] + 0xd76aa478, 7);
    FUNC_0(VAR_0, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[1] + 0xe8c7b756, 12);
    FUNC_0(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[2] + 0x242070db, 17);
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[3] + 0xc1bdceee, 22);
    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[4] + 0xf57c0faf, 7);
    FUNC_0(VAR_0, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[5] + 0x4787c62a, 12);
    FUNC_0(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[6] + 0xa8304613, 17);
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[7] + 0xfd469501, 22);
    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[8] + 0x698098d8, 7);
    FUNC_0(VAR_0, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[9] + 0x8b44f7af, 12);
    FUNC_0(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[10] + 0xffff5bb1, 17);
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[11] + 0x895cd7be, 22);
    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[12] + 0x6b901122, 7);
    FUNC_0(VAR_0, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[13] + 0xfd987193, 12);
    FUNC_0(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[14] + 0xa679438e, 17);
    FUNC_0(VAR_0, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[15] + 0x49b40821, 22);

    FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[1] + 0xf61e2562, 5);
    FUNC_0(VAR_1, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[6] + 0xc040b340, 9);
    FUNC_0(VAR_1, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[11] + 0x265e5a51, 14);
    FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[0] + 0xe9b6c7aa, 20);
    FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[5] + 0xd62f105d, 5);
    FUNC_0(VAR_1, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[10] + 0x02441453, 9);
    FUNC_0(VAR_1, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[15] + 0xd8a1e681, 14);
    FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[4] + 0xe7d3fbc8, 20);
    FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[9] + 0x21e1cde6, 5);
    FUNC_0(VAR_1, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[14] + 0xc33707d6, 9);
    FUNC_0(VAR_1, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[3] + 0xf4d50d87, 14);
    FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[8] + 0x455a14ed, 20);
    FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[13] + 0xa9e3e905, 5);
    FUNC_0(VAR_1, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[2] + 0xfcefa3f8, 9);
    FUNC_0(VAR_1, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[7] + 0x676f02d9, 14);
    FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[12] + 0x8d2a4c8a, 20);

    FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[5] + 0xfffa3942, 4);
    FUNC_0(VAR_2, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[8] + 0x8771f681, 11);
    FUNC_0(VAR_2, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[11] + 0x6d9d6122, 16);
    FUNC_0(VAR_2, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[14] + 0xfde5380c, 23);
    FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[1] + 0xa4beea44, 4);
    FUNC_0(VAR_2, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[4] + 0x4bdecfa9, 11);
    FUNC_0(VAR_2, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[7] + 0xf6bb4b60, 16);
    FUNC_0(VAR_2, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[10] + 0xbebfbc70, 23);
    FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[13] + 0x289b7ec6, 4);
    FUNC_0(VAR_2, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[0] + 0xeaa127fa, 11);
    FUNC_0(VAR_2, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[3] + 0xd4ef3085, 16);
    FUNC_0(VAR_2, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[6] + 0x04881d05, 23);
    FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[9] + 0xd9d4d039, 4);
    FUNC_0(VAR_2, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[12] + 0xe6db99e5, 11);
    FUNC_0(VAR_2, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[15] + 0x1fa27cf8, 16);
    FUNC_0(VAR_2, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[2] + 0xc4ac5665, 23);

    FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[0] + 0xf4292244, 6);
    FUNC_0(VAR_3, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[7] + 0x432aff97, 10);
    FUNC_0(VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[14] + 0xab9423a7, 15);
    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[5] + 0xfc93a039, 21);
    FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[12] + 0x655b59c3, 6);
    FUNC_0(VAR_3, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[3] + 0x8f0ccc92, 10);
    FUNC_0(VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[10] + 0xffeff47d, 15);
    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[1] + 0x85845dd1, 21);
    FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[8] + 0x6fa87e4f, 6);
    FUNC_0(VAR_3, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[15] + 0xfe2ce6e0, 10);
    FUNC_0(VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[6] + 0xa3014314, 15);
    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[13] + 0x4e0811a1, 21);
    FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, VAR_5[4] + 0xf7537e82, 6);
    FUNC_0(VAR_3, VAR_9, VAR_6, VAR_7, VAR_8, VAR_5[11] + 0xbd3af235, 10);
    FUNC_0(VAR_3, VAR_8, VAR_9, VAR_6, VAR_7, VAR_5[2] + 0x2ad7d2bb, 15);
    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_5[9] + 0xeb86d391, 21);

    VAR_4[0] += VAR_6;
    VAR_4[1] += VAR_7;
    VAR_4[2] += VAR_8;
    VAR_4[3] += VAR_9;
}
