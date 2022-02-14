
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_4__* lucid_context_t ;
typedef TYPE_5__* gss_ctx_id_t ;
typedef TYPE_6__* gss_cfx_mic_token ;
struct TYPE_16__ {scalar_t__* TOK_ID; scalar_t__* Filler; } ;
struct TYPE_15__ {scalar_t__* TOK_ID; int Flags; scalar_t__* Filler; } ;
struct TYPE_10__ {scalar_t__ acceptor_subkey; } ;
struct TYPE_11__ {TYPE_1__ data_4121; } ;
struct TYPE_12__ {TYPE_2__ lucid_protocol_u; } ;
struct TYPE_13__ {TYPE_3__ key_data; scalar_t__ initiate; } ;
struct TYPE_14__ {TYPE_4__ gss_lucid_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(gss_ctx_id_t VAR_4, gss_cfx_mic_token VAR_5)
{
 int VAR_6;
 lucid_context_t VAR_7 = &VAR_4->gss_lucid_ctx;
 uint8_t VAR_8 = 0;

 if (VAR_5->TOK_ID[0] != VAR_3.TOK_ID[0] || VAR_5->TOK_ID[1] != VAR_3.TOK_ID[1]) {
  FUNC_0("Bad mic TOK_ID %x %x\n", VAR_5->TOK_ID[0], VAR_5->TOK_ID[1]);
  return (VAR_2);
 }
 if (VAR_7->initiate)
  VAR_8 |= VAR_1;
 if (VAR_7->key_data.lucid_protocol_u.data_4121.acceptor_subkey)
  VAR_8 |= VAR_0;
 if (VAR_5->Flags != VAR_8) {
  FUNC_0("Bad flags received %x exptect %x\n", VAR_5->Flags, VAR_8);
  return (VAR_2);
 }
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  if (VAR_5->Filler[VAR_6] != VAR_3.Filler[VAR_6])
   break;
 }

 if (VAR_6 != 5) {
  FUNC_0("Bad mic filler %x @ %d\n", VAR_5->Filler[VAR_6], VAR_6);
  return (VAR_2);
 }

 return (0);
}
