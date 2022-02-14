
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_4__* lucid_context_version_t ;
typedef int gss_qop_t ;
typedef TYPE_5__* gss_ctx_id_t ;
typedef int gss_buffer_t ;
struct TYPE_10__ {int proto; } ;
struct TYPE_11__ {TYPE_2__ key_data; } ;
struct TYPE_9__ {int etype; } ;
struct TYPE_13__ {TYPE_3__ gss_lucid_ctx; TYPE_1__ gss_cryptor; } ;
struct TYPE_12__ {int version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,TYPE_5__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;

uint32_t
FUNC_3(uint32_t *VAR_4,
   gss_ctx_id_t VAR_5,
   gss_qop_t VAR_6,
   gss_buffer_t VAR_7,
   gss_buffer_t VAR_8 )
{
 uint32_t VAR_9 = 0;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_9;
 *VAR_4 = 0;


 if (VAR_5 == ((void*)0) || ((lucid_context_version_t)VAR_5)->version != 1)
  return (VAR_3);

 if (!FUNC_2(VAR_5->gss_lucid_ctx.key_data.proto, VAR_5->gss_cryptor.etype)) {
  *VAR_4 = VAR_0;
  return (VAR_2);
 }

 switch(VAR_5->gss_lucid_ctx.key_data.proto) {
 case 0:

  return (FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 case 1:

  return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 }

 return (VAR_1);
}
