
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct necp_session {scalar_t__ necp_fd_type; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
typedef int proc_t ;
struct TYPE_4__ {scalar_t__ fg_data; TYPE_1__* fg_ops; } ;
struct TYPE_3__ {scalar_t__ fo_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct fileproc*,int) ;
 int FUNC_2 (int ,int,struct fileproc**,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, struct necp_session **VAR_5)
{
 proc_t VAR_6 = FUNC_0();
 struct fileproc *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_3(VAR_6);
 if ((VAR_8 = FUNC_2(VAR_6, VAR_4, &VAR_7, 1)) != 0) {
  goto done;
 }
 if (VAR_7->f_fglob->fg_ops->fo_type != VAR_0) {
  FUNC_1(VAR_6, VAR_4, VAR_7, 1);
  VAR_8 = VAR_2;
  goto done;
 }
 *VAR_5 = (struct necp_session *)VAR_7->f_fglob->fg_data;

 if ((*VAR_5)->necp_fd_type != VAR_3) {

  VAR_8 = VAR_1;
  goto done;
 }

done:
 FUNC_4(VAR_6);
 return (VAR_8);
}
