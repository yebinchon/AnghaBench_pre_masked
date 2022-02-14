
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_ssize_t ;
typedef int uint32_t ;
struct uio {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
typedef int sae_connid_t ;
typedef int sae_associd_t ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int ,struct sockaddr*,struct sockaddr*,struct proc*,int ,int ,int *,int ,void*,int ,struct uio*,int *) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1, struct sockaddr *VAR_2,
    struct sockaddr *VAR_3, struct proc *VAR_4, uint32_t VAR_5,
    sae_associd_t VAR_6, sae_connid_t *VAR_7, uint32_t VAR_8, void *VAR_9,
    uint32_t VAR_10, struct uio *VAR_11, user_ssize_t *VAR_12)
{
 return (FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12));
}
