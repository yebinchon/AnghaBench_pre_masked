
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int sun_path; int sun_family; } ;
struct TYPE_3__ {scalar_t__ socket; int client; int width; int height; int pixsize; } ;
typedef TYPE_1__ gfx_ctx_osmesa_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr_un*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(gfx_ctx_osmesa_data_t *VAR_4)
{
   struct sockaddr_un VAR_5, VAR_6;

   VAR_4->socket = FUNC_5(VAR_0, VAR_1, 0);
   VAR_4->client = -1;

   if (VAR_4->socket < 0)
   {
      FUNC_4("[osmesa] socket()");
      return;
   }

   VAR_5.sun_family = VAR_0;

   FUNC_6(VAR_5.sun_path, VAR_2, sizeof(VAR_5.sun_path));

   FUNC_7(VAR_2);

   if (FUNC_0(VAR_4->socket, &VAR_5, sizeof(VAR_5.sun_family) + sizeof(VAR_5.sun_path)) < 0)
   {
      FUNC_4("[osmesa] bind()");
      FUNC_1(VAR_4->socket);
      return;
   }

   if (FUNC_3(VAR_4->socket, 1) < 0)
   {
      FUNC_4("[osmesa] listen()");
      FUNC_1(VAR_4->socket);
      return;
   }

   FUNC_2(VAR_3, "[osmesa] Frame size is %ix%ix%i\n", VAR_4->width, VAR_4->height, VAR_4->pixsize);
   FUNC_2(VAR_3, "[osmesa] Please connect to unix:%s\n", VAR_2);
}
