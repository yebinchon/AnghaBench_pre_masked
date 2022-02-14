
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long body_storage; long body_fill; void* body_data; } ;
typedef TYPE_1__ ogg_stream_state ;


 long VAR_0 ;
 void* FUNC_0 (void*,long) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(ogg_stream_state *VAR_1,long VAR_2){
  if(VAR_1->body_storage-VAR_2<=VAR_1->body_fill){
    long VAR_3;
    void *VAR_4;
    if(VAR_1->body_storage>VAR_0-VAR_2){
      FUNC_1(VAR_1);
      return -1;
    }
    VAR_3=VAR_1->body_storage+VAR_2;
    if(VAR_3<VAR_0-1024)VAR_3+=1024;
    VAR_4=FUNC_0(VAR_1->body_data,VAR_3*sizeof(*VAR_1->body_data));
    if(!VAR_4){
      FUNC_1(VAR_1);
      return -1;
    }
    VAR_1->body_storage=VAR_3;
    VAR_1->body_data=VAR_4;
  }
  return 0;
}
