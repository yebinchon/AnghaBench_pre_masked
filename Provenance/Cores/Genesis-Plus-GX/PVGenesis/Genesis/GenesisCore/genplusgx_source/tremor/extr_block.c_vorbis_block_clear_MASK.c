
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ localstore; } ;
typedef TYPE_1__ vorbis_block ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(vorbis_block *VAR_0){
  FUNC_1(VAR_0);
  if(VAR_0->localstore)FUNC_0(VAR_0->localstore);

  FUNC_2(VAR_0,0,sizeof(*VAR_0));
  return(0);
}
