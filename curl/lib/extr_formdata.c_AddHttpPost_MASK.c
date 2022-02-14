
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct curl_httppost {char* name; long namelength; char* contents; char* buffer; long bufferlength; char* contenttype; char* showfilename; char* userp; long flags; struct curl_httppost* next; struct curl_httppost* more; struct curl_slist* contentheader; int contentlen; } ;
typedef int curl_off_t ;


 long VAR_0 ;
 struct curl_httppost* FUNC_0 (int,int) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static struct curl_httppost *
FUNC_2(char *VAR_1, size_t VAR_2,
            char *VAR_3, curl_off_t VAR_4,
            char *VAR_5, size_t VAR_6,
            char *VAR_7,
            long VAR_8,
            struct curl_slist *VAR_9,
            char *VAR_10, char *VAR_11,
            struct curl_httppost *VAR_12,
            struct curl_httppost **VAR_13,
            struct curl_httppost **VAR_14)
{
  struct curl_httppost *VAR_15;
  VAR_15 = FUNC_0(1, sizeof(struct curl_httppost));
  if(VAR_15) {
    VAR_15->name = VAR_1;
    VAR_15->namelength = (long)(VAR_1?(VAR_2?VAR_2:FUNC_1(VAR_1)):0);
    VAR_15->contents = VAR_3;
    VAR_15->contentlen = VAR_4;
    VAR_15->buffer = VAR_5;
    VAR_15->bufferlength = (long)VAR_6;
    VAR_15->contenttype = VAR_7;
    VAR_15->contentheader = VAR_9;
    VAR_15->showfilename = VAR_10;
    VAR_15->userp = VAR_11;
    VAR_15->flags = VAR_8 | VAR_0;
  }
  else
    return ((void*)0);

  if(VAR_12) {

    VAR_15->more = VAR_12->more;


    VAR_12->more = VAR_15;
  }
  else {

    if(*VAR_14)
      (*VAR_14)->next = VAR_15;
    else
      (*VAR_13) = VAR_15;

    (*VAR_14) = VAR_15;
  }
  return VAR_15;
}
