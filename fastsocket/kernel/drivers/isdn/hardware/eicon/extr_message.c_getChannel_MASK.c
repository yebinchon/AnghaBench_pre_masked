
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t byte ;
struct TYPE_3__ {int* info; scalar_t__ length; } ;
typedef TYPE_1__ API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static byte FUNC_0(API_PARSE * VAR_2)
{
  byte VAR_3;

  if(VAR_2){
    for(VAR_3=2;VAR_3<(byte)VAR_2->length;VAR_3+=VAR_2->info[VAR_3]+2){
      if(VAR_2->info[VAR_3]==2){
        if(VAR_2->info[VAR_3-1]==VAR_1 && VAR_2->info[VAR_3+1]==VAR_0) return (VAR_2->info[VAR_3+2]);
      }
    }
  }
  return 0;
}
