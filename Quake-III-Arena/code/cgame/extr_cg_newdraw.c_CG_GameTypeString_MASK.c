
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gametype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;

const char *FUNC_0() {
 if ( VAR_6.gametype == VAR_2 ) {
  return "Free For All";
 } else if ( VAR_6.gametype == VAR_5 ) {
  return "Team Deathmatch";
 } else if ( VAR_6.gametype == VAR_1 ) {
  return "Capture the Flag";
 } else if ( VAR_6.gametype == VAR_0 ) {
  return "One Flag CTF";
 } else if ( VAR_6.gametype == VAR_4 ) {
  return "Overload";
 } else if ( VAR_6.gametype == VAR_3 ) {
  return "Harvester";
 }
 return "";
}
