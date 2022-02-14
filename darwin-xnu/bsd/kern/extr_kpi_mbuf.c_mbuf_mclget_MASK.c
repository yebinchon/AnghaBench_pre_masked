
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mbuf_type_t ;
typedef TYPE_1__* mbuf_t ;
typedef int mbuf_how_t ;
typedef scalar_t__ errno_t ;
struct TYPE_7__ {int m_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__**) ;

errno_t
FUNC_3(mbuf_how_t VAR_3, mbuf_type_t VAR_4, mbuf_t *VAR_5)
{

 errno_t VAR_6 = 0;
 int VAR_7 = 0;
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 if (*VAR_5 == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_6)
   return (VAR_6);
  VAR_7 = 1;
 }





 *VAR_5 = FUNC_0(*VAR_5, VAR_3);

 if (VAR_7 && ((*VAR_5)->m_flags & VAR_2) == 0) {
  FUNC_1(*VAR_5);
  *VAR_5 = ((void*)0);
 }
 if (*VAR_5 == ((void*)0) || ((*VAR_5)->m_flags & VAR_2) == 0)
  VAR_6 = VAR_1;
 return (VAR_6);
}
