
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ready_state; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(OggVorbis_File *VAR_2){
  while(1){
    if(VAR_2->ready_state==VAR_0)break;

    {
      int VAR_3=FUNC_0(VAR_2,((void*)0),1,0);
      if(VAR_3<0 && VAR_3!=VAR_1)return(VAR_3);
    }
  }
  return 0;
}
