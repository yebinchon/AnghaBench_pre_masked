
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
typedef int mptcp_key_t ;
typedef int key_opad ;
typedef int key_ipad ;
typedef int data ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(mptcp_key_t VAR_1, mptcp_key_t VAR_2,
 u_int32_t VAR_3, u_int32_t VAR_4, u_char *VAR_5)
{
 SHA1_CTX VAR_6;
 mptcp_key_t VAR_7[8] = {0};
 mptcp_key_t VAR_8[8] = {0};
 u_int32_t VAR_9[2];
 int VAR_10;

 FUNC_3(VAR_5, VAR_0);


 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_2;

 VAR_8[0] = VAR_1;
 VAR_8[1] = VAR_2;


 VAR_9[0] = VAR_3;
 VAR_9[1] = VAR_4;





 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  VAR_7[VAR_10] ^= 0x3636363636363636;
  VAR_8[VAR_10] ^= 0x5c5c5c5c5c5c5c5c;
 }


 FUNC_1(&VAR_6);
 FUNC_2(&VAR_6, (unsigned char *)VAR_7, sizeof (VAR_7));
 FUNC_2(&VAR_6, (unsigned char *)VAR_9, sizeof (VAR_9));
 FUNC_0(VAR_5, &VAR_6);


 FUNC_1(&VAR_6);
 FUNC_2(&VAR_6, (unsigned char *)VAR_8, sizeof (VAR_8));
 FUNC_2(&VAR_6, (unsigned char *)VAR_5, VAR_0);
 FUNC_0(VAR_5, &VAR_6);
}
