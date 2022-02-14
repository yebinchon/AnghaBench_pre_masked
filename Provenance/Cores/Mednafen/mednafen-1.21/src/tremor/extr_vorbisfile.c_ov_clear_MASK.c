
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* close_func ) (scalar_t__) ;} ;
struct TYPE_6__ {int links; scalar_t__ datasource; TYPE_1__ callbacks; int oy; scalar_t__ offsets; scalar_t__ serialnos; scalar_t__ pcmlengths; scalar_t__ dataoffsets; scalar_t__ vc; scalar_t__ vi; int os; int vd; int vb; } ;
typedef TYPE_2__ OggVorbis_File ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(OggVorbis_File *VAR_0){
  if(VAR_0){
    FUNC_6(&VAR_0->vb);
    FUNC_8(&VAR_0->vd);
    FUNC_3(&VAR_0->os);

    if(VAR_0->vi && VAR_0->links){
      int VAR_1;
      for(VAR_1=0;VAR_1<VAR_0->links;VAR_1++){
        FUNC_9(VAR_0->vi+VAR_1);
        FUNC_7(VAR_0->vc+VAR_1);
      }
      FUNC_1(VAR_0->vi);
      FUNC_1(VAR_0->vc);
    }
    if(VAR_0->dataoffsets)FUNC_1(VAR_0->dataoffsets);
    if(VAR_0->pcmlengths)FUNC_1(VAR_0->pcmlengths);
    if(VAR_0->serialnos)FUNC_1(VAR_0->serialnos);
    if(VAR_0->offsets)FUNC_1(VAR_0->offsets);
    FUNC_4(&VAR_0->oy);
    if(VAR_0->datasource && VAR_0->callbacks.close_func)
      (VAR_0->callbacks.close_func)(VAR_0->datasource);
    FUNC_2(VAR_0,0,sizeof(*VAR_0));
  }



  return(0);
}
