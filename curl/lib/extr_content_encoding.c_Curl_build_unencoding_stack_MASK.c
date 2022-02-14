
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct SingleRequest {int * writer_stack; int chunk; } ;
struct Curl_easy {struct SingleRequest req; } ;
typedef int content_encoding ;
typedef int contenc_writer ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connectdata*) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (char const*,size_t) ;
 void* FUNC_3 (struct connectdata*,int const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

CURLcode FUNC_5(struct connectdata *VAR_5,
                                     const char *VAR_6, int VAR_7)
{
  struct Curl_easy *VAR_8 = VAR_5->data;
  struct SingleRequest *VAR_9 = &VAR_8->req;

  do {
    const char *VAR_10;
    size_t VAR_11;


    while(FUNC_1(*VAR_6) || *VAR_6 == ',')
      VAR_6++;

    VAR_10 = VAR_6;

    for(VAR_11 = 0; *VAR_6 && *VAR_6 != ','; VAR_6++)
      if(!FUNC_1(*VAR_6))
        VAR_11 = VAR_6 - VAR_10 + 1;


    if(VAR_7 && VAR_11 == 7 && FUNC_4(VAR_10, "chunked", 7)) {
      VAR_9->chunk = VAR_2;
      FUNC_0(VAR_5);
    }
    else if(VAR_11) {
      const content_encoding *VAR_12 = FUNC_2(VAR_10, VAR_11);
      contenc_writer *VAR_13;

      if(!VAR_9->writer_stack) {
        VAR_9->writer_stack = FUNC_3(VAR_5, &VAR_3, ((void*)0));

        if(!VAR_9->writer_stack)
          return VAR_1;
      }

      if(!VAR_12)
        VAR_12 = &VAR_4;


      VAR_13 = FUNC_3(VAR_5, VAR_12, VAR_9->writer_stack);
      if(!VAR_13)
        return VAR_1;
      VAR_9->writer_stack = VAR_13;
    }
  } while(*VAR_6);

  return VAR_0;
}
