
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OggVorbis_File ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int *,int *,int ) ;

int FUNC_3(const char *VAR_0,OggVorbis_File *VAR_1){
  int VAR_2;
  FILE *VAR_3 = FUNC_1(VAR_0,"rb");
  if(!VAR_3) return -1;

  VAR_2 = FUNC_2(VAR_3,VAR_1,((void*)0),0);
  if(VAR_2) FUNC_0(VAR_3);
  return VAR_2;
}
