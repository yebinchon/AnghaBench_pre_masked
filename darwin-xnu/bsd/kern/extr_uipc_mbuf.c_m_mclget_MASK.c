
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ext_buf; } ;
struct mbuf {TYPE_1__ m_ext; } ;
struct ext_ref {int dummy; } ;


 int FUNC_0 (struct mbuf*,int *,struct ext_ref*,int,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 struct ext_ref* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct ext_ref*) ;
 int VAR_0 ;

struct mbuf *
FUNC_5(struct mbuf *VAR_1, int VAR_2)
{
 struct ext_ref *VAR_3;

 if ((VAR_3 = FUNC_3(VAR_0, FUNC_1(VAR_2))) == ((void*)0))
  return (VAR_1);

 VAR_1->m_ext.ext_buf = FUNC_2(VAR_2);
 if (VAR_1->m_ext.ext_buf != ((void*)0)) {
  FUNC_0(VAR_1, VAR_1->m_ext.ext_buf, VAR_3, 1, 0);
 } else {
  FUNC_4(VAR_0, VAR_3);
 }
 return (VAR_1);
}
