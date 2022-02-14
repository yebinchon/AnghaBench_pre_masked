
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntlmssp2_name {int length; int type; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {int len; unsigned char* response; } ;
struct cifs_ses {scalar_t__ domainName; TYPE_1__ auth_key; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__,int *,unsigned int,unsigned int,struct nls_table const*,int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cifs_ses *VAR_4, const struct nls_table *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8 = sizeof(struct ntlmssp2_name);
 unsigned char *VAR_9;
 unsigned char *VAR_10;
 struct ntlmssp2_name *VAR_11;

 if (!VAR_4->auth_key.len || !VAR_4->auth_key.response)
  return 0;

 VAR_9 = VAR_4->auth_key.response;
 VAR_10 = VAR_9 + VAR_4->auth_key.len;

 while (VAR_9 + VAR_8 < VAR_10) {
  VAR_11 = (struct ntlmssp2_name *) VAR_9;
  VAR_7 = FUNC_2(VAR_11->type);
  if (VAR_7 == VAR_2)
   break;
  VAR_9 += 2;
  VAR_6 = FUNC_2(VAR_11->length);
  VAR_9 += 2;
  if (VAR_9 + VAR_6 > VAR_10)
   break;
  if (VAR_7 == VAR_3) {
   if (!VAR_6)
    break;
   if (!VAR_4->domainName) {
    VAR_4->domainName =
     FUNC_1(VAR_6 + 1, VAR_1);
    if (!VAR_4->domainName)
      return -VAR_0;
    FUNC_0(VAR_4->domainName,
     (__le16 *)VAR_9, VAR_6, VAR_6,
     VAR_5, 0);
    break;
   }
  }
  VAR_9 += VAR_6;
 }

 return 0;
}
