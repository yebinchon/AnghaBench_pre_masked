
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_cf_socket {unsigned int present; int timer; scalar_t__ active; int socket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_4)
{
 struct omap_cf_socket *VAR_5 = (void *) VAR_4;
 unsigned VAR_6 = FUNC_1();

 if (VAR_6 != VAR_5->present) {
  VAR_5->present = VAR_6;
  FUNC_3("%s: card %s\n", VAR_2,
   VAR_6 ? "present" : "gone");
  FUNC_2(&VAR_5->socket, VAR_1);
 }

 if (VAR_5->active)
  FUNC_0(&VAR_5->timer, VAR_3 + VAR_0);
}
