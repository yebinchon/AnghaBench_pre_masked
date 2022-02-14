
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ogg_uint32_t ;
struct TYPE_3__ {int* header; int header_len; int body_len; int* body; } ;
typedef TYPE_1__ ogg_page ;


 int* VAR_0 ;

void FUNC_0(ogg_page *VAR_1){
  if(VAR_1){
    ogg_uint32_t VAR_2=0;
    int VAR_3;


    VAR_1->header[22]=0;
    VAR_1->header[23]=0;
    VAR_1->header[24]=0;
    VAR_1->header[25]=0;

    for(VAR_3=0;VAR_3<VAR_1->header_len;VAR_3++)
      VAR_2=(VAR_2<<8)^VAR_0[((VAR_2 >> 24)&0xff)^VAR_1->header[VAR_3]];
    for(VAR_3=0;VAR_3<VAR_1->body_len;VAR_3++)
      VAR_2=(VAR_2<<8)^VAR_0[((VAR_2 >> 24)&0xff)^VAR_1->body[VAR_3]];

    VAR_1->header[22]=(unsigned char)(VAR_2&0xff);
    VAR_1->header[23]=(unsigned char)((VAR_2>>8)&0xff);
    VAR_1->header[24]=(unsigned char)((VAR_2>>16)&0xff);
    VAR_1->header[25]=(unsigned char)((VAR_2>>24)&0xff);
  }
}
