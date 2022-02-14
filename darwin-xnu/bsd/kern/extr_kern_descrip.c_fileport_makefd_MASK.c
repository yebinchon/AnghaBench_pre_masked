
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct fileproc {struct fileglob* f_fglob; } ;
struct fileport_makefd_args {int port; } ;
struct fileglob {int dummy; } ;
typedef TYPE_1__* proc_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef int int32_t ;
struct TYPE_8__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fileproc* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct fileproc*) ;
 int FUNC_3 (struct fileproc*) ;
 struct fileglob* FUNC_4 (scalar_t__) ;
 struct fileproc* FUNC_5 (int *) ;
 int FUNC_6 (struct fileproc*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,scalar_t__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int,struct fileproc*) ;

int
FUNC_13(proc_t VAR_7, struct fileport_makefd_args *VAR_8, int32_t *VAR_9)
{
 struct fileglob *VAR_10;
  struct fileproc *VAR_11 = VAR_2;
 ipc_port_t VAR_12 = VAR_3;
 mach_port_name_t VAR_13 = VAR_8->port;
 kern_return_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(FUNC_7(VAR_7->task),
   VAR_13, VAR_5, &VAR_12);

 if (VAR_14 != VAR_4) {
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_12);
 if (VAR_10 == ((void*)0)) {
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_5(((void*)0));
 if (VAR_11 == VAR_2) {
  VAR_16 = VAR_1;
  goto out;
 }

 VAR_11->f_fglob = VAR_10;
 FUNC_3(VAR_11);

  FUNC_10(VAR_7);
 VAR_16 = FUNC_0(VAR_7, 0, &VAR_15);
 if (VAR_16 != 0) {
  FUNC_11(VAR_7);
  FUNC_2(VAR_11);
  goto out;
 }
 *FUNC_1(VAR_7, VAR_15) |= VAR_6;

 FUNC_12(VAR_7, VAR_15, VAR_11);
 FUNC_11(VAR_7);

 *VAR_9 = VAR_15;
 VAR_16 = 0;
out:
 if ((VAR_11 != ((void*)0)) && (0 != VAR_16)) {
  FUNC_6(VAR_11);
 }

 if (VAR_3 != VAR_12) {
  FUNC_9(VAR_12);
 }

 return VAR_16;
}
