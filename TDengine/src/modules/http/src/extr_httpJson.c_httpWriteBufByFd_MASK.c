
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpContext {int fd; int ipstr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct HttpContext*,int,int ,int ,...) ;
 scalar_t__ FUNC_1 (int,char const*,size_t,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct HttpContext* VAR_4, const char* VAR_5, int VAR_6) {
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;

  do {
    if (VAR_4->fd > 2){
      VAR_7 = (int)FUNC_1(VAR_4->fd, VAR_5 + VAR_9, (size_t)(VAR_6 - VAR_9), VAR_2);
    }
    else {
      return VAR_6;
    }

    if (VAR_7 < 0) {
      FUNC_0("context:%p, fd:%d, ip:%s, socket write errno:%d, times:%d",
                VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_3, VAR_8);
      if (++VAR_8 > VAR_0) break;
      FUNC_2(VAR_1);
      continue;
    } else if (VAR_7 == 0) {
      FUNC_0("context:%p, fd:%d, ip:%s, socket write errno:%d, connect already closed",
                VAR_4, VAR_4->fd, VAR_4->ipstr, VAR_3);
      break;
    } else {
      VAR_8 = 0;
      VAR_9 += VAR_7;
    }
  } while (VAR_9 < VAR_6);

  return VAR_9;
}
