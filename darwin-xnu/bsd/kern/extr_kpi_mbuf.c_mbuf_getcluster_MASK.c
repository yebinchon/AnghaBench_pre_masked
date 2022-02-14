
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int mbuf_type_t ;
typedef TYPE_1__* mbuf_t ;
typedef int mbuf_how_t ;
typedef scalar_t__ errno_t ;
struct TYPE_11__ {int m_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;

errno_t
FUNC_5(mbuf_how_t VAR_8, mbuf_type_t VAR_9, size_t VAR_10, mbuf_t *VAR_11)
{

 errno_t VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_11 == ((void*)0))
  return (VAR_0);
 if (*VAR_11 == ((void*)0)) {
  *VAR_11 = FUNC_0(VAR_8, VAR_9);
  if (*VAR_11 == ((void*)0))
   return (VAR_1);
  VAR_13 = 1;
 }




 if (VAR_10 == VAR_5) {
  *VAR_11 = FUNC_3(*VAR_11, VAR_8);
 } else if (VAR_10 == VAR_4) {
  *VAR_11 = FUNC_2(*VAR_11, VAR_8);
 } else if (VAR_10 == VAR_3) {
  if (VAR_7 > 0) {
   *VAR_11 = FUNC_1(*VAR_11, VAR_8);
  } else {

   VAR_12 = VAR_2;
   goto out;
  }
 } else {
  VAR_12 = VAR_0;
  goto out;
 }
 if (*VAR_11 == ((void*)0) || ((*VAR_11)->m_flags & VAR_6) == 0)
  VAR_12 = VAR_1;
out:
 if (VAR_13 && VAR_12 != 0) {
  FUNC_4(*VAR_11);
  *VAR_11 = ((void*)0);
 }
 return (VAR_12);
}
