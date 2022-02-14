
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_thread_req {int type; int io_fd; unsigned long long offset; char* buf; int len; struct aio_context* aio; } ;
struct aio_context {int dummy; } ;
typedef int req ;
typedef enum aio_type { ____Placeholder_aio_type } aio_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct aio_thread_req*,int) ;

__attribute__((used)) static int FUNC_1(enum aio_type VAR_2, int VAR_3, char *VAR_4, int VAR_5,
    unsigned long long VAR_6, struct aio_context *VAR_7)
{
 struct aio_thread_req VAR_8 = { .type = VAR_2,
          .io_fd = VAR_3,
          .offset = VAR_6,
          .buf = VAR_4,
          .len = VAR_5,
          .aio = VAR_7,
 };
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0, &VAR_8, sizeof(VAR_8));
 if (VAR_9 == sizeof(VAR_8))
  VAR_9 = 0;
 else VAR_9 = -VAR_1;

 return VAR_9;
}
