
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ block_size; } ;
struct tape_device {TYPE_1__ char_data; } ;


 int FUNC_0 (int,char*) ;

int
FUNC_1(struct tape_device *VAR_0, int VAR_1)
{
 FUNC_0(6, "TCHAR:devreset:\n");
 VAR_0->char_data.block_size = 0;
 return 0;
}
