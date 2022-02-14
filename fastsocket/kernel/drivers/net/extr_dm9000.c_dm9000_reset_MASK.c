
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int io_data; int io_addr; int dev; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(board_info_t * VAR_2)
{
 FUNC_0(VAR_2->dev, "resetting device\n");


 FUNC_2(VAR_0, VAR_2->io_addr);
 FUNC_1(200);
 FUNC_2(VAR_1, VAR_2->io_data);
 FUNC_1(200);
}
