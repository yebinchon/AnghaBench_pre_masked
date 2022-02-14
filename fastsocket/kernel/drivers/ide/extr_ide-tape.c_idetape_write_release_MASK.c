
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int blk_size; int user_bs_factor; int * buf; int buffer_size; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_9__ {TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_1, unsigned int VAR_2)
{
 idetape_tape_t *VAR_3 = VAR_1->driver_data;

 FUNC_0(VAR_1);
 VAR_3->buf = FUNC_5(VAR_3->buffer_size, VAR_0);
 if (VAR_3->buf != ((void*)0)) {
  FUNC_2(VAR_1, VAR_3->blk_size *
    (VAR_3->user_bs_factor - 1));
  FUNC_4(VAR_3->buf);
  VAR_3->buf = ((void*)0);
 }
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_1(VAR_1);
}
