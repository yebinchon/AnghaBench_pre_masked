
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {size_t (* fwrite_rtp ) (char*,int,size_t,void*) ;size_t (* fwrite_func ) (char*,int,size_t,void*) ;void* out; void* rtp_out; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef size_t (* curl_write_callback ) (char*,int,size_t,void*) ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct Curl_easy*,int) ;
 int FUNC_1 (struct Curl_easy*,char*) ;

__attribute__((used)) static
CURLcode FUNC_2(struct connectdata *VAR_3, char *VAR_4, size_t VAR_5)
{
  struct Curl_easy *VAR_6 = VAR_3->data;
  size_t VAR_7;
  curl_write_callback VAR_8;
  void *VAR_9;

  if(VAR_5 == 0) {
    FUNC_1(VAR_6, "Cannot write a 0 size RTP packet.");
    return VAR_1;
  }





  if(VAR_6->set.fwrite_rtp) {
    VAR_8 = VAR_6->set.fwrite_rtp;
    VAR_9 = VAR_6->set.rtp_out;
  }
  else {
    VAR_8 = VAR_6->set.fwrite_func;
    VAR_9 = VAR_6->set.out;
  }

  FUNC_0(VAR_6, 1);
  VAR_7 = VAR_8(VAR_4, 1, VAR_5, VAR_9);
  FUNC_0(VAR_6, 0);

  if(VAR_2 == VAR_7) {
    FUNC_1(VAR_6, "Cannot pause RTP");
    return VAR_1;
  }

  if(VAR_7 != VAR_5) {
    FUNC_1(VAR_6, "Failed writing RTP data");
    return VAR_1;
  }

  return VAR_0;
}
