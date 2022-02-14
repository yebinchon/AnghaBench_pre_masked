
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_resp_arg {int fd; int hd; } ;
typedef int httpd_handle_t ;
typedef int buf ;


 int FUNC_0 (int ,char*,int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int,char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
    char VAR_4[250];
    struct async_resp_arg *VAR_5 = (struct async_resp_arg *)VAR_3;
    httpd_handle_t VAR_6 = VAR_5->hd;
    int VAR_7 = VAR_5->fd;





    FUNC_0(VAR_2, "Executing queued work fd : %d", VAR_7);

    FUNC_3(VAR_4, sizeof(VAR_4), "HTTP/1.1 200 OK\r\n" "Content-Type: text/html\r\n" "Content-Length: %d\r\n",
         FUNC_4("Hello Double World!"));
    FUNC_2(VAR_6, VAR_7, VAR_4, FUNC_4(VAR_4), 0);

    FUNC_2(VAR_6, VAR_7, "\r\n", FUNC_4("\r\n"), 0);
    FUNC_2(VAR_6, VAR_7, "Hello Double World!", FUNC_4("Hello Double World!"), 0);

    FUNC_1(VAR_3);
}
