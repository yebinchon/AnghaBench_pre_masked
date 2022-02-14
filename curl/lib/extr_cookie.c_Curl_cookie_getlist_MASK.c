
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CookieInfo {struct Cookie** cookies; } ;
struct Cookie {struct Cookie* next; int spath; int domain; scalar_t__ tailmatch; scalar_t__ secure; } ;


 int FUNC_0 (struct Cookie*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (char const*) ;
 struct Cookie* FUNC_2 (struct Cookie*) ;
 int FUNC_3 (struct Cookie**) ;
 int FUNC_4 (char const*) ;
 struct Cookie** FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct Cookie**,size_t,int,int ) ;
 int FUNC_8 (struct CookieInfo*) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 scalar_t__ FUNC_10 (int ,char const*) ;

struct Cookie *FUNC_11(struct CookieInfo *VAR_2,
                                   const char *VAR_3, const char *VAR_4,
                                   bool VAR_5)
{
  struct Cookie *VAR_6;
  struct Cookie *VAR_7;
  struct Cookie *VAR_8 = ((void*)0);
  size_t VAR_9 = 0;
  bool VAR_10;
  const size_t VAR_11 = FUNC_1(VAR_3);

  if(!VAR_2 || !VAR_2->cookies[VAR_11])
    return ((void*)0);


  FUNC_8(VAR_2);


  VAR_10 = FUNC_4(VAR_3);

  VAR_7 = VAR_2->cookies[VAR_11];

  while(VAR_7) {

    if(VAR_7->secure?VAR_5:VAR_0) {


      if(!VAR_7->domain ||
         (VAR_7->tailmatch && !VAR_10 && FUNC_10(VAR_7->domain, VAR_3)) ||
         ((!VAR_7->tailmatch || VAR_10) && FUNC_9(VAR_3, VAR_7->domain)) ) {





        if(!VAR_7->spath || FUNC_6(VAR_7->spath, VAR_4) ) {




          VAR_6 = FUNC_2(VAR_7);
          if(VAR_6) {

            VAR_6->next = VAR_8;


            VAR_8 = VAR_6;

            VAR_9++;
          }
          else
            goto fail;
        }
      }
    }
    VAR_7 = VAR_7->next;
  }

  if(VAR_9) {



    struct Cookie **VAR_12;
    size_t VAR_13;


    VAR_12 = FUNC_5(sizeof(struct Cookie *) * VAR_9);
    if(!VAR_12)
      goto fail;

    VAR_7 = VAR_8;

    for(VAR_13 = 0; VAR_7; VAR_7 = VAR_7->next)
      VAR_12[VAR_13++] = VAR_7;


    FUNC_7(VAR_12, VAR_9, sizeof(struct Cookie *), VAR_1);



    VAR_8 = VAR_12[0];
    for(VAR_13 = 0; VAR_13<VAR_9-1; VAR_13++)
      VAR_12[VAR_13]->next = VAR_12[VAR_13 + 1];
    VAR_12[VAR_9-1]->next = ((void*)0);

    FUNC_3(VAR_12);
  }

  return VAR_8;

fail:

  FUNC_0(VAR_8);
  return ((void*)0);
}
