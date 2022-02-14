
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nfsm_chain {int dummy; } ;
typedef int mbuf_t ;
typedef int gss_ctx_id_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int,int ,int *,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct nfsm_chain*,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,struct nfsm_chain*,scalar_t__) ;
 int FUNC_4 (scalar_t__,struct nfsm_chain*) ;
 int FUNC_5 (scalar_t__,struct nfsm_chain*,int ) ;
 int FUNC_6 (scalar_t__,struct nfsm_chain*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static errno_t
FUNC_10(gss_ctx_id_t VAR_3, mbuf_t *VAR_4, uint32_t VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 struct nfsm_chain VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;

 VAR_7 = FUNC_8(VAR_4, VAR_5);
 if (VAR_7)
  return (VAR_7);

 VAR_11 = FUNC_1(*VAR_4);
 VAR_8 = FUNC_0(&VAR_7, VAR_3, 1, 0, VAR_4, 0, VAR_11, ((void*)0));
 if (VAR_8 != VAR_0)
  return (VAR_7);

 VAR_11 = FUNC_1(*VAR_4);
 if (VAR_6)
  *VAR_6 = VAR_11;
 VAR_10 = FUNC_7(VAR_11);


 VAR_7 = FUNC_9(VAR_4, VAR_11);

 if (VAR_7)
  return (VAR_7);
 if (VAR_10) {
  FUNC_5(VAR_7, &VAR_9, *VAR_4);

  FUNC_3(VAR_7, &VAR_9, VAR_1 + VAR_11);
  FUNC_6(VAR_7, &VAR_9);
  FUNC_2(VAR_7, &VAR_9, VAR_2, VAR_10);
  FUNC_4(VAR_7, &VAR_9);
 }

 return (VAR_7);
}
