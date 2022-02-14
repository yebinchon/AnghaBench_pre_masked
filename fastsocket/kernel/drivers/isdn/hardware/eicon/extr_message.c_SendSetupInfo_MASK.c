
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef char byte ;
struct TYPE_10__ {int Id; } ;
struct TYPE_9__ {TYPE_1__* adapter; } ;
struct TYPE_8__ {size_t* Info_Mask; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ APPL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,char*,size_t,char*) ;

__attribute__((used)) static void FUNC_4(APPL * VAR_2, PLCI * VAR_3, dword VAR_4, byte * * VAR_5, byte VAR_6)
{
  word VAR_7;
  byte * VAR_8;
  word VAR_9;
  byte * VAR_10;
  word VAR_11 = 0;

  FUNC_0(1,FUNC_1("SetupInfo"));

  for(VAR_7=0; VAR_7<VAR_0; VAR_7++) {
    VAR_8 = VAR_5[VAR_7];
    VAR_9 = 0;
    VAR_10 = VAR_8;
    if(VAR_8[0]) {
      switch(VAR_7) {
      case 0:
        FUNC_0(1,FUNC_1("CPN "));
        VAR_9 = 0x0070;
        VAR_11 = 0x80;
        VAR_6 = 1;
        break;
      case 8:
        FUNC_0(1,FUNC_1("display(%d)",VAR_7));
        VAR_9 = 0x0028;
        VAR_11 = 0x04;
        VAR_6 = 1;
        break;
      case 16:
        FUNC_0(1,FUNC_1("CHI"));
        VAR_9 = 0x0018;
        VAR_11 = 0x100;
        VAR_6 = 1;
        FUNC_2 (VAR_3, VAR_10);
        break;
      case 19:
        FUNC_0(1,FUNC_1("RDN"));
        VAR_9 = 0x0074;
        VAR_11 = 0x400;
        VAR_6 = 1;
        break;
      case 20:
        FUNC_0(1,FUNC_1("RDX"));
        VAR_9 = 0x0073;
        VAR_11 = 0x400;
        VAR_6 = 1;
        break;
      case 22:
        FUNC_0(1,FUNC_1("RIN"));
        VAR_9 = 0x0076;
        VAR_11 = 0x400;
        VAR_6 = 1;
        break;
      default:
        VAR_9 = 0;
        break;
      }
    }

    if(VAR_7==VAR_0-2){
      VAR_9 = 0x8000 |5;
      VAR_11 = 0x10;
      VAR_10 = "";
    }

    if(VAR_6 && VAR_9){
      if(VAR_3->adapter->Info_Mask[VAR_2->Id-1] & VAR_11) {
        FUNC_3(VAR_2,VAR_1,VAR_4,0,"wS",VAR_9,VAR_10);
      }
    }
  }
}
