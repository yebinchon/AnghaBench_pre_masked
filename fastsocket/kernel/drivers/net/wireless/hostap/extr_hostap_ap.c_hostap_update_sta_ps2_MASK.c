
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; int addr; } ;
typedef int local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct sta_info*) ;

__attribute__((used)) static void FUNC_2(local_info_t *VAR_4, struct sta_info *VAR_5,
      int VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_6 && !(VAR_5->flags & VAR_3)) {
  VAR_5->flags |= VAR_3;
  FUNC_0(VAR_0, "STA %pM changed to use PS "
         "mode (type=0x%02X, stype=0x%02X)\n",
         VAR_5->addr, VAR_7 >> 2, VAR_8 >> 4);
 } else if (!VAR_6 && (VAR_5->flags & VAR_3)) {
  VAR_5->flags &= ~VAR_3;
  FUNC_0(VAR_0, "STA %pM changed to not use "
         "PS mode (type=0x%02X, stype=0x%02X)\n",
         VAR_5->addr, VAR_7 >> 2, VAR_8 >> 4);
  if (VAR_7 != VAR_1 ||
      VAR_8 != VAR_2)
   FUNC_1(VAR_4, VAR_5);
 }
}
