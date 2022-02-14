
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_block_had_trailing_cr; int crlf_conversions; } ;
struct Curl_easy {TYPE_1__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char,size_t) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static size_t FUNC_3(struct Curl_easy *VAR_2,
                               char *VAR_3, size_t VAR_4)
{
  char *VAR_5, *VAR_6;


  if((VAR_3 == ((void*)0)) || (VAR_4 < 1)) {
    return VAR_4;
  }

  if(VAR_2->state.prev_block_had_trailing_cr) {


    if(*VAR_3 == '\n') {


      FUNC_2(VAR_3, VAR_3 + 1, VAR_4-1);
      VAR_4--;

      VAR_2->state.crlf_conversions++;
    }
    VAR_2->state.prev_block_had_trailing_cr = VAR_0;
  }


  VAR_5 = VAR_6 = FUNC_0(VAR_3, '\r', VAR_4);
  if(VAR_5) {

    while(VAR_5 < (VAR_3 + VAR_4-1)) {

      if(FUNC_1(VAR_5, "\r\n", 2) == 0) {

        VAR_5++;
        *VAR_6 = *VAR_5;

        VAR_2->state.crlf_conversions++;
      }
      else {
        if(*VAR_5 == '\r') {

          *VAR_6 = '\n';
        }
        else {

          *VAR_6 = *VAR_5;
        }
      }
      VAR_6++;
      VAR_5++;
    }

    if(VAR_5 < VAR_3 + VAR_4) {

      if(*VAR_5 == '\r') {

        *VAR_6 = '\n';

        VAR_2->state.prev_block_had_trailing_cr = VAR_1;
      }
      else {

        *VAR_6 = *VAR_5;
      }
      VAR_6++;
    }
    if(VAR_6 < VAR_3 + VAR_4)

      *VAR_6 = '\0';

    return (VAR_6 - VAR_3);
  }
  return VAR_4;
}
