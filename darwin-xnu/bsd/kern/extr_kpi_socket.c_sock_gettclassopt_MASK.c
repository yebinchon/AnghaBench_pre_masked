
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockopt {size_t sopt_valsize; int sopt_name; int sopt_level; int sopt_p; int sopt_val; int sopt_dir; } ;
typedef TYPE_2__* socket_t ;
typedef scalar_t__ errno_t ;
struct TYPE_9__ {TYPE_1__* so_proto; } ;
struct TYPE_8__ {int * pr_domain; } ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct sockopt*,int ) ;

errno_t
FUNC_5(socket_t VAR_7, void *VAR_8, size_t *VAR_9)
{
 errno_t VAR_10 = 0;
 struct sockopt VAR_11;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_11.sopt_dir = VAR_5;
 VAR_11.sopt_val = FUNC_0(VAR_8);
 VAR_11.sopt_valsize = *VAR_9;
 VAR_11.sopt_p = VAR_6;

 FUNC_2(VAR_7, 1);
 if (VAR_7->so_proto == ((void*)0) || VAR_7->so_proto->pr_domain == ((void*)0)) {
  FUNC_3(VAR_7, 1);
  return (VAR_0);
 }

 switch (FUNC_1(VAR_7)) {
 case 129:
  VAR_11.sopt_level = VAR_1;
  VAR_11.sopt_name = VAR_4;
  break;
 case 128:
  VAR_11.sopt_level = VAR_2;
  VAR_11.sopt_name = VAR_3;
  break;
 default:
  FUNC_3(VAR_7, 1);
  return (VAR_0);

 }
 VAR_10 = FUNC_4(VAR_7, &VAR_11, 0);
 FUNC_3(VAR_7, 1);
 if (VAR_10 == 0)
  *VAR_9 = VAR_11.sopt_valsize;
 return (VAR_10);
}
