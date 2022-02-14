
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cmd_entry; scalar_t__ num_cmd_alloc; scalar_t__ num_cmd_entries; int lock; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1( void )
{
    FUNC_0( &VAR_0.lock, "vcos_cmd" );

    VAR_0.num_cmd_entries = 0;
    VAR_0.num_cmd_alloc = 0;
    VAR_0.cmd_entry = ((void*)0);




}
