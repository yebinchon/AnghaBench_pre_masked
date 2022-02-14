
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Curl_chunker {int state; size_t hexindex; char* hexbuffer; size_t datasize; void* dataleft; } ;
struct connectdata {size_t trlPos; int* trailer; int trlMax; struct Curl_easy* data; struct Curl_chunker chunk; } ;
struct SingleRequest {int writer_stack; int ignorebody; } ;
struct TYPE_2__ {scalar_t__ http_te_skip; int http_ce_skip; } ;
struct Curl_easy {TYPE_1__ set; struct SingleRequest req; } ;
typedef size_t ssize_t ;
typedef size_t curl_off_t ;
typedef scalar_t__ CURLcode ;
typedef int CHUNKcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ,char*,size_t) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,int*,size_t) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (struct connectdata*,int ,char*,size_t) ;
 size_t VAR_10 ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (int*,char**,int,size_t*) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (char*,int ) ;

CHUNKcode FUNC_9(struct connectdata *VAR_11,
                              char *VAR_12,
                              ssize_t VAR_13,
                              ssize_t *VAR_14,
                              CURLcode *VAR_15)
{
  CURLcode VAR_16 = VAR_9;
  struct Curl_easy *VAR_17 = VAR_11->data;
  struct Curl_chunker *VAR_18 = &VAR_11->chunk;
  struct SingleRequest *VAR_19 = &VAR_17->req;
  size_t VAR_20;
  curl_off_t VAR_21 = (curl_off_t)VAR_13;
  size_t *VAR_22 = (size_t *)VAR_14;

  *VAR_22 = 0;



  if(VAR_17->set.http_te_skip && !VAR_19->ignorebody) {
    VAR_16 = FUNC_0(VAR_11, VAR_7, VAR_12, VAR_13);
    if(VAR_16) {
      *VAR_15 = VAR_16;
      return VAR_4;
    }
  }

  while(VAR_21) {
    switch(VAR_18->state) {
    case 134:
      if(FUNC_3(*VAR_12)) {
        if(VAR_18->hexindex < VAR_10) {
          VAR_18->hexbuffer[VAR_18->hexindex] = *VAR_12;
          VAR_12++;
          VAR_21--;
          VAR_18->hexindex++;
        }
        else {
          return VAR_6;
        }
      }
      else {
        char *VAR_23;
        if(0 == VAR_18->hexindex)


          return VAR_1;


        VAR_18->hexbuffer[VAR_18->hexindex] = 0;


        VAR_16 = FUNC_1(VAR_11->data, VAR_18->hexbuffer,
                                           VAR_18->hexindex);
        if(VAR_16) {


          return VAR_1;
        }

        if(FUNC_6(VAR_18->hexbuffer, &VAR_23, 16, &VAR_18->datasize))
          return VAR_1;
        VAR_18->state = 133;
      }
      break;

    case 133:

      if(*VAR_12 == 0x0a) {

        if(0 == VAR_18->datasize) {
          VAR_18->state = 130;
          VAR_11->trlPos = 0;
        }
        else
          VAR_18->state = 135;
      }

      VAR_12++;
      VAR_21--;
      break;

    case 135:



      VAR_20 = FUNC_5((VAR_18->datasize >= VAR_21)?VAR_21:VAR_18->datasize);


      if(!VAR_11->data->set.http_te_skip && !VAR_19->ignorebody) {
        if(!VAR_11->data->set.http_ce_skip && VAR_19->writer_stack)
          VAR_16 = FUNC_4(VAR_11, VAR_19->writer_stack, VAR_12, VAR_20);
        else
          VAR_16 = FUNC_0(VAR_11, VAR_7, VAR_12, VAR_20);

        if(VAR_16) {
          *VAR_15 = VAR_16;
          return VAR_4;
        }
      }

      *VAR_22 += VAR_20;
      VAR_18->datasize -= VAR_20;
      VAR_12 += VAR_20;
      VAR_21 -= VAR_20;

      if(0 == VAR_18->datasize)

        VAR_18->state = 132;
      break;

    case 132:
      if(*VAR_12 == 0x0a) {

        FUNC_2(VAR_11);
      }
      else if(*VAR_12 != 0x0d)
        return VAR_0;
      VAR_12++;
      VAR_21--;
      break;

    case 130:
      if((*VAR_12 == 0x0d) || (*VAR_12 == 0x0a)) {



        if(VAR_11->trlPos) {

          VAR_11->trailer[VAR_11->trlPos++] = 0x0d;
          VAR_11->trailer[VAR_11->trlPos++] = 0x0a;
          VAR_11->trailer[VAR_11->trlPos] = 0;


          VAR_16 = FUNC_1(VAR_11->data, VAR_11->trailer,
                                             VAR_11->trlPos);
          if(VAR_16)


            return VAR_0;

          if(!VAR_17->set.http_te_skip) {
            VAR_16 = FUNC_0(VAR_11, VAR_8,
                                       VAR_11->trailer, VAR_11->trlPos);
            if(VAR_16) {
              *VAR_15 = VAR_16;
              return VAR_4;
            }
          }
          VAR_11->trlPos = 0;
          VAR_18->state = 129;
          if(*VAR_12 == 0x0a)

            break;
        }
        else {

          VAR_18->state = 128;
          break;
        }
      }
      else {


        if(VAR_11->trlPos >= VAR_11->trlMax) {


          char *VAR_24;
          if(VAR_11->trlMax) {
            VAR_11->trlMax *= 2;
            VAR_24 = FUNC_8(VAR_11->trailer, VAR_11->trlMax + 3);
          }
          else {
            VAR_11->trlMax = 128;
            VAR_24 = FUNC_7(VAR_11->trlMax + 3);
          }
          if(!VAR_24)
            return VAR_3;
          VAR_11->trailer = VAR_24;
        }
        VAR_11->trailer[VAR_11->trlPos++]=*VAR_12;
      }
      VAR_12++;
      VAR_21--;
      break;

    case 129:
      if(*VAR_12 == 0x0a) {
        VAR_18->state = 128;
        VAR_12++;
        VAR_21--;
      }
      else
        return VAR_0;
      break;

    case 128:


      if((*VAR_12 != 0x0d) && (*VAR_12 != 0x0a)) {

        VAR_18->state = 130;
        break;
      }
      if(*VAR_12 == 0x0d) {

        VAR_12++;
        VAR_21--;
      }

      VAR_18->state = 131;
      break;

    case 131:
      if(*VAR_12 == 0x0a) {
        VAR_21--;



        VAR_18->dataleft = FUNC_5(VAR_21);

        return VAR_5;
      }
      else
        return VAR_0;
    }
  }
  return VAR_2;
}
