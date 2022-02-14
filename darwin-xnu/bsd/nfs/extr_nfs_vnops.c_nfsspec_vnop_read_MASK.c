
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnop_read_args {int a_vp; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {TYPE_1__ n_atim; int n_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vnop_read_args*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_6(
 struct vnop_read_args *VAR_3)






{
 nfsnode_t VAR_4 = FUNC_2(VAR_3->a_vp);
 struct timespec VAR_5;
 int VAR_6;




 if ((VAR_6 = FUNC_4(VAR_4)))
  return (VAR_6);
 VAR_4->n_flag |= VAR_0;
 FUNC_3(&VAR_5);
 VAR_4->n_atim.tv_sec = VAR_5.tv_sec;
 VAR_4->n_atim.tv_nsec = VAR_5.tv_nsec;
 FUNC_5(VAR_4);
 return (FUNC_0(VAR_1, FUNC_1(VAR_2), VAR_3));
}
