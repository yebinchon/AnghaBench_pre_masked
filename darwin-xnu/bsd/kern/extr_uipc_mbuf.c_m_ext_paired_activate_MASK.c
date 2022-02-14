
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int ext_size; int * ext_buf; } ;
struct mbuf {int m_flags; int m_type; TYPE_1__ m_ext; } ;
struct ext_ref {int dummy; } ;
typedef int m_ext_free_func_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int,int) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int *,int ,int ,int *,struct ext_ref*,int,int,int,int ,int ,struct mbuf*) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct mbuf*) ;
 struct ext_ref* FUNC_9 (struct mbuf*) ;

void
FUNC_10(struct mbuf *VAR_2)
{
 struct ext_ref *VAR_3;
 int VAR_4, VAR_5;
 caddr_t VAR_6;
 m_ext_free_func_t VAR_7;
 u_int VAR_8;

 FUNC_7(FUNC_1(VAR_2));
 FUNC_7(FUNC_6(VAR_2) == FUNC_3(VAR_2));
 FUNC_7(FUNC_4(VAR_2) == FUNC_3(VAR_2));

 VAR_4 = (VAR_2->m_flags & VAR_1);
 VAR_5 = VAR_2->m_type;
 VAR_6 = VAR_2->m_ext.ext_buf;
 VAR_7 = FUNC_8(VAR_2);
 VAR_8 = VAR_2->m_ext.ext_size;
 VAR_3 = FUNC_9(VAR_2);

 FUNC_7(VAR_6 != ((void*)0) && VAR_3 != ((void*)0));







 FUNC_0(VAR_2, VAR_4, VAR_5);
 FUNC_2(VAR_2, VAR_6, VAR_8, VAR_7, (caddr_t)VAR_2, VAR_3,
     1, 1, 2, VAR_0, FUNC_5(VAR_2), VAR_2);
}
