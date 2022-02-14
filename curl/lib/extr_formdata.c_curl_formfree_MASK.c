
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_httppost {int flags; struct curl_httppost* showfilename; struct curl_httppost* contenttype; struct curl_httppost* contents; struct curl_httppost* name; struct curl_httppost* more; struct curl_httppost* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct curl_httppost*) ;

void FUNC_1(struct curl_httppost *VAR_4)
{
  struct curl_httppost *VAR_5;

  if(!VAR_4)

    return;

  do {
    VAR_5 = VAR_4->next;


    FUNC_1(VAR_4->more);

    if(!(VAR_4->flags & VAR_3))
      FUNC_0(VAR_4->name);
    if(!(VAR_4->flags &
         (VAR_2|VAR_0|VAR_1))
      )
      FUNC_0(VAR_4->contents);
    FUNC_0(VAR_4->contenttype);
    FUNC_0(VAR_4->showfilename);
    FUNC_0(VAR_4);
    VAR_4 = VAR_5;
  } while(VAR_4);
}
