
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int libretrodb_header_t ;
struct TYPE_5__ {TYPE_1__* db; int fd; scalar_t__ eof; } ;
typedef TYPE_2__ libretrodb_cursor_t ;
struct TYPE_4__ {scalar_t__ root; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int FUNC_1(libretrodb_cursor_t *VAR_1)
{
   VAR_1->eof = 0;
   return (int)FUNC_0(VAR_1->fd,
         (ssize_t)(VAR_1->db->root + sizeof(libretrodb_header_t)),
         VAR_0);
}
