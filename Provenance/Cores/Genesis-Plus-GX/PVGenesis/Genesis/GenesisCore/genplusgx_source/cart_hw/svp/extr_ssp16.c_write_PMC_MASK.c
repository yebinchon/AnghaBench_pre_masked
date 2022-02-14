
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {void* h; void* l; } ;
struct TYPE_6__ {TYPE_1__ byte; } ;
struct TYPE_5__ {int emu_status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,void*,int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_2(u32 VAR_5)
{
  if (VAR_4->emu_status & VAR_1) {


    VAR_4->emu_status |= VAR_2;
    VAR_4->emu_status &= ~VAR_1;

    VAR_3.byte.h = VAR_5;



  } else {
    VAR_4->emu_status |= VAR_1;

    VAR_3.byte.l = VAR_5;



  }
}
