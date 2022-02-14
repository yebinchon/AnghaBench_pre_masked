
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef int u16 ;
struct tlsv1_server {scalar_t__ client_version; TYPE_1__* cred; } ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int,int const*,size_t*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,size_t) ;
 int const* FUNC_4 (size_t) ;
 int FUNC_5 (int const*,int ,size_t) ;
 int FUNC_6 (struct tlsv1_server*,int ,int ) ;
 int FUNC_7 (struct tlsv1_server*,int const*,size_t) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(
 struct tlsv1_server *VAR_5, const u8 *VAR_6, const u8 *VAR_7)
{
 u8 *VAR_8;
 size_t VAR_9, VAR_10;
 u16 VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if (VAR_7 - VAR_6 < 2) {
  FUNC_6(VAR_5, VAR_3,
       VAR_1);
  return -1;
 }

 VAR_11 = FUNC_0(VAR_6);
 VAR_6 += 2;
 if (VAR_6 + VAR_11 > VAR_7) {
  FUNC_8(VAR_0, "TLSv1: Invalid ClientKeyExchange "
      "format: encr_len=%u left=%u",
      VAR_11, (unsigned int) (VAR_7 - VAR_6));
  FUNC_6(VAR_5, VAR_3,
       VAR_1);
  return -1;
 }

 VAR_10 = VAR_9 = VAR_7 - VAR_6;
 VAR_8 = FUNC_4(VAR_9 >= VAR_4 ?
   VAR_9 : VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_5, VAR_3,
       VAR_2);
  return -1;
 }
 if (FUNC_1(VAR_5->cred->key,
       VAR_6, VAR_11,
       VAR_8, &VAR_9) < 0) {
  FUNC_8(VAR_0, "TLSv1: Failed to decrypt "
      "PreMasterSecret (encr_len=%u outlen=%lu)",
      VAR_11, (unsigned long) VAR_9);
  VAR_13 = 1;
 }

 if (!VAR_13 && VAR_9 != VAR_4) {
  FUNC_8(VAR_0, "TLSv1: Unexpected PreMasterSecret "
      "length %lu", (unsigned long) VAR_9);
  VAR_13 = 1;
 }

 if (!VAR_13 && FUNC_0(VAR_8) != VAR_5->client_version) {
  FUNC_8(VAR_0, "TLSv1: Client version in "
      "ClientKeyExchange does not match with version in "
      "ClientHello");
  VAR_13 = 1;
 }

 if (VAR_13) {
  FUNC_8(VAR_0, "TLSv1: Using random premaster secret "
      "to avoid revealing information about private key");
  VAR_9 = VAR_4;
  if (FUNC_3(VAR_8, VAR_9)) {
   FUNC_8(VAR_0, "TLSv1: Failed to get random "
       "data");
   FUNC_6(VAR_5, VAR_3,
        VAR_2);
   FUNC_2(VAR_8);
   return -1;
  }
 }

 VAR_12 = FUNC_7(VAR_5, VAR_8, VAR_9);


 FUNC_5(VAR_8, 0, VAR_10);
 FUNC_2(VAR_8);

 if (VAR_12) {
  FUNC_8(VAR_0, "TLSv1: Failed to derive keys");
  FUNC_6(VAR_5, VAR_3,
       VAR_2);
  return -1;
 }

 return 0;
}
