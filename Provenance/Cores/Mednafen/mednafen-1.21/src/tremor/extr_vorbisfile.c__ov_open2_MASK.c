
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ready_state; int * datasource; scalar_t__ seekable; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(OggVorbis_File *VAR_4){
  if(VAR_4->ready_state != VAR_2) return VAR_1;
  VAR_4->ready_state=VAR_0;
  if(VAR_4->seekable){
    int VAR_5=FUNC_0(VAR_4);
    if(VAR_5){
      VAR_4->datasource=((void*)0);
      FUNC_1(VAR_4);
    }
    return(VAR_5);
  }else
    VAR_4->ready_state=VAR_3;

  return 0;
}
