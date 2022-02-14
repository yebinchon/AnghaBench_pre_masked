
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int * end_io; int cmd_flags; int biotail; int bio; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct request *VAR_1)
{





 VAR_1->bio = VAR_1->biotail;


 VAR_1->cmd_flags &= ~VAR_0;
 VAR_1->end_io = ((void*)0);
}
