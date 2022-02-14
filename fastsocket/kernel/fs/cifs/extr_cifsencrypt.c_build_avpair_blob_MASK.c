
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntlmssp2_name {void* length; void* type; } ;
struct nls_table {int dummy; } ;
struct TYPE_3__ {unsigned int len; unsigned char* response; } ;
struct cifs_ses {TYPE_2__* server; int domainName; TYPE_1__ auth_key; } ;
typedef int __le64 ;
typedef int __le16 ;
struct TYPE_4__ {int hostname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,unsigned int,struct nls_table const*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 unsigned char* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned char*,int *,int) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct cifs_ses *VAR_8, const struct nls_table *VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 6 * sizeof(struct ntlmssp2_name);
 __le64 VAR_13;
 char *VAR_14 = "WORKGROUP";
 unsigned char *VAR_15;
 struct ntlmssp2_name *VAR_16;

 if (!VAR_8->domainName) {
  VAR_8->domainName = FUNC_5(VAR_14, VAR_2);
  if (!VAR_8->domainName)
   return -VAR_1;
 }

 VAR_10 = FUNC_8(VAR_8->domainName);
 VAR_11 = FUNC_8(VAR_8->server->hostname);







 VAR_8->auth_key.len = VAR_12 + 2 * (2 * VAR_10) + 2 * (2 * VAR_11) + 8;
 VAR_8->auth_key.response = FUNC_6(VAR_8->auth_key.len, VAR_2);
 if (!VAR_8->auth_key.response) {
  VAR_8->auth_key.len = 0;
  FUNC_0(1, "Challenge target info allocation failure");
  return -VAR_1;
 }

 VAR_15 = VAR_8->auth_key.response;
 VAR_16 = (struct ntlmssp2_name *) VAR_15;

 VAR_16->type = FUNC_3(VAR_6);
 VAR_16->length = FUNC_3(2 * VAR_10);
 VAR_15 = (unsigned char *)VAR_16 + sizeof(struct ntlmssp2_name);
 FUNC_2((__le16 *)VAR_15, VAR_8->domainName, VAR_10, VAR_9);

 VAR_15 += 2 * VAR_10;
 VAR_16 = (struct ntlmssp2_name *) VAR_15;

 VAR_16->type = FUNC_3(VAR_5);
 VAR_16->length = FUNC_3(2 * VAR_11);
 VAR_15 = (unsigned char *)VAR_16 + sizeof(struct ntlmssp2_name);
 FUNC_2((__le16 *)VAR_15, VAR_8->server->hostname, VAR_11, VAR_9);

 VAR_15 += 2 * VAR_11;
 VAR_16 = (struct ntlmssp2_name *) VAR_15;

 VAR_16->type = FUNC_3(VAR_4);
 VAR_16->length = FUNC_3(2 * VAR_10);
 VAR_15 = (unsigned char *)VAR_16 + sizeof(struct ntlmssp2_name);
 FUNC_2((__le16 *)VAR_15, VAR_8->domainName, VAR_10, VAR_9);

 VAR_15 += 2 * VAR_10;
 VAR_16 = (struct ntlmssp2_name *) VAR_15;

 VAR_16->type = FUNC_3(VAR_3);
 VAR_16->length = FUNC_3(2 * VAR_11);
 VAR_15 = (unsigned char *)VAR_16 + sizeof(struct ntlmssp2_name);
 FUNC_2((__le16 *)VAR_15, VAR_8->server->hostname, VAR_11, VAR_9);

 VAR_15 += 2 * VAR_11;
 VAR_16 = (struct ntlmssp2_name *) VAR_15;

 VAR_16->type = FUNC_3(VAR_7);
 VAR_16->length = FUNC_3(sizeof(__le64));
 VAR_15 = (unsigned char *)VAR_16 + sizeof(struct ntlmssp2_name);
 VAR_13 = FUNC_4(FUNC_1(VAR_0));
 FUNC_7(VAR_15, &VAR_13, sizeof(__le64));

 return 0;
}
