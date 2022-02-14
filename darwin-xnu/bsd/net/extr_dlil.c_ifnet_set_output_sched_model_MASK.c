
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ifclassq {int dummy; } ;
struct ifnet {int if_eflags; scalar_t__ if_output_sched_model; struct ifclassq if_snd; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ifclassq*) ;

errno_t
FUNC_3(struct ifnet *VAR_4, u_int32_t VAR_5)
{
 struct ifclassq *VAR_6;
 u_int32_t VAR_7;
 errno_t VAR_8;

 if (VAR_4 == ((void*)0) || VAR_5 >= VAR_3)
  return (VAR_0);
 else if (!(VAR_4->if_eflags & VAR_2))
  return (VAR_1);

 VAR_6 = &VAR_4->if_snd;
 FUNC_0(VAR_6);
 VAR_7 = VAR_4->if_output_sched_model;
 VAR_4->if_output_sched_model = VAR_5;
 if ((VAR_8 = FUNC_2(VAR_6)) != 0)
  VAR_4->if_output_sched_model = VAR_7;
 FUNC_1(VAR_6);

 return (VAR_8);
}
