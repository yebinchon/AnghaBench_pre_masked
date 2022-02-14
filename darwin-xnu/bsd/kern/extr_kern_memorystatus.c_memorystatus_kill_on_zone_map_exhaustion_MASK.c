
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ os_reason_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

boolean_t
FUNC_4(pid_t VAR_5) {
 boolean_t VAR_6 = VAR_0;
 if (VAR_5 == -1) {
  VAR_6 = FUNC_0(-1, VAR_4);
 } else {
  os_reason_t VAR_7 = FUNC_2(VAR_2, VAR_1);
  if (VAR_7 == VAR_3) {
   FUNC_3("memorystatus_kill_on_zone_map_exhaustion: failed to allocate jetsam reason\n");
  }

  VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_7);
 }
 return VAR_6;
}
