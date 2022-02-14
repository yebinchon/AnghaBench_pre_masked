
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1)
{
  int VAR_2 = 0;

  if(VAR_1[0] == 'r')
    VAR_2 |= 1 << 8;
  else if(VAR_1[0] != '-')
    VAR_2 |= VAR_0;
  if(VAR_1[1] == 'w')
    VAR_2 |= 1 << 7;
  else if(VAR_1[1] != '-')
    VAR_2 |= VAR_0;

  if(VAR_1[2] == 'x')
    VAR_2 |= 1 << 6;
  else if(VAR_1[2] == 's') {
    VAR_2 |= 1 << 6;
    VAR_2 |= 1 << 11;
  }
  else if(VAR_1[2] == 'S')
    VAR_2 |= 1 << 11;
  else if(VAR_1[2] != '-')
    VAR_2 |= VAR_0;

  if(VAR_1[3] == 'r')
    VAR_2 |= 1 << 5;
  else if(VAR_1[3] != '-')
    VAR_2 |= VAR_0;
  if(VAR_1[4] == 'w')
    VAR_2 |= 1 << 4;
  else if(VAR_1[4] != '-')
    VAR_2 |= VAR_0;
  if(VAR_1[5] == 'x')
    VAR_2 |= 1 << 3;
  else if(VAR_1[5] == 's') {
    VAR_2 |= 1 << 3;
    VAR_2 |= 1 << 10;
  }
  else if(VAR_1[5] == 'S')
    VAR_2 |= 1 << 10;
  else if(VAR_1[5] != '-')
    VAR_2 |= VAR_0;

  if(VAR_1[6] == 'r')
    VAR_2 |= 1 << 2;
  else if(VAR_1[6] != '-')
    VAR_2 |= VAR_0;
  if(VAR_1[7] == 'w')
    VAR_2 |= 1 << 1;
  else if(VAR_1[7] != '-')
      VAR_2 |= VAR_0;
  if(VAR_1[8] == 'x')
    VAR_2 |= 1;
  else if(VAR_1[8] == 't') {
    VAR_2 |= 1;
    VAR_2 |= 1 << 9;
  }
  else if(VAR_1[8] == 'T')
    VAR_2 |= 1 << 9;
  else if(VAR_1[8] != '-')
    VAR_2 |= VAR_0;

  return VAR_2;
}
