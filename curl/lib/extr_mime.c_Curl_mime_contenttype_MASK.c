
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctts ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;

const char *FUNC_2(const char *VAR_0)
{




  struct ContentType {
    const char *extension;
    const char *type;
  };
  static const struct ContentType VAR_1[] = {
    {".gif", "image/gif"},
    {".jpg", "image/jpeg"},
    {".jpeg", "image/jpeg"},
    {".png", "image/png"},
    {".svg", "image/svg+xml"},
    {".txt", "text/plain"},
    {".htm", "text/html"},
    {".html", "text/html"},
    {".pdf", "application/pdf"},
    {".xml", "application/xml"}
  };

  if(VAR_0) {
    size_t VAR_2 = FUNC_1(VAR_0);
    const char *VAR_3 = VAR_0 + VAR_2;
    unsigned int VAR_4;

    for(VAR_4 = 0; VAR_4 < sizeof(VAR_1) / sizeof(VAR_1[0]); VAR_4++) {
      size_t VAR_5 = FUNC_1(VAR_1[VAR_4].extension);

      if(VAR_2 >= VAR_5 && FUNC_0(VAR_3 - VAR_5, VAR_1[VAR_4].extension))
          return VAR_1[VAR_4].type;
    }
  }
  return ((void*)0);
}
