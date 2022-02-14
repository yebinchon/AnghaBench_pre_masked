
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* header; } ;
typedef TYPE_1__ ogg_page ;



int FUNC_0(const ogg_page *VAR_0){
  return(VAR_0->header[14] |
         (VAR_0->header[15]<<8) |
         (VAR_0->header[16]<<16) |
         (VAR_0->header[17]<<24));
}
