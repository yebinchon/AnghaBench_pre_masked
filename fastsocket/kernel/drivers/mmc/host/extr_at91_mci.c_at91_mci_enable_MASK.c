
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at91mci_host {TYPE_1__* board; } ;
struct TYPE_2__ {unsigned int slot_b; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct at91mci_host*,int ,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct at91mci_host *VAR_11)
{
 unsigned int VAR_12;

 FUNC_0(VAR_11, VAR_0, VAR_5);
 FUNC_0(VAR_11, VAR_4, 0xffffffff);
 FUNC_0(VAR_11, VAR_3, VAR_2 | VAR_1);
 VAR_12 = VAR_7 | 0x34a;

 if (FUNC_1() || FUNC_2())
  VAR_12 |= VAR_8 | VAR_10;

 FUNC_0(VAR_11, VAR_6, VAR_12);


 FUNC_0(VAR_11, VAR_9, VAR_11->board->slot_b);
}
