
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timebuf ;
typedef scalar_t__ time_t ;
struct tm {size_t tm_mon; int tm_sec; int tm_min; int tm_hour; int tm_year; int tm_mday; int tm_wday; } ;
struct ftp_conn {int file; } ;
struct TYPE_7__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct FTP {void* transfer; } ;
struct TYPE_10__ {scalar_t__ filetime; void* timecond; } ;
struct TYPE_9__ {int timecondition; scalar_t__ timevalue; int get_filetime; int opt_no_body; } ;
struct TYPE_8__ {int * buffer; } ;
struct TYPE_6__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_5__ info; TYPE_4__ set; TYPE_3__ state; TYPE_1__ req; } ;
typedef int headerbuf ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ FUNC_0 (struct connectdata*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,struct tm*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (char*,scalar_t__*) ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 int FUNC_6 (char*,int,char*,int,int,int,int,int,int,...) ;
 int FUNC_7 (int *,char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_8 (struct connectdata*,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static CURLcode FUNC_10(struct connectdata *VAR_8,
                                    int VAR_9)
{
  CURLcode VAR_10 = VAR_2;
  struct Curl_easy *VAR_11 = VAR_8->data;
  struct FTP *VAR_12 = VAR_11->req.protop;
  struct ftp_conn *VAR_13 = &VAR_8->proto.ftpc;

  switch(VAR_9) {
  case 213:
    {


      int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
      if(6 == FUNC_7(&VAR_11->state.buffer[4], "%04d%02d%02d%02d%02d%02d",
                     &VAR_14, &VAR_15, &VAR_16, &VAR_17, &VAR_18, &VAR_19)) {

        char VAR_20[24];
        time_t VAR_21 = FUNC_9(((void*)0));

        FUNC_6(VAR_20, sizeof(VAR_20),
                  "%04d%02d%02d %02d:%02d:%02d GMT",
                  VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

        VAR_11->info.filetime = FUNC_2(VAR_20, &VAR_21);
      }
    }
    break;
  default:
    FUNC_5(VAR_11, "unsupported MDTM reply format\n");
    break;
  case 550:
    FUNC_3(VAR_11, "Given file does not exist");
    VAR_10 = VAR_1;
    break;
  }

  if(VAR_11->set.timecondition) {
    if((VAR_11->info.filetime > 0) && (VAR_11->set.timevalue > 0)) {
      switch(VAR_11->set.timecondition) {
      case 129:
      default:
        if(VAR_11->info.filetime <= VAR_11->set.timevalue) {
          FUNC_5(VAR_11, "The requested document is not new enough\n");
          VAR_12->transfer = VAR_5;
          VAR_11->info.timecond = VAR_7;
          FUNC_8(VAR_8, VAR_6);
          return VAR_2;
        }
        break;
      case 128:
        if(VAR_11->info.filetime > VAR_11->set.timevalue) {
          FUNC_5(VAR_11, "The requested document is not old enough\n");
          VAR_12->transfer = VAR_5;
          VAR_11->info.timecond = VAR_7;
          FUNC_8(VAR_8, VAR_6);
          return VAR_2;
        }
        break;
      }
    }
    else {
      FUNC_5(VAR_11, "Skipping time comparison\n");
    }
  }

  if(!VAR_10)
    VAR_10 = FUNC_4(VAR_8);

  return VAR_10;
}
