
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
struct TYPE_2__ {int** inst_tab; int rhythm; int* instvol_r; } ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (size_t,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_5(UINT8 VAR_1)
{
  UINT8* VAR_2 = &VAR_0[0][0];
  UINT32 VAR_3;

  UINT32 VAR_4 = 9;
  if (VAR_0 & 0x20)
    VAR_4=6;

  switch(VAR_1&7)
  {
    case 0:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_3(VAR_3*2, VAR_2[0]);
        }
      }
      break;

    case 1:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_3(VAR_3*2+1, VAR_2[1]);
        }
      }
      break;

    case 2:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_1(VAR_3, VAR_2[2]);
        }
      }
      break;

    case 3:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_2(VAR_3, VAR_2[3]);
        }
      }
      break;

    case 4:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_0(VAR_3*2, VAR_2[4]);
        }
      }
      break;

    case 5:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_0(VAR_3*2+1, VAR_2[5]);
        }
      }
      break;

    case 6:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_4(VAR_3*2, VAR_2[6]);
        }
      }
      break;

    case 7:
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
      {
        if ((VAR_0[VAR_3]&0xf0)==0)
        {
          FUNC_4(VAR_3*2+1, VAR_2[7]);
        }
      }
      break;
  }
}
