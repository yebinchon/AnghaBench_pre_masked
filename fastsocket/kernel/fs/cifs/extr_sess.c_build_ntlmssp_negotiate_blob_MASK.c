
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cifs_ses {TYPE_1__* server; } ;
typedef int __u32 ;
struct TYPE_7__ {scalar_t__ MaximumLength; scalar_t__ Length; scalar_t__ BufferOffset; } ;
struct TYPE_6__ {scalar_t__ MaximumLength; scalar_t__ Length; scalar_t__ BufferOffset; } ;
struct TYPE_8__ {TYPE_3__ DomainName; TYPE_2__ WorkstationName; int NegotiateFlags; int MessageType; int Signature; } ;
struct TYPE_5__ {int sec_mode; int session_estab; } ;
typedef TYPE_4__ NEGOTIATE_MESSAGE ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_12,
      struct cifs_ses *VAR_13)
{
 NEGOTIATE_MESSAGE *VAR_14 = (NEGOTIATE_MESSAGE *)VAR_12;
 __u32 VAR_15;

 FUNC_2(VAR_12, 0, sizeof(NEGOTIATE_MESSAGE));
 FUNC_1(VAR_14->Signature, VAR_8, 8);
 VAR_14->MessageType = VAR_9;


 VAR_15 = VAR_1 | VAR_7 |
  VAR_0 | VAR_6 |
  VAR_4 | VAR_2;
 if (VAR_13->server->sec_mode &
   (VAR_11 | VAR_10)) {
  VAR_15 |= VAR_5;
  if (!VAR_13->server->session_estab)
   VAR_15 |= VAR_3;
 }

 VAR_14->NegotiateFlags = FUNC_0(VAR_15);

 VAR_14->WorkstationName.BufferOffset = 0;
 VAR_14->WorkstationName.Length = 0;
 VAR_14->WorkstationName.MaximumLength = 0;


 VAR_14->DomainName.BufferOffset = 0;
 VAR_14->DomainName.Length = 0;
 VAR_14->DomainName.MaximumLength = 0;
}
