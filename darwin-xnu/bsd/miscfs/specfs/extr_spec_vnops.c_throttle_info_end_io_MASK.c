
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bufattr {int ba_flags; } ;
struct _throttle_io_info_t {int dummy; } ;
typedef TYPE_1__* mount_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_8__ {TYPE_1__* v_mount; } ;
struct TYPE_7__ {struct bufattr b_attr; } ;
struct TYPE_6__ {size_t mnt_devbsdunit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bufattr*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 struct _throttle_io_info_t* VAR_3 ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct _throttle_io_info_t*,int) ;

void FUNC_5(buf_t VAR_4) {
 mount_t VAR_5;
 struct bufattr *VAR_6;
 struct _throttle_io_info_t *VAR_7;
 int VAR_8;

 VAR_6 = &VAR_4->b_attr;
 if (!FUNC_2(VAR_6->ba_flags, VAR_1)) {
  return;
 }
 FUNC_0(VAR_6->ba_flags, VAR_1);

 VAR_5 = FUNC_3(VAR_4)->v_mount;
 if (VAR_5 != ((void*)0)) {
  VAR_7 = &VAR_3[VAR_5->mnt_devbsdunit];
 } else {
  VAR_7 = &VAR_3[VAR_2 - 1];
 }

 VAR_8 = FUNC_1(VAR_6);
 if (FUNC_2(VAR_6->ba_flags, VAR_0)) {
  VAR_8--;
 }

 FUNC_4(VAR_7, VAR_8);
}
