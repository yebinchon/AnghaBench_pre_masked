
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftp_conn {char** dirs; int dirdepth; char const* file; char* prevpath; void* cwddone; void* cwdfail; void* ctl_valid; } ;
struct TYPE_7__ {scalar_t__ reuse; } ;
struct TYPE_6__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_3__ bits; TYPE_2__ proto; struct Curl_easy* data; } ;
struct FTP {scalar_t__ transfer; int path; } ;
struct TYPE_8__ {int ftp_filemethod; scalar_t__ upload; } ;
struct TYPE_5__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_4__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,int ,int ,char**,size_t*,void*) ;
 int FUNC_1 (int) ;
 void* VAR_3 ;



 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* FUNC_2 (int,size_t) ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 char* FUNC_6 (char const*,char) ;
 char const* FUNC_7 (char const*) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 int FUNC_10 (char*,char const*,size_t) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static
CURLcode FUNC_12(struct connectdata *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_6->data;

  struct FTP *VAR_8 = VAR_7->req.protop;
  struct ftp_conn *VAR_9 = &VAR_6->proto.ftpc;
  const char *VAR_10 = ((void*)0);
  const char *VAR_11 = ((void*)0);
  CURLcode VAR_12 = VAR_0;
  char *VAR_13 = ((void*)0);
  size_t VAR_14 = 0;

  VAR_9->ctl_valid = VAR_3;
  VAR_9->cwdfail = VAR_3;


  VAR_12 = FUNC_0(VAR_7, VAR_8->path, 0, &VAR_13, &VAR_14, VAR_5);
  if(VAR_12)
    return VAR_12;

  switch(VAR_7->set.ftp_filemethod) {
    case 129:

      if((VAR_14 > 0) && (VAR_13[VAR_14 - 1] != '/'))
          VAR_11 = VAR_13;






      break;

    case 128:
      VAR_10 = FUNC_11(VAR_13, '/');
      if(VAR_10) {

        size_t VAR_15 = VAR_10 - VAR_13;
        if(VAR_15 == 0)
            VAR_15++;

        VAR_9->dirs = FUNC_2(1, sizeof(VAR_9->dirs[0]));
        if(!VAR_9->dirs) {
          FUNC_4(VAR_13);
          return VAR_1;
        }

        VAR_9->dirs[0] = FUNC_2(1, VAR_15 + 1);
        if(!VAR_9->dirs[0]) {
          FUNC_4(VAR_13);
          return VAR_1;
        }

        FUNC_10(VAR_9->dirs[0], VAR_13, VAR_15);
        VAR_9->dirdepth = 1;
        VAR_11 = VAR_10 + 1;
      }
      else
        VAR_11 = VAR_13;
      break;

    default:
    case 130: {

      const char *VAR_16 = VAR_13;

      int VAR_17 = 0;
      const char *VAR_18 = VAR_13;
      for(; *VAR_18 != 0; ++VAR_18)
        if (*VAR_18 == '/')
          ++VAR_17;

      if(VAR_17 > 0) {
        VAR_9->dirs = FUNC_2(VAR_17, sizeof(VAR_9->dirs[0]));
        if(!VAR_9->dirs) {
          FUNC_4(VAR_13);
          return VAR_1;
        }


        while((VAR_10 = FUNC_6(VAR_16, '/')) != ((void*)0)) {
          size_t VAR_19 = VAR_10 - VAR_16;


          if((VAR_19 == 0) && (VAR_9->dirdepth == 0))
            ++VAR_19;




          if(VAR_19 > 0) {
            char *VAR_20 = FUNC_2(1, VAR_19 + 1);
            if(!VAR_20) {
              FUNC_4(VAR_13);
              return VAR_1;
            }
            FUNC_10(VAR_20, VAR_16, VAR_19);
            VAR_9->dirs[VAR_9->dirdepth++] = VAR_20;
          }
          VAR_16 = VAR_10 + 1;
        }
      }
      FUNC_1(VAR_9->dirdepth <= VAR_17);
      VAR_11 = VAR_16;
    }
    break;
  }

  if(VAR_11 && *VAR_11)
    VAR_9->file = FUNC_7(VAR_11);
  else
    VAR_9->file = ((void*)0);


  if(VAR_7->set.upload && !VAR_9->file && (VAR_8->transfer == VAR_4)) {

    FUNC_3(VAR_7, "Uploading to a URL without a file name!");
    FUNC_4(VAR_13);
    return VAR_2;
  }

  VAR_9->cwddone = VAR_3;

  if((VAR_7->set.ftp_filemethod == 129) && (VAR_13[0] == '/'))
    VAR_9->cwddone = VAR_5;
  else {
    const char *VAR_21 = VAR_6->bits.reuse ? VAR_9->prevpath : "";
    if(VAR_21) {
      size_t VAR_22 = VAR_14;
      if(VAR_7->set.ftp_filemethod == 129)
        VAR_22 = 0;
      else
        VAR_22 -= VAR_9->file?FUNC_8(VAR_9->file):0;

      if((FUNC_8(VAR_21) == VAR_22) && !FUNC_9(VAR_13, VAR_21, VAR_22)) {
        FUNC_5(VAR_7, "Request has same path as previous transfer\n");
        VAR_9->cwddone = VAR_5;
      }
    }
  }

  FUNC_4(VAR_13);
  return VAR_0;
}
