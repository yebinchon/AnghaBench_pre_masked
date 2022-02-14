
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_board {int name; } ;
struct comedi_device {scalar_t__ board_ptr; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct das1800_board* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_20)
{
 int VAR_21;
 int VAR_22;

 VAR_21 = (FUNC_0(VAR_20->iobase + VAR_0) >> 4) & 0xf;
 VAR_22 = ((struct das1800_board *)VAR_20->board_ptr) - VAR_9;

 switch (VAR_21) {
 case 0x3:
  if (VAR_22 == VAR_13 || VAR_22 == VAR_19 ||
      VAR_22 == VAR_3 || VAR_22 == VAR_8) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1
      (" Board model (probed, not recommended): das-1800st-da series\n");
  return VAR_12;
  break;
 case 0x4:
  if (VAR_22 == VAR_17 || VAR_22 == VAR_6) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1
      (" Board model (probed, not recommended): das-1802hr-da\n");
  return VAR_16;
  break;
 case 0x5:
  if (VAR_22 == VAR_10 || VAR_22 == VAR_14 ||
      VAR_22 == VAR_1 || VAR_22 == VAR_4) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1
      (" Board model (probed, not recommended): das-1800ao series\n");
  return VAR_10;
  break;
 case 0x6:
  if (VAR_22 == VAR_16 || VAR_22 == VAR_5) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1(" Board model (probed, not recommended): das-1802hr\n");
  return VAR_16;
  break;
 case 0x7:
  if (VAR_22 == VAR_12 || VAR_22 == VAR_18 ||
      VAR_22 == VAR_2 || VAR_22 == VAR_7) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1
      (" Board model (probed, not recommended): das-1800st series\n");
  return VAR_12;
  break;
 case 0x8:
  if (VAR_22 == VAR_11 || VAR_22 == VAR_15) {
   FUNC_1(" Board model: %s\n",
          VAR_9[VAR_22].name);
   return VAR_22;
  }
  FUNC_1
      (" Board model (probed, not recommended): das-1800hc series\n");
  return VAR_11;
  break;
 default:
  FUNC_1
      (" Board model: probe returned 0x%x (unknown, please report)\n",
       VAR_21);
  return VAR_22;
  break;
 }
 return -1;
}
