
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u16 ;
struct nls_table {int dummy; } ;
struct TYPE_15__ {int response; int len; } ;
struct cifs_ses {TYPE_8__* ntlmssp; int * user_name; int * domainName; TYPE_4__ auth_key; TYPE_1__* server; } ;
typedef int __u32 ;
typedef int __le16 ;
struct TYPE_20__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_19__ {int server_flags; int ciphertext; } ;
struct TYPE_18__ {scalar_t__ MaximumLength; scalar_t__ Length; void* BufferOffset; } ;
struct TYPE_17__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_16__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_14__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_13__ {scalar_t__ MaximumLength; scalar_t__ Length; void* BufferOffset; } ;
struct TYPE_12__ {int sec_mode; int session_estab; } ;
struct TYPE_11__ {unsigned char* Signature; TYPE_9__ SessionKey; TYPE_7__ WorkstationName; TYPE_6__ UserName; TYPE_5__ DomainName; TYPE_3__ NtChallengeResponse; TYPE_2__ LmChallengeResponse; void* NegotiateFlags; int MessageType; } ;
typedef TYPE_10__ AUTHENTICATE_MESSAGE ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct cifs_ses*) ;
 int FUNC_2 (int *,int *,int ,struct nls_table const*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,int,int) ;
 int FUNC_6 (struct cifs_ses*,struct nls_table const*) ;

__attribute__((used)) static int FUNC_7(unsigned char *VAR_16,
     u16 *VAR_17,
       struct cifs_ses *VAR_18,
       const struct nls_table *VAR_19)
{
 int VAR_20;
 AUTHENTICATE_MESSAGE *VAR_21 = (AUTHENTICATE_MESSAGE *)VAR_16;
 __u32 VAR_22;
 unsigned char *VAR_23;

 FUNC_5(VAR_21->Signature, VAR_12, 8);
 VAR_21->MessageType = VAR_13;

 VAR_22 = VAR_4 |
  VAR_11 | VAR_9 |
  VAR_3 | VAR_10 |
  VAR_7 | VAR_5;
 if (VAR_18->server->sec_mode &
     (VAR_15 | VAR_14)) {
  VAR_22 |= VAR_8;
  if (!VAR_18->server->session_estab)
   VAR_22 |= VAR_6;
 }

 VAR_23 = VAR_16 + sizeof(AUTHENTICATE_MESSAGE);
 VAR_21->NegotiateFlags = FUNC_4(VAR_22);

 VAR_21->LmChallengeResponse.BufferOffset =
    FUNC_4(sizeof(AUTHENTICATE_MESSAGE));
 VAR_21->LmChallengeResponse.Length = 0;
 VAR_21->LmChallengeResponse.MaximumLength = 0;

 VAR_21->NtChallengeResponse.BufferOffset = FUNC_4(VAR_23 - VAR_16);
 VAR_20 = FUNC_6(VAR_18, VAR_19);
 if (VAR_20) {
  FUNC_0(1, "Error %d during NTLMSSP authentication", VAR_20);
  goto setup_ntlmv2_ret;
 }
 FUNC_5(VAR_23, VAR_18->auth_key.response + VAR_1,
   VAR_18->auth_key.len - VAR_1);
 VAR_23 += VAR_18->auth_key.len - VAR_1;

 VAR_21->NtChallengeResponse.Length =
   FUNC_3(VAR_18->auth_key.len - VAR_1);
 VAR_21->NtChallengeResponse.MaximumLength =
   FUNC_3(VAR_18->auth_key.len - VAR_1);

 if (VAR_18->domainName == ((void*)0)) {
  VAR_21->DomainName.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->DomainName.Length = 0;
  VAR_21->DomainName.MaximumLength = 0;
  VAR_23 += 2;
 } else {
  int VAR_24;
  VAR_24 = FUNC_2((__le16 *)VAR_23, VAR_18->domainName,
        VAR_2, VAR_19);
  VAR_24 *= 2;
  VAR_21->DomainName.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->DomainName.Length = FUNC_3(VAR_24);
  VAR_21->DomainName.MaximumLength = FUNC_3(VAR_24);
  VAR_23 += VAR_24;
 }

 if (VAR_18->user_name == ((void*)0)) {
  VAR_21->UserName.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->UserName.Length = 0;
  VAR_21->UserName.MaximumLength = 0;
  VAR_23 += 2;
 } else {
  int VAR_25;
  VAR_25 = FUNC_2((__le16 *)VAR_23, VAR_18->user_name,
        VAR_2, VAR_19);
  VAR_25 *= 2;
  VAR_21->UserName.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->UserName.Length = FUNC_3(VAR_25);
  VAR_21->UserName.MaximumLength = FUNC_3(VAR_25);
  VAR_23 += VAR_25;
 }

 VAR_21->WorkstationName.BufferOffset = FUNC_4(VAR_23 - VAR_16);
 VAR_21->WorkstationName.Length = 0;
 VAR_21->WorkstationName.MaximumLength = 0;
 VAR_23 += 2;

 if (((VAR_18->ntlmssp->server_flags & VAR_6) ||
  (VAR_18->ntlmssp->server_flags & VAR_5))
   && !FUNC_1(VAR_18)) {
  FUNC_5(VAR_23, VAR_18->ntlmssp->ciphertext, VAR_0);
  VAR_21->SessionKey.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->SessionKey.Length = FUNC_3(VAR_0);
  VAR_21->SessionKey.MaximumLength =
    FUNC_3(VAR_0);
  VAR_23 += VAR_0;
 } else {
  VAR_21->SessionKey.BufferOffset = FUNC_4(VAR_23 - VAR_16);
  VAR_21->SessionKey.Length = 0;
  VAR_21->SessionKey.MaximumLength = 0;
 }

setup_ntlmv2_ret:
 *VAR_17 = VAR_23 - VAR_16;
 return VAR_20;
}
