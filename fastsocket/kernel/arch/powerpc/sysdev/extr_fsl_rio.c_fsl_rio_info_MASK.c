
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_0, u32 VAR_1)
{
 const char *VAR_2;
 if (VAR_1 & 1) {

  switch (VAR_1 >> 30) {
  case 0:
   VAR_2 = "1";
   break;
  case 1:
   VAR_2 = "4";
   break;
  default:
   VAR_2 = "Unknown";
   break;
  }
  FUNC_0(VAR_0, "Hardware port width: %s\n", VAR_2);

  switch ((VAR_1 >> 27) & 7) {
  case 0:
   VAR_2 = "Single-lane 0";
   break;
  case 1:
   VAR_2 = "Single-lane 2";
   break;
  case 2:
   VAR_2 = "Four-lane";
   break;
  default:
   VAR_2 = "Unknown";
   break;
  }
  FUNC_0(VAR_0, "Training connection status: %s\n", VAR_2);
 } else {

  if (!(VAR_1 & 0x80000000))
   FUNC_0(VAR_0, "Output port operating in 8-bit mode\n");
  if (!(VAR_1 & 0x08000000))
   FUNC_0(VAR_0, "Input port operating in 8-bit mode\n");
 }
}
