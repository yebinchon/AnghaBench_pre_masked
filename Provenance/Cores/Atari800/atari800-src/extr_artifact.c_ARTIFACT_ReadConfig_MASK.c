
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_7, char *VAR_8)
{
 if (FUNC_2(VAR_7, "ARTIFACT_NTSC") == 0) {
  int VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_1);
  if (VAR_9 < 0)
   return VAR_2;
  VAR_5 = VAR_9;
 }
 else if (FUNC_2(VAR_7, "ARTIFACT_PAL") == 0) {
  int VAR_10 = FUNC_0(VAR_8, VAR_4, VAR_1);
  if (VAR_10 < 0)
   return VAR_2;
  VAR_6 = VAR_10;
 }
 else if (FUNC_2(VAR_7, "ARTIFACT_NTSC_MODE") == 0) {
  int VAR_11 = FUNC_1(VAR_8);
  if (VAR_11 < 0 || VAR_11 > 4)
   return VAR_2;
  VAR_0 = VAR_11;
 }
 else
  return VAR_2;
 return VAR_3;
}
