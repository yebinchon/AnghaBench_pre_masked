
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * mbuf_t ;
typedef TYPE_4__* lucid_context_version_t ;
typedef int gss_qop_t ;
typedef TYPE_5__* gss_ctx_id_t ;
struct TYPE_10__ {int proto; } ;
struct TYPE_11__ {TYPE_2__ key_data; } ;
struct TYPE_9__ {int etype; } ;
struct TYPE_13__ {TYPE_3__ gss_lucid_ctx; TYPE_1__ gss_cryptor; } ;
struct TYPE_12__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,TYPE_5__*,int **,size_t,int*,int *) ;
 int FUNC_2 (int *,TYPE_5__*,int **,size_t,int*,int *) ;
 int FUNC_3 (int *,size_t,size_t*,int **,int **,int ) ;
 int FUNC_4 (int,int ) ;

uint32_t
FUNC_5(uint32_t * VAR_4,
       gss_ctx_id_t VAR_5,
       mbuf_t *VAR_6,
       size_t VAR_7,
       size_t VAR_8,
       int *VAR_9,
       gss_qop_t *VAR_10 )
{
 uint32_t VAR_11, VAR_12 = 0;
 gss_qop_t VAR_13 = VAR_1;
 int VAR_14 = 0;
 mbuf_t VAR_15, VAR_16;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_12;
 if (VAR_10 == ((void*)0))
  VAR_10 = &VAR_13;
 if (VAR_9 == ((void*)0))
  VAR_9 = &VAR_14;


 if (VAR_5 == ((void*)0) || ((lucid_context_version_t)VAR_5)->version != 1)
  return (VAR_3);

 if (!FUNC_4(VAR_5->gss_lucid_ctx.key_data.proto, VAR_5->gss_cryptor.etype)) {
  *VAR_4 = VAR_0;
  return (VAR_2);
 }

 FUNC_3(*VAR_6, VAR_7, &VAR_8, &VAR_15, &VAR_16, 0);

 switch(VAR_5->gss_lucid_ctx.key_data.proto) {
 case 0:

  VAR_11 = FUNC_1(VAR_4, VAR_5, &VAR_15, VAR_8, VAR_9, VAR_10);
  break;
 case 1:

  VAR_11 = FUNC_2(VAR_4, VAR_5, &VAR_15, VAR_8, VAR_9, VAR_10);
  break;
 }

 if (VAR_7)
  FUNC_0(*VAR_6, VAR_15, VAR_16);
 else {
  *VAR_6 = VAR_15;
  FUNC_0(VAR_15, VAR_16, ((void*)0));
 }

 return (VAR_11);
}
