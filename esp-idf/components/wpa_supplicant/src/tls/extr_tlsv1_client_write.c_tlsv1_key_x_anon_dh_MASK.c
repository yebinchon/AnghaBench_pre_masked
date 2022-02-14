
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {size_t dh_p_len; int dh_p; int dh_ys_len; int dh_ys; int dh_g_len; int dh_g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,size_t,int ,size_t,scalar_t__*,size_t*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,size_t) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_6 (scalar_t__*,int ,size_t) ;
 scalar_t__ FUNC_7 (scalar_t__*,size_t) ;
 int FUNC_8 (struct tlsv1_client*,int ,int ) ;
 scalar_t__ FUNC_9 (struct tlsv1_client*,scalar_t__*,size_t) ;
 int FUNC_10 (struct tlsv1_client*) ;
 int FUNC_11 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_12 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct tlsv1_client *VAR_3, u8 **VAR_4, u8 *VAR_5)
{

 u8 *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_3->dh_p_len;
 VAR_6 = FUNC_3(VAR_10);
 if (VAR_6 == ((void*)0)) {
  FUNC_13(VAR_0, "TLSv1: Failed to allocate "
      "memory for Yc (Diffie-Hellman)");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  return -1;
 }
 if (FUNC_7(VAR_6, VAR_10)) {
  FUNC_13(VAR_0, "TLSv1: Failed to get random "
      "data for Diffie-Hellman");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  FUNC_2(VAR_6);
  return -1;
 }

 if (FUNC_4(VAR_6, VAR_3->dh_p, VAR_10) > 0)
  VAR_6[0] = 0;

 VAR_7 = VAR_6;
 while (VAR_10 > 1 && *VAR_7 == 0) {
  VAR_7++;
  VAR_10--;
 }
 FUNC_12(VAR_0, "TLSv1: DH client's secret value",
   VAR_7, VAR_10);


 VAR_11 = VAR_3->dh_p_len;
 VAR_8 = FUNC_3(VAR_11);
 if (VAR_8 == ((void*)0)) {
  FUNC_13(VAR_0, "TLSv1: Failed to allocate "
      "memory for Diffie-Hellman");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  FUNC_2(VAR_6);
  return -1;
 }
 if(FUNC_1(VAR_3->dh_g, VAR_3->dh_g_len,
                        VAR_7, VAR_10,
                        VAR_3->dh_p, VAR_3->dh_p_len,
                        VAR_8, &VAR_11)) {
        FUNC_8(VAR_3, VAR_2,
   VAR_1);
  FUNC_2(VAR_6);
  FUNC_2(VAR_8);
  return -1;
 }

 FUNC_11(VAR_0, "TLSv1: DH Yc (client's public value)",
      VAR_8, VAR_11);

 FUNC_0(*VAR_4, VAR_11);
 *VAR_4 += 2;
 if (*VAR_4 + VAR_11 > VAR_5) {
  FUNC_13(VAR_0, "TLSv1: Not enough room in the "
      "message buffer for Yc");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  FUNC_2(VAR_6);
  FUNC_2(VAR_8);
  return -1;
 }
 FUNC_5(*VAR_4, VAR_8, VAR_11);
 *VAR_4 += VAR_11;
 FUNC_2(VAR_8);

 VAR_12 = VAR_3->dh_p_len;
 VAR_9 = FUNC_3(VAR_12);
 if (VAR_9 == ((void*)0)) {
  FUNC_13(VAR_0, "TLSv1: Could not allocate memory for "
      "DH");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  FUNC_2(VAR_6);
  return -1;
 }


 if(FUNC_1(VAR_3->dh_ys, VAR_3->dh_ys_len,
                        VAR_7, VAR_10,
                        VAR_3->dh_p, VAR_3->dh_p_len,
                        VAR_9, &VAR_12)) {
     FUNC_8(VAR_3, VAR_2,
        VAR_1);
  FUNC_2(VAR_6);
  FUNC_2(VAR_9);
  return -1;
 }
 FUNC_12(VAR_0, "TLSv1: Shared secret from DH key exchange",
   VAR_9, VAR_12);

 FUNC_6(VAR_7, 0, VAR_10);
 FUNC_2(VAR_6);
 if (FUNC_9(VAR_3, VAR_9, VAR_12)) {
  FUNC_13(VAR_0, "TLSv1: Failed to derive keys");
  FUNC_8(VAR_3, VAR_2,
     VAR_1);
  FUNC_2(VAR_9);
  return -1;
 }
 FUNC_6(VAR_9, 0, VAR_12);
 FUNC_2(VAR_9);
 FUNC_10(VAR_3);
 return 0;
}
