
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_db {scalar_t__ lru_counter; int fd; scalar_t__ handle; } ;
struct httpd_data {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct httpd_data*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct sock_db *VAR_2 = (struct sock_db *)VAR_1;
    if (VAR_2) {
        if (VAR_2->lru_counter == 0) {
            FUNC_0(VAR_0, "Skipping session close for %d as it seems to be a race condition", VAR_2->fd);
            return;
        }
        int VAR_3 = VAR_2->fd;
        struct httpd_data *VAR_4 = (struct httpd_data *) VAR_2->handle;
        FUNC_2(VAR_4, VAR_3);
        FUNC_1(VAR_3);
    }
}
