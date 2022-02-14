
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;

unsigned int FUNC_1(unsigned int VAR_4)
{
 switch ((VAR_4 >> 28) & 0xf) {
 case 133:
 case 131:
 case 132:
 case 130:
  FUNC_0(VAR_0, "Unit type: Host\n");
  return (VAR_1);
 case 128:
  FUNC_0(VAR_0, "Unit type: 16 port RTA\n");
  return (VAR_2);
 case 129:
  FUNC_0(VAR_0, "Unit type: 8 port RTA\n");
  return (VAR_3);
 default:
  FUNC_0(VAR_0, "Unit type: Unrecognised\n");
  return (99);
 }
}
