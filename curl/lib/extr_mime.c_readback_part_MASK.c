
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct curl_slist {char* data; int * next; } ;
struct TYPE_8__ {int state; scalar_t__ ptr; } ;
struct TYPE_7__ {int flags; scalar_t__ easy; TYPE_3__ state; int * fp; int kind; int encoder; int encstate; int * userheaders; int * curlheaders; } ;
typedef TYPE_1__ curl_mimepart ;
typedef scalar_t__ CURLcode ;




 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 int VAR_0 ;







 int VAR_1 ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct curl_slist*,char*,int) ;
 int FUNC_4 (TYPE_3__*,int const,int *) ;
 size_t FUNC_5 (TYPE_1__*,char*,size_t) ;
 size_t FUNC_6 (TYPE_1__*,char*,size_t) ;
 size_t FUNC_7 (TYPE_3__*,char*,size_t,char*,int,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static size_t FUNC_9(curl_mimepart *VAR_2,
                            char *VAR_3, size_t VAR_4)
{
  size_t VAR_5 = 0;






  while(VAR_4) {
    size_t VAR_6 = 0;
    struct curl_slist *VAR_7 = (struct curl_slist *) VAR_2->state.ptr;
    switch(VAR_2->state.state) {
    case 135:
      FUNC_4(&VAR_2->state,
                   (VAR_2->flags & VAR_1)?
                     134: 132,
                   VAR_2->curlheaders);
      break;
    case 129:
      if(!VAR_7) {
        FUNC_4(&VAR_2->state, 130, ((void*)0));
        break;
      }
      if(FUNC_3(VAR_7, "Content-Type", 12)) {
        FUNC_4(&VAR_2->state, 129, VAR_7->next);
        break;
      }

    case 132:
      if(!VAR_7)
        FUNC_4(&VAR_2->state, 129, VAR_2->userheaders);
      else {
        VAR_6 = FUNC_7(&VAR_2->state, VAR_3, VAR_4,
                            VAR_7->data, FUNC_8(VAR_7->data), "\r\n");
        if(!VAR_6)
          FUNC_4(&VAR_2->state, VAR_2->state.state, VAR_7->next);
      }
      break;
    case 130:
      VAR_6 = FUNC_7(&VAR_2->state, VAR_3, VAR_4, "\r\n", 2, "");
      if(!VAR_6)
        FUNC_4(&VAR_2->state, 134, ((void*)0));
      break;
    case 134:
      FUNC_1(&VAR_2->encstate);
      FUNC_4(&VAR_2->state, 133, ((void*)0));
      break;
    case 133:
      if(VAR_2->encoder)
        VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);
      else
        VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4);
      switch(VAR_6) {
      case 0:
        FUNC_4(&VAR_2->state, 131, ((void*)0));

        if(VAR_2->kind == VAR_0 && VAR_2->fp) {
          FUNC_2(VAR_2->fp);
          VAR_2->fp = ((void*)0);
        }

      case 137:
      case 136:
      case 128:
        return VAR_5? VAR_5: VAR_6;
      }
      break;
    case 131:
      return VAR_5;
    default:
      break;
    }


    VAR_5 += VAR_6;
    VAR_3 += VAR_6;
    VAR_4 -= VAR_6;
  }
  return VAR_5;
}
