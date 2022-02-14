
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int num_cipher_suites; int client_hello_ext_len; int session_id_len; int* cipher_suites; int state; int rl; int verify; int client_hello_ext; int session_id; int client_random; } ;
struct os_time {int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct os_time*) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (struct tlsv1_client*,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_11 (int ,char*,int ,int) ;
 int FUNC_12 (int ,char*) ;

u8 * FUNC_13(struct tlsv1_client *VAR_12, size_t *VAR_13)
{
 u8 *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 struct os_time VAR_20;
 size_t VAR_21, VAR_22;

 FUNC_12(VAR_0, "TLSv1: Send ClientHello");
 *VAR_13 = 0;

 FUNC_4(&VAR_20);
 FUNC_2(VAR_12->client_random, VAR_20.sec);
 if (FUNC_7(VAR_12->client_random + 4, VAR_9 - 4)) {
  FUNC_12(VAR_1, "TLSv1: Could not generate "
      "client_random");
  return ((void*)0);
 }
 FUNC_11(VAR_2, "TLSv1: client_random",
      VAR_12->client_random, VAR_9);

 VAR_21 = 100 + VAR_12->num_cipher_suites * 2 + VAR_12->client_hello_ext_len;
 VAR_14 = FUNC_5(VAR_21);
 if (VAR_14 == ((void*)0))
  return ((void*)0);
 VAR_15 = VAR_14 + VAR_21;

 VAR_19 = VAR_14;
 VAR_16 = VAR_19 + VAR_10;




 VAR_18 = VAR_16;

 *VAR_16++ = VAR_8;

 VAR_17 = VAR_16;
 VAR_16 += 3;


 FUNC_0(VAR_16, VAR_11);
 VAR_16 += 2;

 FUNC_6(VAR_16, VAR_12->client_random, VAR_9);
 VAR_16 += VAR_9;

 *VAR_16++ = VAR_12->session_id_len;
 FUNC_6(VAR_16, VAR_12->session_id, VAR_12->session_id_len);
 VAR_16 += VAR_12->session_id_len;

 FUNC_0(VAR_16, 2 * VAR_12->num_cipher_suites);
 VAR_16 += 2;
 for (VAR_22 = 0; VAR_22 < VAR_12->num_cipher_suites; VAR_22++) {
  FUNC_0(VAR_16, VAR_12->cipher_suites[VAR_22]);
  VAR_16 += 2;
 }

 *VAR_16++ = 1;
 *VAR_16++ = VAR_6;

 if (VAR_12->client_hello_ext) {
  FUNC_6(VAR_16, VAR_12->client_hello_ext,
     VAR_12->client_hello_ext_len);
  VAR_16 += VAR_12->client_hello_ext_len;
 }

 FUNC_1(VAR_17, VAR_16 - VAR_17 - 3);
 FUNC_9(&VAR_12->verify, VAR_18, VAR_16 - VAR_18);

 if (FUNC_10(&VAR_12->rl, VAR_7,
         VAR_19, VAR_15 - VAR_19, VAR_18, VAR_16 - VAR_18,
         VAR_13) < 0) {
  FUNC_12(VAR_0, "TLSv1: Failed to create TLS record");
  FUNC_8(VAR_12, VAR_5,
     VAR_4);
  FUNC_3(VAR_14);
  return ((void*)0);
 }

 VAR_12->state = VAR_3;

 return VAR_14;
}
