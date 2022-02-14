
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int filename; } ;
struct TYPE_3__ {int type; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(char *VAR_8, char *VAR_9)
{
 if (FUNC_3(VAR_8, "CARTRIDGE_FILENAME") == 0) {
  FUNC_2(VAR_4.filename, VAR_9, sizeof(VAR_4.filename));
  if (VAR_4.type == VAR_1)
   VAR_4.type = VAR_2;
 }
 else if (FUNC_3(VAR_8, "CARTRIDGE_TYPE") == 0) {
  int VAR_10 = FUNC_1(VAR_9);
  if (VAR_10 < 0 || VAR_10 > VAR_0)
   return VAR_6;
  VAR_4.type = VAR_10;
 }
 else if (FUNC_3(VAR_8, "CARTRIDGE_PIGGYBACK_FILENAME") == 0) {
  FUNC_2(VAR_5.filename, VAR_9, sizeof(VAR_5.filename));
  if (VAR_5.type == VAR_1)
   VAR_5.type = VAR_2;
 }
 else if (FUNC_3(VAR_8, "CARTRIDGE_PIGGYBACK_TYPE") == 0) {
  int VAR_11 = FUNC_1(VAR_9);
  if (VAR_11 < 0 || VAR_11 > VAR_0)
   return VAR_6;
  VAR_5.type = VAR_11;
 }
 else if (FUNC_3(VAR_8, "CARTRIDGE_AUTOREBOOT") == 0) {
  int VAR_12 = FUNC_0(VAR_9);
  if (VAR_12 < 0)
   return VAR_6;
  VAR_3 = VAR_12;
 }
 else return VAR_6;
 return VAR_7;
}
