
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpContext {int ipstr; int fd; } ;


 int FUNC_0 (char*,struct HttpContext*,int ,int ,int,int,char const*) ;
 int FUNC_1 (char*,struct HttpContext*,int ,int ,int,int,char const*) ;
 int FUNC_2 (struct HttpContext*,char const*,int) ;

int FUNC_3(struct HttpContext *VAR_0, const char *VAR_1, int VAR_2) {
  int VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_3 != VAR_2) {
    FUNC_0("context:%p, fd:%d, ip:%s, dataSize:%d, writeSize:%d, failed to send response:\n%s",
              VAR_0, VAR_0->fd, VAR_0->ipstr, VAR_2, VAR_3, VAR_1);
  } else {
    FUNC_1("context:%p, fd:%d, ip:%s, dataSize:%d, writeSize:%d, response:\n%s",
              VAR_0, VAR_0->fd, VAR_0->ipstr, VAR_2, VAR_3, VAR_1);
  }

  return VAR_3;
}
