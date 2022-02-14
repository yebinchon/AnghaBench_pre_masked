
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_handler {int flags; } ;
struct Curl_URL {char* user; char* password; char* options; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int,char**,char**,char**) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static CURLUcode FUNC_3(struct Curl_URL *VAR_5,
                                      const struct Curl_handler *VAR_6,
                                      char **VAR_7,
                                      unsigned int VAR_8)
{
  CURLUcode VAR_9 = VAR_1;
  CURLcode VAR_10;
  char *VAR_11 = ((void*)0);
  char *VAR_12 = ((void*)0);
  char *VAR_13 = ((void*)0);
  char *VAR_14 = FUNC_2(*VAR_7, '@');
  char *VAR_15 = *VAR_7;

  if(!VAR_14)
    goto out;




  *VAR_7 = ++VAR_14;



  VAR_10 = FUNC_0(VAR_15, VAR_14 - VAR_15 - 1,
                                   &VAR_11, &VAR_12,
                                   (VAR_6 && (VAR_6->flags & VAR_4)) ?
                                   &VAR_13:((void*)0));
  if(VAR_10) {
    VAR_9 = VAR_0;
    goto out;
  }

  if(VAR_11) {
    if(VAR_8 & VAR_3) {

      VAR_9 = VAR_2;
      goto out;
    }

    VAR_5->user = VAR_11;
  }

  if(VAR_12)
    VAR_5->password = VAR_12;

  if(VAR_13)
    VAR_5->options = VAR_13;

  return VAR_1;
  out:

  FUNC_1(VAR_11);
  FUNC_1(VAR_12);
  FUNC_1(VAR_13);

  return VAR_9;
}
