
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ p_refcount; int p_listflag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (scalar_t__*,int ,int ,char*,int ) ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;

proc_t
FUNC_4(proc_t VAR_8, boolean_t VAR_9)
{
 boolean_t VAR_10 = VAR_0;
 FUNC_1();

 VAR_8->p_listflag |= VAR_2;
 if (VAR_9) {






  VAR_8->p_listflag |= VAR_4;
  if (VAR_8 == VAR_6) {
   VAR_10 = VAR_5;
  }
 }


 while (VAR_8->p_refcount && !VAR_10) {
  VAR_8->p_listflag |= VAR_3;
  FUNC_0(&VAR_8->p_refcount, VAR_7, 0, "proc_refdrain", 0) ;
 }

 VAR_8->p_listflag &= ~VAR_2;
 if (!VAR_9) {
  VAR_8->p_listflag |= VAR_1;
 } else {

  VAR_8->p_refcount++;
  FUNC_3(VAR_8, 1);
 }

 FUNC_2();

 if (VAR_9) {
  return (VAR_8);
 }
 return ((void*)0);
}
