
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* nextpart; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_9__ {int state; int offset; TYPE_1__* ptr; } ;
struct TYPE_8__ {char* boundary; scalar_t__ easy; TYPE_4__ state; TYPE_1__* firstpart; } ;
typedef TYPE_2__ curl_mime ;
typedef scalar_t__ CURLcode ;




 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;







 int FUNC_1 (TYPE_4__*,int const,TYPE_1__*) ;
 size_t FUNC_2 (TYPE_4__*,char*,size_t,char*,int,char*) ;
 size_t FUNC_3 (TYPE_1__*,char*,size_t) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static size_t FUNC_5(char *VAR_0, size_t VAR_1, size_t VAR_2,
                                 void *VAR_3)
{
  curl_mime *VAR_4 = (curl_mime *) VAR_3;
  size_t VAR_5 = 0;




  (void) VAR_1;

  while(VAR_2) {
    size_t VAR_6 = 0;
    curl_mimepart *VAR_7 = VAR_4->state.ptr;
    switch(VAR_4->state.state) {
    case 134:
    case 133:



      FUNC_1(&VAR_4->state, 132, VAR_4->firstpart);



      VAR_4->state.offset += 2;
      break;
    case 132:
      VAR_6 = FUNC_2(&VAR_4->state, VAR_0, VAR_2, "\r\n--", 4, "");
      if(!VAR_6)
        FUNC_1(&VAR_4->state, 131, VAR_7);
      break;
    case 131:
      VAR_6 = FUNC_2(&VAR_4->state, VAR_0, VAR_2, VAR_4->boundary,
                          FUNC_4(VAR_4->boundary), VAR_7? "\r\n": "--\r\n");
      if(!VAR_6) {
        FUNC_1(&VAR_4->state, 130, VAR_7);
      }
      break;
    case 130:
      if(!VAR_7) {
        FUNC_1(&VAR_4->state, 129, ((void*)0));
        break;
      }
      VAR_6 = FUNC_3(VAR_7, VAR_0, VAR_2);
      switch(VAR_6) {
      case 136:
      case 135:
      case 128:
        return VAR_5? VAR_5: VAR_6;
      case 0:



        FUNC_1(&VAR_4->state, 132, VAR_7->nextpart);
        break;
      }
      break;
    case 129:
      return VAR_5;
    default:
      break;
    }


    VAR_5 += VAR_6;
    VAR_0 += VAR_6;
    VAR_2 -= VAR_6;
  }
  return VAR_5;
}
