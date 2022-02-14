
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int k_opad ;
typedef int k_ipad ;
typedef int MD5_CTX ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int*,int*,size_t) ;
 int FUNC_4 (int*,int) ;

void FUNC_5(u8 *VAR_0, size_t VAR_1, u8 *VAR_2, size_t VAR_3, u8 *VAR_4)
{
 MD5_CTX VAR_5;
    u8 VAR_6[65];
    u8 VAR_7[65];
    u8 VAR_8[16];
 int VAR_9;




 if (VAR_1 > 64) {
  MD5_CTX VAR_10;

  FUNC_1(&VAR_10);
  FUNC_2(&VAR_10, VAR_0, VAR_1);
  FUNC_0(VAR_8, &VAR_10);

  VAR_0 = VAR_8;
  VAR_1 = 16;
 }
 FUNC_4(VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_7, sizeof(VAR_7));

 FUNC_3(VAR_6, VAR_0, VAR_1);
 FUNC_3(VAR_7, VAR_0, VAR_1);


 for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
  VAR_6[VAR_9] ^= 0x36;
  VAR_7[VAR_9] ^= 0x5c;
 }


 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, VAR_6, 64);
 FUNC_2(&VAR_5, VAR_2, VAR_3);
 FUNC_0(VAR_4, &VAR_5);


 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, VAR_7, 64);
 FUNC_2(&VAR_5, VAR_4, 16);
 FUNC_0(VAR_4, &VAR_5);
}
