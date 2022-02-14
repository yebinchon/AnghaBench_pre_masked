
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {size_t eob; scalar_t__ strip; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct SingleRequest {int keepon; } ;
struct Curl_easy {struct SingleRequest req; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

CURLcode FUNC_1(struct connectdata *VAR_7, char *VAR_8, size_t VAR_9)
{

  CURLcode VAR_10 = VAR_1;
  struct Curl_easy *VAR_11 = VAR_7->data;
  struct SingleRequest *VAR_12 = &VAR_11->req;

  struct pop3_conn *VAR_13 = &VAR_7->proto.pop3c;
  bool VAR_14 = VAR_2;
  size_t VAR_15 = 0;
  size_t VAR_16;






  for(VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
    size_t VAR_17 = VAR_13->eob;

    switch(VAR_8[VAR_16]) {
    case 0x0d:
      if(VAR_13->eob == 0) {
        VAR_13->eob++;

        if(VAR_16) {

          VAR_10 = FUNC_0(VAR_7, VAR_0, &VAR_8[VAR_15],
                                     VAR_16 - VAR_15);

          if(VAR_10)
            return VAR_10;

          VAR_15 = VAR_16;
        }
      }
      else if(VAR_13->eob == 3)
        VAR_13->eob++;
      else


        VAR_13->eob = 1;
      break;

    case 0x0a:
      if(VAR_13->eob == 1 || VAR_13->eob == 4)
        VAR_13->eob++;
      else


        VAR_13->eob = 0;
      break;

    case 0x2e:
      if(VAR_13->eob == 2)
        VAR_13->eob++;
      else if(VAR_13->eob == 3) {

        VAR_14 = VAR_6;
        VAR_13->eob = 0;
      }
      else


        VAR_13->eob = 0;
      break;

    default:
      VAR_13->eob = 0;
      break;
    }


    if(VAR_17 && VAR_17 >= VAR_13->eob) {



      while(VAR_17 && VAR_13->strip) {
        VAR_17--;
        VAR_13->strip--;
      }

      if(VAR_17) {


        VAR_10 = FUNC_0(VAR_7, VAR_0, (char *)VAR_4,
                                   VAR_14 ? VAR_17 - 1 : VAR_17);

        if(VAR_10)
          return VAR_10;

        VAR_15 = VAR_16;
        VAR_14 = VAR_2;
      }
    }
  }

  if(VAR_13->eob == VAR_5) {



    VAR_10 = FUNC_0(VAR_7, VAR_0, (char *)VAR_4, 2);

    VAR_12->keepon &= ~VAR_3;
    VAR_13->eob = 0;

    return VAR_10;
  }

  if(VAR_13->eob)

    return VAR_1;

  if(VAR_9 - VAR_15) {
    VAR_10 = FUNC_0(VAR_7, VAR_0, &VAR_8[VAR_15],
                               VAR_9 - VAR_15);
  }

  return VAR_10;
}
