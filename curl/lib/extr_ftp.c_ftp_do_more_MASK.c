
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {scalar_t__ count1; void* wait_data_conn; int file; void* dont_check; scalar_t__ state; } ;
struct TYPE_6__ {scalar_t__ httpproxy; scalar_t__ tunnel_proxy; int * tcpconnect; } ;
struct TYPE_5__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_2__ bits; TYPE_1__ proto; struct Curl_easy* data; } ;
struct FTP {scalar_t__ transfer; int downloadsize; } ;
struct TYPE_8__ {void* prefer_ascii; scalar_t__ ftp_list_only; scalar_t__ upload; } ;
struct TYPE_7__ {scalar_t__ maxdownload; struct FTP* protop; } ;
struct Curl_easy {TYPE_4__ set; TYPE_3__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (struct connectdata*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct connectdata*) ;
 scalar_t__ FUNC_3 (struct connectdata*,size_t,int*) ;
 scalar_t__ FUNC_4 (struct connectdata*,size_t,int *,int ) ;
 scalar_t__ FUNC_5 (struct connectdata*,size_t) ;
 scalar_t__ FUNC_6 (struct connectdata*) ;
 int FUNC_7 (struct Curl_easy*,int,int,void*,int) ;
 int FUNC_8 (int ) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (struct connectdata*) ;
 scalar_t__ FUNC_10 (struct connectdata*,int*) ;
 size_t VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_11 (struct connectdata*) ;
 scalar_t__ FUNC_12 (struct connectdata*,int*) ;
 scalar_t__ FUNC_13 (struct connectdata*,void*,int ) ;
 int FUNC_14 (struct Curl_easy*,char*,...) ;

__attribute__((used)) static CURLcode FUNC_15(struct connectdata *VAR_9, int *VAR_10)
{
  struct Curl_easy *VAR_11 = VAR_9->data;
  struct ftp_conn *VAR_12 = &VAR_9->proto.ftpc;
  CURLcode VAR_13 = VAR_0;
  bool VAR_14 = VAR_1;
  bool VAR_15 = VAR_1;


  struct FTP *VAR_16 = VAR_11->req.protop;


  if(!VAR_9->bits.tcpconnect[VAR_7]) {
    if(FUNC_2(VAR_9)) {


      VAR_13 = FUNC_4(VAR_9, VAR_7, ((void*)0), 0);

      return VAR_13;
    }

    VAR_13 = FUNC_3(VAR_9, VAR_7, &VAR_14);


    if(VAR_14) {
      FUNC_8(FUNC_14(VAR_11, "DO-MORE connected phase starts\n"));
    }
    else {
      if(VAR_13 && (VAR_12->count1 == 0)) {
        *VAR_10 = -1;

        return FUNC_11(VAR_9);
      }
      return VAR_13;
    }
  }

  VAR_13 = FUNC_5(VAR_9, VAR_7);
  if(VAR_13)
    return VAR_13;

  if(FUNC_1())
    return VAR_13;

  if(VAR_9->bits.tunnel_proxy && VAR_9->bits.httpproxy &&
     FUNC_2(VAR_9))
    return VAR_13;


  if(VAR_12->state) {


    VAR_13 = FUNC_12(VAR_9, &VAR_15);

    *VAR_10 = (int)VAR_15;



    if(VAR_13 || !VAR_12->wait_data_conn)
      return VAR_13;




    *VAR_10 = 0;
  }

  if(VAR_16->transfer <= VAR_3) {



    if(VAR_12->wait_data_conn == VAR_8) {
      bool VAR_17;

      VAR_13 = FUNC_10(VAR_9, &VAR_17);
      if(VAR_13)
        return VAR_13;

      if(VAR_17) {

        VAR_13 = FUNC_0(VAR_9);
        VAR_12->wait_data_conn = VAR_1;
        if(!VAR_13)
          VAR_13 = FUNC_9(VAR_9);

        if(VAR_13)
          return VAR_13;

        *VAR_10 = 1;

      }
    }
    else if(VAR_11->set.upload) {
      VAR_13 = FUNC_13(VAR_9, VAR_11->set.prefer_ascii, VAR_6);
      if(VAR_13)
        return VAR_13;

      VAR_13 = FUNC_12(VAR_9, &VAR_15);

      *VAR_10 = (int)VAR_15;
    }
    else {

      VAR_16->downloadsize = -1;

      VAR_13 = FUNC_6(VAR_9);

      if(VAR_13 == VAR_0 && VAR_11->req.maxdownload >= 0) {

        VAR_12->dont_check = VAR_8;
      }

      if(VAR_13)
        ;
      else if(VAR_11->set.ftp_list_only || !VAR_12->file) {





        if(VAR_16->transfer == VAR_2) {
          VAR_13 = FUNC_13(VAR_9, VAR_8, VAR_4);
          if(VAR_13)
            return VAR_13;
        }

      }
      else {
        VAR_13 = FUNC_13(VAR_9, VAR_11->set.prefer_ascii, VAR_5);
        if(VAR_13)
          return VAR_13;
      }

      VAR_13 = FUNC_12(VAR_9, &VAR_15);
      *VAR_10 = (int)VAR_15;
    }
    return VAR_13;
  }


  FUNC_7(VAR_11, -1, -1, VAR_1, -1);

  if(!VAR_12->wait_data_conn) {

    *VAR_10 = 1;
    FUNC_8(FUNC_14(VAR_11, "DO-MORE phase ends with %d\n", (int)VAR_13));
  }

  return VAR_13;
}
