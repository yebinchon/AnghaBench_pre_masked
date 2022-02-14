
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ReadWriteSockets {int write; int read; } ;
typedef int curl_socket_t ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(CURL *VAR_4, curl_socket_t VAR_5, int VAR_6,
                              void *VAR_7, void *VAR_8)
{
  struct ReadWriteSockets* VAR_9 = VAR_7;

  (void)VAR_4;
  (void)VAR_8;

  if(VAR_6 == VAR_0 || VAR_6 == VAR_1)
    FUNC_0(&VAR_9->read, VAR_5, "read");

  if(VAR_6 == VAR_2 || VAR_6 == VAR_1)
    FUNC_0(&VAR_9->write, VAR_5, "write");

  if(VAR_6 == VAR_3) {
    FUNC_1(&VAR_9->read, VAR_5, 1);
    FUNC_1(&VAR_9->write, VAR_5, 0);
  }

  return 0;
}
