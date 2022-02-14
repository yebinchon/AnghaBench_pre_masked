
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nfsm_chain {int nmc_mhead; } ;
typedef int mbuf_t ;
typedef int gss_ctx_id_t ;
struct TYPE_4__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,int ,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct nfsm_chain*,int ) ;
 int FUNC_5 (scalar_t__,struct nfsm_chain*,int ,int ) ;
 int FUNC_6 (scalar_t__,struct nfsm_chain*,scalar_t__) ;
 int FUNC_7 (scalar_t__,struct nfsm_chain*) ;
 int FUNC_8 (scalar_t__,struct nfsm_chain*,int ) ;
 int FUNC_9 (scalar_t__,struct nfsm_chain*) ;
 int FUNC_10 (char*,scalar_t__) ;
 scalar_t__ FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_13(gss_ctx_id_t VAR_2, mbuf_t *VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 gss_buffer_desc VAR_9;
 struct nfsm_chain VAR_10;


 VAR_8 = FUNC_3(*VAR_3);
 if (VAR_5)
  *VAR_5 = VAR_8;
 VAR_6 = FUNC_11(VAR_3, VAR_4);
 if (VAR_6)
  return (VAR_6);




 VAR_8 += VAR_1;
 VAR_7 = FUNC_1(&VAR_6, VAR_2, 0, *VAR_3, 0, VAR_8, &VAR_9);
 if (VAR_7 != VAR_0) {
  FUNC_10("gss_krb5_get_mic_mbuf failed %d\n", VAR_6);
  return (VAR_6);
 }

 VAR_6 = FUNC_12(VAR_3, VAR_8);
 if (VAR_6)
  return (VAR_6);

 FUNC_8(VAR_6, &VAR_10, *VAR_3);

 FUNC_6(VAR_6, &VAR_10, VAR_8 + VAR_1);
 FUNC_9(VAR_6, &VAR_10);
 FUNC_4(VAR_6, &VAR_10, VAR_9.length);
 FUNC_5(VAR_6, &VAR_10, VAR_9.value, VAR_9.length);
 FUNC_7(VAR_6, &VAR_10);
 FUNC_2(((void*)0), &VAR_9);


 FUNC_0(VAR_10.nmc_mhead == *VAR_3);

 return (VAR_6);
}
