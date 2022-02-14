
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vorbis_info ;
typedef int ogg_page ;
typedef int ogg_packet ;
typedef scalar_t__ ogg_int64_t ;
struct TYPE_7__ {int serialno; } ;
struct TYPE_6__ {TYPE_2__ os; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 long FUNC_6 (int *,int *) ;

__attribute__((used)) static ogg_int64_t FUNC_7(OggVorbis_File *VAR_0, vorbis_info *VAR_1){
  ogg_page VAR_2;
  ogg_int64_t VAR_3=0;
  long VAR_4=-1;
  int VAR_5;
  int VAR_6 = VAR_0->os.serialno;

  while(1){
    ogg_packet VAR_7;
    if(FUNC_0(VAR_0,&VAR_2,-1)<0)
      break;

    if(FUNC_1(&VAR_2)) break;
    if(FUNC_3(&VAR_2)!=VAR_6) continue;


    FUNC_5(&VAR_0->os,&VAR_2);
    while((VAR_5=FUNC_4(&VAR_0->os,&VAR_7))){
      if(VAR_5>0){
        long VAR_8=FUNC_6(VAR_1,&VAR_7);
        if(VAR_4!=-1)
          VAR_3+=(VAR_4+VAR_8)>>2;
        VAR_4=VAR_8;
      }
    }

    if(FUNC_2(&VAR_2)!=-1){

      VAR_3= FUNC_2(&VAR_2)-VAR_3;
      break;
    }
  }



  if(VAR_3<0)VAR_3=0;

  return VAR_3;
}
