
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct m_tag {int dummy; } ;
typedef int mbuf_tag_type_t ;
typedef scalar_t__ mbuf_tag_id_t ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_5__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct m_tag*) ;
 struct m_tag* FUNC_1 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ) ;

void
FUNC_3(
 mbuf_t VAR_2,
 mbuf_tag_id_t VAR_3,
 mbuf_tag_type_t VAR_4)
{
 struct m_tag *VAR_5;
 u_int32_t VAR_6, VAR_7;


 (void) FUNC_2(&VAR_6, &VAR_7,
     VAR_1);
 if (VAR_2 == ((void*)0) || (VAR_2->m_flags & VAR_0) == 0 ||
     VAR_3 < VAR_6 || VAR_3 > VAR_7)
  return;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  return;
 }

 FUNC_0(VAR_2, VAR_5);
}
