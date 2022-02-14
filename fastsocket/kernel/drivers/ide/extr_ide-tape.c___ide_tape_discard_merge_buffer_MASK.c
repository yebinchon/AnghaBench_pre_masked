
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chrdev_dir; int * buf; scalar_t__ valid; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_5__ {int atapi_flags; TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_3)
{
 idetape_tape_t *VAR_4 = VAR_3->driver_data;

 if (VAR_4->chrdev_dir != VAR_1)
  return;

 FUNC_0(FUNC_1(VAR_2), &VAR_3->atapi_flags);
 VAR_4->valid = 0;
 if (VAR_4->buf != ((void*)0)) {
  FUNC_2(VAR_4->buf);
  VAR_4->buf = ((void*)0);
 }

 VAR_4->chrdev_dir = VAR_0;
}
