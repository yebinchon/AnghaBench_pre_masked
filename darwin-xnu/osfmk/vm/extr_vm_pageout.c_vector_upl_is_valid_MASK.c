
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vector_upl_t ;
typedef TYPE_1__* upl_t ;
typedef int boolean_t ;
struct TYPE_3__ {int flags; int * vector_upl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(upl_t VAR_3)
{
 if(VAR_3 && ((VAR_3->flags & VAR_2)==VAR_2)) {
  vector_upl_t VAR_4 = VAR_3->vector_upl;
  if(VAR_4 == ((void*)0) || VAR_4 == (vector_upl_t)0xfeedfeed || VAR_4 == (vector_upl_t)0xfeedbeef)
   return VAR_0;
  else
   return VAR_1;
 }
 return VAR_0;
}
