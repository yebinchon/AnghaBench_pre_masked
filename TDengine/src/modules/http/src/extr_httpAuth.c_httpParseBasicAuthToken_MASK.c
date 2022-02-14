
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user; int ipstr; int fd; int pass; } ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ,char*) ;
 int FUNC_3 (char*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int ,char*,size_t) ;
 char* FUNC_5 (char*,char*) ;

bool FUNC_6(HttpContext *VAR_2, char *VAR_3, int VAR_4) {
  VAR_3[VAR_4] = '\0';
  int VAR_5 = 0;
  char *VAR_6 = (char *)FUNC_0(VAR_3, VAR_4, &VAR_5);
  if (VAR_6 == ((void*)0) || VAR_5 == 0) {
    FUNC_2("context:%p, fd:%d, ip:%s, basic token:%s parsed error", VAR_2, VAR_2->fd, VAR_2->ipstr, VAR_3);
    return 0;
  }

  char *VAR_7 = FUNC_5(VAR_6, ":");
  if (VAR_7 == ((void*)0)) {
    FUNC_2("context:%p, fd:%d, ip:%s, basic token:%s invalid format", VAR_2, VAR_2->fd, VAR_2->ipstr,
              VAR_3);
    FUNC_1(VAR_6);
    return 0;
  }

  int VAR_8 = (int)(VAR_7 - VAR_6);
  if (VAR_8 < 1 || VAR_8 >= VAR_1) {
    FUNC_2("context:%p, fd:%d, ip:%s, basic token:%s parse user error", VAR_2, VAR_2->fd, VAR_2->ipstr,
              VAR_3);
    FUNC_1(VAR_6);
    return 0;
  }
  FUNC_4(VAR_2->user, VAR_6, (size_t)VAR_8);

  char *VAR_9 = VAR_7 + 1;
  int VAR_10 = (int)((VAR_6 + VAR_5) - VAR_9);
  if (VAR_10 < 1 || VAR_10 >= VAR_0) {
    FUNC_2("context:%p, fd:%d, ip:%s, basic token:%s parse password error", VAR_2, VAR_2->fd, VAR_2->ipstr,
              VAR_3);
    FUNC_1(VAR_6);
    return 0;
  }
  FUNC_4(VAR_2->pass, VAR_9, (size_t)VAR_10);

  FUNC_1(VAR_6);
  FUNC_3("context:%p, fd:%d, ip:%s, basic token parsed success, user:%s", VAR_2, VAR_2->fd, VAR_2->ipstr,
            VAR_2->user);
  return 1;
}
