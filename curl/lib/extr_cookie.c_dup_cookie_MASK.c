
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Cookie {int creationtime; int httponly; int livecookie; int secure; int tailmatch; int expires; } ;


 int FUNC_0 (int ) ;
 struct Cookie* FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct Cookie*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct Cookie *FUNC_3(struct Cookie *VAR_8)
{
  struct Cookie *VAR_9 = FUNC_1(sizeof(struct Cookie), 1);
  if(VAR_9) {
    FUNC_0(VAR_1);
    FUNC_0(VAR_0);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_3);
    FUNC_0(VAR_6);
    FUNC_0(VAR_2);
    FUNC_0(VAR_7);
    VAR_9->expires = VAR_8->expires;
    VAR_9->tailmatch = VAR_8->tailmatch;
    VAR_9->secure = VAR_8->secure;
    VAR_9->livecookie = VAR_8->livecookie;
    VAR_9->httponly = VAR_8->httponly;
    VAR_9->creationtime = VAR_8->creationtime;
  }
  return VAR_9;

  fail:
  FUNC_2(VAR_9);
  return ((void*)0);
}
