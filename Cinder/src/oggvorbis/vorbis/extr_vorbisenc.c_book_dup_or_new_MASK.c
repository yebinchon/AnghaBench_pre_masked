
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int static_codebook ;
struct TYPE_3__ {int books; int const** book_param; } ;
typedef TYPE_1__ codec_setup_info ;



__attribute__((used)) static int FUNC_0(codec_setup_info *VAR_0,const static_codebook *VAR_1){
  int VAR_2;
  for(VAR_2=0;VAR_2<VAR_0->books;VAR_2++)
    if(VAR_0->book_param[VAR_2]==VAR_1)return(VAR_2);

  return(VAR_0->books++);
}
