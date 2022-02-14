
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vrfy_buf ;
struct TYPE_2__ {int fd; } ;
struct ssl_state {TYPE_1__ net_ctx; int ctx; int domain; int conf; int ctr_drbg; int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,int,char*,int) ;
 scalar_t__ FUNC_11 (int,void*,int) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_12(void *VAR_11, void *VAR_12, bool VAR_13, bool VAR_14)
{
   struct ssl_state *VAR_15 = (struct ssl_state*)VAR_11;
   int VAR_16, VAR_17;

   if (FUNC_11(VAR_15->net_ctx.fd, VAR_12, VAR_13))
      return -1;

   if (FUNC_4(&VAR_15->conf,
               VAR_2,
               VAR_4,
               VAR_3) != 0)
      return -1;

   FUNC_0(&VAR_15->conf, VAR_5);
   FUNC_1(&VAR_15->conf, &VAR_15->ca, ((void*)0));
   FUNC_3(&VAR_15->conf, VAR_6, &VAR_15->ctr_drbg);
   FUNC_2(&VAR_15->conf, VAR_9, VAR_10);

   if (FUNC_9(&VAR_15->ctx, &VAR_15->conf) != 0)
      return -1;






   FUNC_7(&VAR_15->ctx, &VAR_15->net_ctx, VAR_8, VAR_7, ((void*)0));

   while ((VAR_16 = FUNC_6(&VAR_15->ctx)) != 0)
   {
      if (VAR_16 != VAR_0 && VAR_16 != VAR_1)
         return -1;
   }

   if ((VAR_17 = FUNC_5(&VAR_15->ctx)) != 0)
   {
      char VAR_18[512];
      FUNC_10(VAR_18, sizeof(VAR_18), "  ! ", VAR_17);
   }

   return VAR_15->net_ctx.fd;
}
