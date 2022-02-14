
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct mbuf {scalar_t__ m_type; } ;
typedef int mcache_obj_t ;
typedef int mcache_audit_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,struct mbuf*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_2)
{
 mcache_audit_t *VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_0, (mcache_obj_t *)VAR_2);

 FUNC_3("mcl_audit: freed mbuf %p with type 0x%x (instead of 0x%x)\n%s\n",
     VAR_2, (u_int16_t)VAR_2->m_type, VAR_1, FUNC_1(VAR_3));

}
