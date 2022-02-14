
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef void _throttle_io_info_t ;
typedef TYPE_2__* mount_t ;
typedef int boolean_t ;
struct TYPE_8__ {size_t mnt_devbsdunit; } ;
struct TYPE_7__ {int uu_lowpri_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,void*,int ,int ) ;

void *FUNC_4(mount_t VAR_4)
{
 struct _throttle_io_info_t *VAR_5;
 uthread_t VAR_6;
 boolean_t VAR_7 = VAR_0;

 VAR_6 = FUNC_2(FUNC_0());

 if (VAR_4 != ((void*)0)) {
  if (FUNC_1(VAR_4))
   VAR_7 = VAR_2;
  VAR_5 = &VAR_3[VAR_4->mnt_devbsdunit];
 } else
  VAR_5 = &VAR_3[VAR_1 - 1];

 if (!VAR_6->uu_lowpri_window)
  FUNC_3(VAR_6, VAR_5, VAR_0, VAR_7);

 return VAR_5;
}
