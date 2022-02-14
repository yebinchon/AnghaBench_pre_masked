
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ESI ;


 size_t VAR_0 ;
 size_t VAR_1 ;

inline const char* FUNC_0(ESI VAR_2)
{
 static const char * const VAR_3[] =
 {
  "<none>",
  "Gamepad",
  "Zapper",
  "Power Pad A",
  "Power Pad B",
  "Arkanoid Paddle",
  "Subor Mouse",
  "SNES Pad",
  "SNES Mouse"
 };

 if(VAR_2 >= VAR_1 && VAR_2 <= VAR_0)
  return VAR_3[VAR_2];
 else return "<invalid ESI>";
}
