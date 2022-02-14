
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_1; char member_3; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 void* VAR_13 ;

__attribute__((used)) static void FUNC_3(int VAR_14, char *VAR_15[])
{
 while (1) {
  static const struct option VAR_16[] = {
   { "device", 1, 0, 'D' },
   { "speed", 1, 0, 's' },
   { "delay", 1, 0, 'd' },
   { "bpw", 1, 0, 'b' },
   { "loop", 0, 0, 'l' },
   { "cpha", 0, 0, 'H' },
   { "cpol", 0, 0, 'O' },
   { "lsb", 0, 0, 'L' },
   { "cs-high", 0, 0, 'C' },
   { "3wire", 0, 0, '3' },
   { "no-cs", 0, 0, 'N' },
   { "ready", 0, 0, 'R' },
   { ((void*)0), 0, 0, 0 },
  };
  int VAR_17;

  VAR_17 = FUNC_1(VAR_14, VAR_15, "D:s:d:b:lHOLC3NR", VAR_16, ((void*)0));

  if (VAR_17 == -1)
   break;

  switch (VAR_17) {
  case 'D':
   VAR_10 = VAR_12;
   break;
  case 's':
   VAR_13 = FUNC_0(VAR_12);
   break;
  case 'd':
   VAR_9 = FUNC_0(VAR_12);
   break;
  case 'b':
   VAR_8 = FUNC_0(VAR_12);
   break;
  case 'l':
   VAR_11 |= VAR_4;
   break;
  case 'H':
   VAR_11 |= VAR_1;
   break;
  case 'O':
   VAR_11 |= VAR_2;
   break;
  case 'L':
   VAR_11 |= VAR_5;
   break;
  case 'C':
   VAR_11 |= VAR_3;
   break;
  case '3':
   VAR_11 |= VAR_0;
   break;
  case 'N':
   VAR_11 |= VAR_6;
   break;
  case 'R':
   VAR_11 |= VAR_7;
   break;
  default:
   FUNC_2(VAR_15[0]);
   break;
  }
 }
}
