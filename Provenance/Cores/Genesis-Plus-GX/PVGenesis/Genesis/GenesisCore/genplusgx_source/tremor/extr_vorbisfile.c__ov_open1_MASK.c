
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* seek_func ) (void*,int ,int ) ;} ;
typedef TYPE_1__ ov_callbacks ;
struct TYPE_9__ {int seekable; int links; scalar_t__ ready_state; int * datasource; int current_serialno; void* vc; void* vi; int os; int oy; TYPE_1__ callbacks; } ;
typedef TYPE_2__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,void*,int *,int *) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*,char*,long) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int) ;
 unsigned char* FUNC_5 (int ,long) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,long) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_2,OggVorbis_File *VAR_3,char *VAR_4,
       long VAR_5, ov_callbacks VAR_6){
  int VAR_7=(VAR_2?VAR_6.seek_func(VAR_2,0,VAR_1):-1);
  int VAR_8;

  FUNC_3(VAR_3,0,sizeof(*VAR_3));
  VAR_3->datasource=VAR_2;
  VAR_3->callbacks = VAR_6;


  VAR_3->oy=FUNC_6();





  if(VAR_4){
    unsigned char *VAR_9=FUNC_5(VAR_3->oy,VAR_5);
    FUNC_2(VAR_9,VAR_4,VAR_5);
    FUNC_7(VAR_3->oy,VAR_5);
  }


  if(VAR_7!=-1)VAR_3->seekable=1;



  VAR_3->links=1;
  VAR_3->vi=FUNC_1(VAR_3->links,sizeof(*VAR_3->vi));
  VAR_3->vc=FUNC_1(VAR_3->links,sizeof(*VAR_3->vc));
  VAR_3->os=FUNC_4(-1);


  if((VAR_8=FUNC_0(VAR_3,VAR_3->vi,VAR_3->vc,&VAR_3->current_serialno,((void*)0)))<0){
    VAR_3->datasource=((void*)0);
    FUNC_8(VAR_3);
  }else if(VAR_3->ready_state < VAR_0)
    VAR_3->ready_state=VAR_0;
  return(VAR_8);
}
