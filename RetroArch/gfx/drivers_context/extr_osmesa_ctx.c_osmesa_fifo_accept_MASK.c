
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct TYPE_3__ {scalar_t__ client; int socket; } ;
typedef TYPE_1__ gfx_ctx_osmesa_data_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pollfd*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(gfx_ctx_osmesa_data_t *VAR_2)
{
   int VAR_3;
   struct pollfd VAR_4;
   VAR_4.fd = VAR_2->socket;
   VAR_4.events = VAR_0;

   if (VAR_2->client >= 0)
      return;

   VAR_3 = FUNC_3(&VAR_4, 1, 0);

   if (VAR_3 < 0)
      FUNC_2("[osmesa] poll() error");
   else if (VAR_3 > 0)
   {
      VAR_2->client = FUNC_0(VAR_2->socket, ((void*)0), ((void*)0));
      FUNC_1(VAR_1, "[osmesa] Client %li connected.\n", VAR_2->client);
   }
}
