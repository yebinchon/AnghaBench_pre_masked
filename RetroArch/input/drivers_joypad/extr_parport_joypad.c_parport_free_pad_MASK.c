
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_joypad {char saved_data; int fd; char saved_control; int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,...) ;

__attribute__((used)) static void FUNC_3(struct parport_joypad *VAR_2)
{
   char VAR_3 = VAR_2->saved_data;

   if (FUNC_2(VAR_2->fd, VAR_1, &VAR_3) < 0)
      FUNC_0("[Joypad]: Failed to restore original data register on %s\n", VAR_2->ident);

   VAR_3 = VAR_2->saved_control;
   if (FUNC_2(VAR_2->fd, VAR_1, &VAR_3) < 0)
      FUNC_0("[Joypad]: Failed to restore original control register on %s\n", VAR_2->ident);

   if (FUNC_2(VAR_2->fd, VAR_0) < 0)
      FUNC_0("[Joypad]: Failed to release parallel port %s\n", VAR_2->ident);

   FUNC_1(VAR_2->fd);
   VAR_2->fd = -1;
}
