
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ks ;
typedef int key ;
typedef int UCHAR ;
typedef int* DES_key_schedule ;
typedef int* DES_cblock ;


 int FUNC_0 (void*,void*,int**,int) ;
 int FUNC_1 (int**,int**) ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int**,int) ;

void FUNC_4(void *VAR_0, void *VAR_1, void *VAR_2)
{
 UCHAR *VAR_3;
 DES_cblock VAR_4;
 DES_key_schedule VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = (UCHAR *)VAR_2;

 FUNC_3(&VAR_4, sizeof(VAR_4));
 FUNC_3(&VAR_5, sizeof(VAR_5));

 VAR_4[0] = VAR_3[0];
 VAR_4[1] = (unsigned char)(((VAR_3[0] << 7) & 0xFF) | (VAR_3[1] >> 1));
 VAR_4[2] = (unsigned char)(((VAR_3[1] << 6) & 0xFF) | (VAR_3[2] >> 2));
 VAR_4[3] = (unsigned char)(((VAR_3[2] << 5) & 0xFF) | (VAR_3[3] >> 3));
 VAR_4[4] = (unsigned char)(((VAR_3[3] << 4) & 0xFF) | (VAR_3[4] >> 4));
 VAR_4[5] = (unsigned char)(((VAR_3[4] << 3) & 0xFF) | (VAR_3[5] >> 5));
 VAR_4[6] = (unsigned char)(((VAR_3[5] << 2) & 0xFF) | (VAR_3[6] >> 6));
 VAR_4[7] = (unsigned char) ((VAR_3[6] << 1) & 0xFF);

 FUNC_2(&VAR_4);
 FUNC_1(&VAR_4, &VAR_5);

 FUNC_0(VAR_1, VAR_0, &VAR_5, 1);
}
