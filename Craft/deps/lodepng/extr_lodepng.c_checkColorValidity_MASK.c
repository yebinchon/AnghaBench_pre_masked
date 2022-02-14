
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LodePNGColorType ;



__attribute__((used)) static unsigned FUNC_0(LodePNGColorType VAR_0, unsigned VAR_1)
{
  switch(VAR_0)
  {
    case 0: if(!(VAR_1 == 1 || VAR_1 == 2 || VAR_1 == 4 || VAR_1 == 8 || VAR_1 == 16)) return 37; break;
    case 2: if(!( VAR_1 == 8 || VAR_1 == 16)) return 37; break;
    case 3: if(!(VAR_1 == 1 || VAR_1 == 2 || VAR_1 == 4 || VAR_1 == 8 )) return 37; break;
    case 4: if(!( VAR_1 == 8 || VAR_1 == 16)) return 37; break;
    case 6: if(!( VAR_1 == 8 || VAR_1 == 16)) return 37; break;
    default: return 31;
  }
  return 0;
}
