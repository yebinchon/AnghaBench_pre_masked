
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_context {int reply_fd; } ;
typedef enum aio_type { ____Placeholder_aio_type } aio_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,char*,int,unsigned long long,struct aio_context*) ;
 int FUNC_1 (int,int,char*,int,unsigned long long,struct aio_context*) ;

int FUNC_2(enum aio_type VAR_1, int VAR_2, char *VAR_3, int VAR_4,
        unsigned long long VAR_5, int VAR_6,
        struct aio_context *VAR_7)
{
 VAR_7->reply_fd = VAR_6;
 if (VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
}
