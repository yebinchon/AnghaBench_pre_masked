
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct delta_frame {int dummy; } ;
struct TYPE_5__ {int buffer_size; int quirks; struct delta_frame* buffer; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(netplay_t *VAR_3)
{
   struct delta_frame *VAR_4 = ((void*)0);



   VAR_3->buffer_size = VAR_0 + 2;



   if (VAR_3->is_server)
      VAR_3->buffer_size *= 2;

   VAR_4 = (struct delta_frame*)FUNC_0(VAR_3->buffer_size,
         sizeof(*VAR_4));

   if (!VAR_4)
      return 0;

   VAR_3->buffer = VAR_4;

   if (!(VAR_3->quirks & (VAR_2|VAR_1)))
      FUNC_1(VAR_3);

   return FUNC_2(VAR_3);
}
