
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
typedef int * mbuf_t ;
typedef TYPE_4__* lucid_context_version_t ;
typedef int gss_qop_t ;
typedef TYPE_5__* gss_ctx_id_t ;
struct TYPE_10__ {int proto; } ;
struct TYPE_11__ {TYPE_2__ key_data; } ;
struct TYPE_9__ {int etype; } ;
struct TYPE_13__ {TYPE_3__ gss_lucid_ctx; TYPE_1__ gss_cryptor; } ;
struct TYPE_12__ {int version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_5__*,int,int ,int **,size_t,int*) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_5__*,int,int ,int **,size_t,int*) ;
 int FUNC_3 (int *,size_t,size_t*,int **,int **,int ) ;
 int FUNC_4 (int,int ) ;

uint32_t
FUNC_5(uint32_t *VAR_3,
     gss_ctx_id_t VAR_4,
     int VAR_5,
     gss_qop_t VAR_6,
     mbuf_t *VAR_7,
     size_t VAR_8,
     size_t VAR_9,
     int *VAR_10 )
{
 uint32_t VAR_11, VAR_12 = 0;
 mbuf_t VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_12;
 if (VAR_10 == ((void*)0))
  VAR_10 = &VAR_15;

 *VAR_3 = 0;


 if (VAR_4 == ((void*)0) || ((lucid_context_version_t)VAR_4)->version != 1)
  return (VAR_2);

 if (!FUNC_4(VAR_4->gss_lucid_ctx.key_data.proto, VAR_4->gss_cryptor.etype)) {
  *VAR_3 = VAR_0;
  return (VAR_1);
 }

 FUNC_3(*VAR_7, VAR_8, &VAR_9, &VAR_13, &VAR_14, 0);

 switch(VAR_4->gss_lucid_ctx.key_data.proto) {
 case 0:

  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_13, VAR_9, VAR_10);
  break;
 case 1:

  VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_13, VAR_9, VAR_10);
  break;
 }

 if (VAR_8)
  FUNC_0(*VAR_7, VAR_13, VAR_14);
 else {
  *VAR_7 = VAR_13;
  FUNC_0(VAR_13, VAR_14, ((void*)0));
 }

 return (VAR_11);
}
