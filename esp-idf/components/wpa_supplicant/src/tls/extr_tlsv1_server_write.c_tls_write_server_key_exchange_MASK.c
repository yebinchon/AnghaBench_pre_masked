
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_4__ {int cipher_suite; } ;
struct tlsv1_server {scalar_t__* dh_secret; size_t dh_secret_len; int verify; TYPE_2__ rl; TYPE_1__* cred; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;
struct TYPE_3__ {scalar_t__* dh_p; scalar_t__* dh_g; size_t dh_p_len; size_t dh_g_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,size_t,scalar_t__*,int,scalar_t__*,size_t,scalar_t__*,size_t*) ;
 int FUNC_3 (scalar_t__*) ;
 void* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (scalar_t__*,size_t) ;
 struct tls_cipher_suite* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,scalar_t__*,int,scalar_t__*,int,size_t*) ;
 int FUNC_13 (struct tlsv1_server*,int ,int ) ;
 int FUNC_14 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_15 (int ,char*,scalar_t__*,int) ;
 int FUNC_16 (int ,char*,...) ;

__attribute__((used)) static int FUNC_17(struct tlsv1_server *VAR_8,
      u8 **VAR_9, u8 *VAR_10)
{
 tls_key_exchange VAR_11;
 const struct tls_cipher_suite *VAR_12;
 u8 *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 size_t VAR_17;
 u8 *VAR_18;
 size_t VAR_19;

 VAR_12 = FUNC_9(VAR_8->rl.cipher_suite);
 if (VAR_12 == ((void*)0))
  VAR_11 = VAR_6;
 else
  VAR_11 = VAR_12->key_exchange;

 if (!FUNC_10(VAR_8->rl.cipher_suite)) {
  FUNC_16(VAR_0, "TLSv1: No ServerKeyExchange needed");
  return 0;
 }

 if (VAR_11 != VAR_5) {

  FUNC_16(VAR_0, "TLSv1: ServerKeyExchange not yet "
      "supported with key exchange type %d", VAR_11);
  return -1;
 }

 if (VAR_8->cred == ((void*)0) || VAR_8->cred->dh_p == ((void*)0) ||
     VAR_8->cred->dh_g == ((void*)0)) {
  FUNC_16(VAR_0, "TLSv1: No DH parameters available for "
      "ServerKeyExhcange");
  return -1;
 }

 FUNC_3(VAR_8->dh_secret);
 VAR_8->dh_secret_len = VAR_8->cred->dh_p_len;
 VAR_8->dh_secret = FUNC_4(VAR_8->dh_secret_len);
 if (VAR_8->dh_secret == ((void*)0)) {
  FUNC_16(VAR_0, "TLSv1: Failed to allocate "
      "memory for secret (Diffie-Hellman)");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  return -1;
 }
 if (FUNC_8(VAR_8->dh_secret, VAR_8->dh_secret_len)) {
  FUNC_16(VAR_0, "TLSv1: Failed to get random "
      "data for Diffie-Hellman");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  FUNC_3(VAR_8->dh_secret);
  VAR_8->dh_secret = ((void*)0);
  return -1;
 }

 if (FUNC_5(VAR_8->dh_secret, VAR_8->cred->dh_p, VAR_8->dh_secret_len) >
     0)
  VAR_8->dh_secret[0] = 0;

 VAR_13 = VAR_8->dh_secret;
 while (VAR_13 + 1 < VAR_8->dh_secret + VAR_8->dh_secret_len && *VAR_13 == 0)
  VAR_13++;
 if (VAR_13 != VAR_8->dh_secret) {
  FUNC_7(VAR_8->dh_secret, VAR_13,
      VAR_8->dh_secret_len - (VAR_13 - VAR_8->dh_secret));
  VAR_8->dh_secret_len -= VAR_13 - VAR_8->dh_secret;
 }
 FUNC_15(VAR_0, "TLSv1: DH server's secret value",
   VAR_8->dh_secret, VAR_8->dh_secret_len);


 VAR_19 = VAR_8->cred->dh_p_len;
 VAR_18 = FUNC_4(VAR_19);
 if (VAR_18 == ((void*)0)) {
  FUNC_16(VAR_0, "TLSv1: Failed to allocate memory for "
      "Diffie-Hellman");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  return -1;
 }
 if (FUNC_2(VAR_8->cred->dh_g, VAR_8->cred->dh_g_len,
             VAR_8->dh_secret, VAR_8->dh_secret_len,
             VAR_8->cred->dh_p, VAR_8->cred->dh_p_len,
             VAR_18, &VAR_19)) {
  FUNC_13(VAR_8, VAR_2,
            VAR_1);
  FUNC_3(VAR_18);
  return -1;
 }


 FUNC_14(VAR_0, "TLSv1: DH Ys (server's public value)",
      VAR_18, VAR_19);
 VAR_13 = *VAR_9;

 FUNC_16(VAR_0, "TLSv1: Send ServerKeyExchange");
 VAR_14 = VAR_13;
 VAR_13 += VAR_7;




 VAR_15 = VAR_13;

 *VAR_13++ = VAR_4;

 VAR_16 = VAR_13;
 VAR_13 += 3;



 if (VAR_13 + 2 + VAR_8->cred->dh_p_len > VAR_10) {
  FUNC_16(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_p");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  FUNC_3(VAR_18);
  return -1;
 }
 FUNC_0(VAR_13, VAR_8->cred->dh_p_len);
 VAR_13 += 2;
 FUNC_6(VAR_13, VAR_8->cred->dh_p, VAR_8->cred->dh_p_len);
 VAR_13 += VAR_8->cred->dh_p_len;


 if (VAR_13 + 2 + VAR_8->cred->dh_g_len > VAR_10) {
  FUNC_16(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_g");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  FUNC_3(VAR_18);
  return -1;
 }
 FUNC_0(VAR_13, VAR_8->cred->dh_g_len);
 VAR_13 += 2;
 FUNC_6(VAR_13, VAR_8->cred->dh_g, VAR_8->cred->dh_g_len);
 VAR_13 += VAR_8->cred->dh_g_len;


 if (VAR_13 + 2 + VAR_19 > VAR_10) {
  FUNC_16(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_Ys");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  FUNC_3(VAR_18);
  return -1;
 }
 FUNC_0(VAR_13, VAR_19);
 VAR_13 += 2;
 FUNC_6(VAR_13, VAR_18, VAR_19);
 VAR_13 += VAR_19;
 FUNC_3(VAR_18);

 FUNC_1(VAR_16, VAR_13 - VAR_16 - 3);

 if (FUNC_12(&VAR_8->rl, VAR_3,
         VAR_14, VAR_10 - VAR_14, VAR_15, VAR_13 - VAR_15,
         &VAR_17) < 0) {
  FUNC_16(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_13(VAR_8, VAR_2,
       VAR_1);
  return -1;
 }
 VAR_13 = VAR_14 + VAR_17;

 FUNC_11(&VAR_8->verify, VAR_15, VAR_13 - VAR_15);

 *VAR_9 = VAR_13;

 return 0;
}
