
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_1, "Usage:\n");
 FUNC_1(VAR_1, "\teeprom_fix FW-FILE SWITCH [ADDRESS [VALUE MASK]]\n");

 FUNC_1(VAR_1, "\nDescription:\n");
 FUNC_1(VAR_1, "\tThis utility manage a set of overrides which "
   "commands the driver\n\tto load customized EEPROM' "
   "data for all specified addresses.\n");

 FUNC_1(VAR_1, "\nParameters:\n");
 FUNC_1(VAR_1, "\t'FW-FILE'  = firmware file [basename]\n");
 FUNC_1(VAR_1, "\t'SWITCH'   = [=|d|D]\n");
 FUNC_1(VAR_1, "\t | '='       => add/set value for address\n");
 FUNC_1(VAR_1, "\t | 'D'       => removes all EEPROM overrides\n");
 FUNC_1(VAR_1, "\t * 'd'       => removed override for 'address'\n");
 FUNC_1(VAR_1, "\n\t'ADDRESS'  = location of the EEPROM override\n");
 FUNC_1(VAR_1, "\t\t     NB: must be a multiple of 4.\n");
 FUNC_1(VAR_1, "\t\t     an address map can be found in eeprom.h.\n");
 FUNC_1(VAR_1, "\n\t'VALUE'    = replacement value\n");
 FUNC_1(VAR_1, "\t'MASK'     = mask for the value placement.\n\n");

 FUNC_0(VAR_0);
}
