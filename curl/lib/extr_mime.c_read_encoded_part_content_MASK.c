
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t bufbeg; size_t bufend; size_t buf; } ;
typedef TYPE_2__ mime_encoder_state ;
struct TYPE_9__ {TYPE_1__* encoder; TYPE_2__ encstate; } ;
typedef TYPE_3__ curl_mimepart ;
struct TYPE_7__ {size_t (* encodefunc ) (char*,size_t,int,TYPE_3__*) ;} ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (size_t,size_t,size_t) ;
 size_t FUNC_1 (TYPE_3__*,size_t,int) ;
 size_t FUNC_2 (char*,size_t,int,TYPE_3__*) ;

__attribute__((used)) static size_t FUNC_3(curl_mimepart *VAR_2,
                                        char *VAR_3, size_t VAR_4)
{
  mime_encoder_state *VAR_5 = &VAR_2->encstate;
  size_t VAR_6 = 0;
  size_t VAR_7;
  bool VAR_8 = VAR_0;

  while(VAR_4) {
    if(VAR_5->bufbeg < VAR_5->bufend || VAR_8) {

      VAR_7 = VAR_2->encoder->encodefunc(VAR_3, VAR_4, VAR_8, VAR_2);
      switch(VAR_7) {
      case 0:
        if(VAR_8)
          return VAR_6;
        break;
      case 130:
      case 129:
      case 128:
        return VAR_6? VAR_6: VAR_7;
      default:
        VAR_6 += VAR_7;
        VAR_3 += VAR_7;
        VAR_4 -= VAR_7;
        continue;
      }
    }


    if(VAR_5->bufbeg) {
      size_t VAR_9 = VAR_5->bufend - VAR_5->bufbeg;

      if(VAR_9)
        FUNC_0(VAR_5->buf, VAR_5->buf + VAR_5->bufbeg, VAR_9);
      VAR_5->bufbeg = 0;
      VAR_5->bufend = VAR_9;
    }
    if(VAR_5->bufend >= sizeof(VAR_5->buf))
      return VAR_6? VAR_6: 128;
    VAR_7 = FUNC_1(VAR_2, VAR_5->buf + VAR_5->bufend,
                           sizeof(VAR_5->buf) - VAR_5->bufend);
    switch(VAR_7) {
    case 0:
      VAR_8 = VAR_1;
      break;
    case 130:
    case 129:
    case 128:
      return VAR_6? VAR_6: VAR_7;
    default:
      VAR_5->bufend += VAR_7;
      break;
    }
  }

  return VAR_6;
}
