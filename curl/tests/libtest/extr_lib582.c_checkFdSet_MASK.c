
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Sockets {int count; int * sockets; } ;
typedef int fd_set ;
typedef int CURLM ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int,char const*) ;

__attribute__((used)) static void FUNC_2(CURLM *VAR_0, struct Sockets *VAR_1, fd_set *VAR_2,
                       int VAR_3, const char *VAR_4)
{
  int VAR_5;
  for(VAR_5 = 0; VAR_5 < VAR_1->count; ++VAR_5) {
    if(FUNC_0(VAR_1->sockets[VAR_5], VAR_2)) {
      FUNC_1(VAR_0, VAR_1->sockets[VAR_5], VAR_3, VAR_4);
    }
  }
}
