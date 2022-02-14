
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lacing_fill; int b_o_s; int* lacing_vals; int* granule_vals; int* header; long serialno; int pageno; int header_fill; scalar_t__ body_returned; scalar_t__ body_data; scalar_t__ e_o_s; } ;
typedef TYPE_1__ ogg_stream_state ;
struct TYPE_8__ {int* header; int header_len; int body_len; scalar_t__ body; } ;
typedef TYPE_2__ ogg_page ;
typedef int ogg_int64_t ;


 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(ogg_stream_state *VAR_0,ogg_page *VAR_1, int VAR_2, int VAR_3){
  int VAR_4;
  int VAR_5=0;
  int VAR_6=(VAR_0->lacing_fill>255?255:VAR_0->lacing_fill);
  int VAR_7=0;
  long VAR_8=0;
  ogg_int64_t VAR_9=-1;

  if(FUNC_3(VAR_0)) return(0);
  if(VAR_6==0) return(0);






  if(VAR_0->b_o_s==0){
    VAR_9=0;
    for(VAR_5=0;VAR_5<VAR_6;VAR_5++){
      if((VAR_0->lacing_vals[VAR_5]&0x0ff)<255){
        VAR_5++;
        break;
      }
    }
  }else{
    int VAR_10=0;
    int VAR_11=0;
    for(VAR_5=0;VAR_5<VAR_6;VAR_5++){
      if(VAR_8>VAR_3 && VAR_11>=4){
        VAR_2=1;
        break;
      }
      VAR_8+=VAR_0->lacing_vals[VAR_5]&0x0ff;
      if((VAR_0->lacing_vals[VAR_5]&0xff)<255){
        VAR_9=VAR_0->granule_vals[VAR_5];
        VAR_11=++VAR_10;
      }else
        VAR_11=0;
    }
    if(VAR_5==255)VAR_2=1;
  }

  if(!VAR_2) return(0);


  FUNC_0(VAR_0->header,"OggS",4);


  VAR_0->header[4]=0x00;


  VAR_0->header[5]=0x00;
  if((VAR_0->lacing_vals[0]&0x100)==0)VAR_0->header[5]|=0x01;

  if(VAR_0->b_o_s==0)VAR_0->header[5]|=0x02;

  if(VAR_0->e_o_s && VAR_0->lacing_fill==VAR_5)VAR_0->header[5]|=0x04;
  VAR_0->b_o_s=1;


  for(VAR_4=6;VAR_4<14;VAR_4++){
    VAR_0->header[VAR_4]=(unsigned char)(VAR_9&0xff);
    VAR_9>>=8;
  }


  {
    long VAR_12=VAR_0->serialno;
    for(VAR_4=14;VAR_4<18;VAR_4++){
      VAR_0->header[VAR_4]=(unsigned char)(VAR_12&0xff);
      VAR_12>>=8;
    }
  }



  if(VAR_0->pageno==-1)VAR_0->pageno=0;




  {
    long VAR_13=VAR_0->pageno++;
    for(VAR_4=18;VAR_4<22;VAR_4++){
      VAR_0->header[VAR_4]=(unsigned char)(VAR_13&0xff);
      VAR_13>>=8;
    }
  }


  VAR_0->header[22]=0;
  VAR_0->header[23]=0;
  VAR_0->header[24]=0;
  VAR_0->header[25]=0;


  VAR_0->header[26]=(unsigned char)(VAR_5&0xff);
  for(VAR_4=0;VAR_4<VAR_5;VAR_4++)
    VAR_7+=VAR_0->header[VAR_4+27]=(unsigned char)(VAR_0->lacing_vals[VAR_4]&0xff);


  VAR_1->header=VAR_0->header;
  VAR_1->header_len=VAR_0->header_fill=VAR_5+27;
  VAR_1->body=VAR_0->body_data+VAR_0->body_returned;
  VAR_1->body_len=VAR_7;



  VAR_0->lacing_fill-=VAR_5;
  FUNC_1(VAR_0->lacing_vals,VAR_0->lacing_vals+VAR_5,VAR_0->lacing_fill*sizeof(*VAR_0->lacing_vals));
  FUNC_1(VAR_0->granule_vals,VAR_0->granule_vals+VAR_5,VAR_0->lacing_fill*sizeof(*VAR_0->granule_vals));
  VAR_0->body_returned+=VAR_7;



  FUNC_2(VAR_1);


  return(1);
}
