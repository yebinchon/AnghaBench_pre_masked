
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0)
{
 int VAR_1 = 16;
 static char *VAR_2[] = {
  "Executive",
  "Device Driver Module",
  "Block Device",
  "Tape Device",
  "LAN Interface",
  "WAN Interface",
  "Fibre Channel Port",
  "Fibre Channel Device",
  "SCSI Device",
  "ATE Port",
  "ATE Device",
  "Floppy Controller",
  "Floppy Device",
  "Secondary Bus Port",
  "Peer Transport Agent",
  "Peer Transport",
  "Unknown"
 };

 switch (VAR_0 & 0xfff) {
 case 139:
  VAR_1 = 0;
  break;
 case 140:
  VAR_1 = 1;
  break;
 case 131:
  VAR_1 = 2;
  break;
 case 129:
  VAR_1 = 3;
  break;
 case 134:
  VAR_1 = 4;
  break;
 case 128:
  VAR_1 = 5;
  break;
 case 137:
  VAR_1 = 6;
  break;
 case 138:
  VAR_1 = 7;
  break;
 case 130:
  VAR_1 = 8;
  break;
 case 142:
  VAR_1 = 9;
  break;
 case 143:
  VAR_1 = 10;
  break;
 case 136:
  VAR_1 = 11;
  break;
 case 135:
  VAR_1 = 12;
  break;
 case 141:
  VAR_1 = 13;
  break;
 case 132:
  VAR_1 = 14;
  break;
 case 133:
  VAR_1 = 15;
  break;
 }

 return VAR_2[VAR_1];
}
