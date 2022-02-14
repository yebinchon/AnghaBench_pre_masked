
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buffer_size; int buf; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_6__ {TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_1, int VAR_2)
{
 idetape_tape_t *VAR_3 = VAR_1->driver_data;

 FUNC_1(VAR_3->buf, 0, VAR_3->buffer_size);

 while (VAR_2) {
  unsigned int VAR_4 = FUNC_2(VAR_3->buffer_size, VAR_2);

  FUNC_0(VAR_1, VAR_0, VAR_4);
  VAR_2 -= VAR_4;
 }
}
