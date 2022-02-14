
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t bufbeg; size_t bufend; int* buf; scalar_t__ pos; } ;
typedef TYPE_1__ mime_encoder_state ;
struct TYPE_6__ {TYPE_1__ encstate; } ;
typedef TYPE_2__ curl_mimepart ;


 scalar_t__ VAR_0 ;



 char* VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,size_t) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_3, size_t VAR_4, bool VAR_5,
                              curl_mimepart *VAR_6)
{
  mime_encoder_state *VAR_7 = &VAR_6->encstate;
  char *VAR_8 = VAR_3;
  size_t VAR_9 = 0;
  int VAR_10;
  char VAR_11[4];





  while(VAR_7->bufbeg < VAR_7->bufend) {
    size_t VAR_12 = 1;
    size_t VAR_13 = 1;
    int VAR_14 = VAR_7->buf[VAR_7->bufbeg];
    VAR_11[0] = (char) VAR_14;
    VAR_11[1] = VAR_1[(VAR_14 >> 4) & 0xF];
    VAR_11[2] = VAR_1[VAR_14 & 0xF];

    switch(VAR_2[VAR_7->buf[VAR_7->bufbeg] & 0xFF]) {
    case 129:
      break;
    case 128:

      switch(FUNC_1(VAR_7, VAR_5, 1)) {
      case -1:
        return VAR_9;
      case 0:
        break;
      default:
        VAR_11[0] = '\x3D';
        VAR_12 = 3;
        break;
      }
      break;
    case 130:


      switch(FUNC_1(VAR_7, VAR_5, 0)) {
      case -1:
        return VAR_9;
      case 1:
        VAR_11[VAR_12++] = '\x0A';
        VAR_13 = 2;
        break;
      default:
        VAR_11[0] = '\x3D';
        VAR_12 = 3;
        break;
      }
      break;
    default:
      VAR_11[0] = '\x3D';
      VAR_12 = 3;
      break;
    }


    if(VAR_11[VAR_12 - 1] != '\x0A') {
      VAR_10 = VAR_7->pos + VAR_12 > VAR_0;
      if(!VAR_10 && VAR_7->pos + VAR_12 == VAR_0) {


        switch(FUNC_1(VAR_7, VAR_5, VAR_13)) {
        case -1:
          return VAR_9;
          break;
        case 0:
          VAR_10 = 1;
          break;
        }
      }
      if(VAR_10) {
        FUNC_2(VAR_11, "\x3D\x0D\x0A");
        VAR_12 = 3;
        VAR_13 = 0;
      }
    }


    if(VAR_12 > VAR_4)
      break;


    FUNC_0(VAR_8, VAR_11, VAR_12);
    VAR_9 += VAR_12;
    VAR_8 += VAR_12;
    VAR_4 -= VAR_12;
    VAR_7->pos += VAR_12;
    if(VAR_11[VAR_12 - 1] == '\x0A')
      VAR_7->pos = 0;
    VAR_7->bufbeg += VAR_13;
  }

  return VAR_9;
}
