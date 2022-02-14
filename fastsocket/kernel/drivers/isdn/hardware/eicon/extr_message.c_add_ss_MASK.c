
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
typedef size_t byte ;
struct TYPE_3__ {size_t length; size_t* info; } ;
typedef int PLCI ;
typedef TYPE_1__ API_PARSE ;


 int FUNC_0 (int *,size_t,size_t*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(PLCI * VAR_0, byte VAR_1, API_PARSE * VAR_2)
{
  byte VAR_3;

  if(VAR_2){
    FUNC_1(1,FUNC_2("add_ss(%x,len=%d)",VAR_1,VAR_2->length));
    for(VAR_3=2;VAR_3<(byte)VAR_2->length;VAR_3+=VAR_2->info[VAR_3]+2){
      FUNC_1(1,FUNC_2("add_ss_ie(%x,len=%d)",VAR_2->info[VAR_3-1],VAR_2->info[VAR_3]));
      FUNC_0(VAR_0, VAR_2->info[VAR_3-1], (byte *)&(VAR_2->info[VAR_3]), (word)VAR_2->info[VAR_3]);
    }
  }
}
