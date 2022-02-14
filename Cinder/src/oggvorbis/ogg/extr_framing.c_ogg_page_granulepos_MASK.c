
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* header; } ;
typedef TYPE_1__ ogg_page ;
typedef int ogg_int64_t ;



ogg_int64_t FUNC_0(const ogg_page *VAR_0){
  unsigned char *VAR_1=VAR_0->header;
  ogg_int64_t VAR_2=VAR_1[13]&(0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[12]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[11]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[10]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[9]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[8]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[7]&0xff);
  VAR_2= (VAR_2<<8)|(VAR_1[6]&0xff);
  return(VAR_2);
}
