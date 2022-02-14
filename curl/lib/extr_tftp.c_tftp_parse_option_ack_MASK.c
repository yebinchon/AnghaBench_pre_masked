
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int blksize; long requested_blksize; TYPE_1__* conn; } ;
typedef TYPE_3__ tftp_state_data_t ;
struct TYPE_6__ {int upload; } ;
struct Curl_easy {TYPE_2__ set; } ;
struct TYPE_5__ {struct Curl_easy* data; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,long) ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct Curl_easy*,char*,...) ;
 int FUNC_3 (struct Curl_easy*,char*,char const*,...) ;
 long FUNC_4 (char const*,int *,int) ;
 char* FUNC_5 (char const*,int,char const**,char const**) ;

__attribute__((used)) static CURLcode FUNC_6(tftp_state_data_t *VAR_7,
                                      const char *VAR_8, int VAR_9)
{
  const char *VAR_10 = VAR_8;
  struct Curl_easy *VAR_11 = VAR_7->conn->data;


  VAR_7->blksize = VAR_2;

  while(VAR_10 < VAR_8 + VAR_9) {
    const char *VAR_12, *VAR_13;

    VAR_10 = FUNC_5(VAR_10, VAR_8 + VAR_9 - VAR_10, &VAR_12, &VAR_13);
    if(VAR_10 == ((void*)0)) {
      FUNC_2(VAR_11, "Malformed ACK packet, rejecting");
      return VAR_1;
    }

    FUNC_3(VAR_11, "got option=(%s) value=(%s)\n", VAR_12, VAR_13);

    if(FUNC_1(VAR_12, VAR_5)) {
      long VAR_14;

      VAR_14 = FUNC_4(VAR_13, ((void*)0), 10);

      if(!VAR_14) {
        FUNC_2(VAR_11, "invalid blocksize value in OACK packet");
        return VAR_1;
      }
      if(VAR_14 > VAR_3) {
        FUNC_2(VAR_11, "%s (%d)", "blksize is larger than max supported",
              VAR_3);
        return VAR_1;
      }
      else if(VAR_14 < VAR_4) {
        FUNC_2(VAR_11, "%s (%d)", "blksize is smaller than min supported",
              VAR_4);
        return VAR_1;
      }
      else if(VAR_14 > VAR_7->requested_blksize) {



        FUNC_2(VAR_11, "%s (%ld)",
              "server requested blksize larger than allocated", VAR_14);
        return VAR_1;
      }

      VAR_7->blksize = (int)VAR_14;
      FUNC_3(VAR_11, "%s (%d) %s (%d)\n", "blksize parsed from OACK",
            VAR_7->blksize, "requested", VAR_7->requested_blksize);
    }
    else if(FUNC_1(VAR_12, VAR_6)) {
      long VAR_15 = 0;

      VAR_15 = FUNC_4(VAR_13, ((void*)0), 10);
      FUNC_3(VAR_11, "%s (%ld)\n", "tsize parsed from OACK", VAR_15);



      if(!VAR_11->set.upload) {
        if(!VAR_15) {
          FUNC_2(VAR_11, "invalid tsize -:%s:- value in OACK packet", VAR_13);
          return VAR_1;
        }
        FUNC_0(VAR_11, VAR_15);
      }
    }
  }

  return VAR_0;
}
