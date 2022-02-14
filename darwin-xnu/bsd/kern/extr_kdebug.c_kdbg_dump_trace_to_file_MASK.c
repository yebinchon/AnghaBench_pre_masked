
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct TYPE_4__ {int debugid; size_t arg1; int arg2; int arg5; } ;
typedef TYPE_1__ kd_buf ;
typedef int caddr_t ;
struct TYPE_5__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__ VAR_10 ;
 int FUNC_6 (int ,size_t*,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ,int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_12 ;
 int FUNC_14 (int ,void*,int*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int,int ) ;
 scalar_t__ FUNC_18 (char const*,int,int,int ,int *,int ) ;

void
FUNC_19(const char *VAR_13)
{
 vfs_context_t VAR_14;
 vnode_t VAR_15;
 size_t VAR_16;
 int VAR_17;

 FUNC_12();

 if (!(VAR_11 & VAR_3)) {
  goto out;
 }

 if (FUNC_11() != 0) {




  VAR_11 = 0;
  VAR_10.enabled = 0;
  FUNC_2();
  goto out;
 }

 FUNC_0(VAR_9 | VAR_1);

 VAR_11 = 0;
 VAR_10.enabled = 0;
 FUNC_2();

 VAR_14 = FUNC_16();

 if (FUNC_18(VAR_13, (VAR_5 | VAR_2 | VAR_6), 0600, 0, &VAR_15, VAR_14)) {
  goto out;
 }

 FUNC_9(VAR_15, VAR_14);

 VAR_16 = VAR_12 * sizeof(kd_buf);
 VAR_17 = FUNC_6(0, &VAR_16, VAR_15, VAR_14, VAR_7);
 if (VAR_17) {
  goto out_close;
 }





 VAR_17 = FUNC_1(VAR_15, VAR_4, VAR_14);




 kd_buf VAR_18 = {
  .debugid = VAR_9 | VAR_0,
  .arg1 = VAR_16,
  .arg2 = VAR_17,
  .arg5 = FUNC_15(FUNC_5()),
 };
 FUNC_7(&VAR_18, FUNC_8(),
   FUNC_3());


 (void)FUNC_10((caddr_t)&VAR_18, sizeof(kd_buf), VAR_15, VAR_14,
   VAR_8);

out_close:
 FUNC_17(VAR_15, VAR_2, VAR_14);
 FUNC_14(FUNC_4(), (void *)((void*)0), (int *)((void*)0));

out:
 FUNC_13();
}
