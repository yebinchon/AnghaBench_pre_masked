
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct console {int dummy; } ;
struct TYPE_2__ {int* read; char* write; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct console *VAR_3, const char *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

        if (!VAR_1)
  return;

 FUNC_2(VAR_7);


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  if (VAR_4[VAR_6] == '\n') {
   while (!(*VAR_1->read & FUNC_0(VAR_0, VAR_2)))
   ;
   *VAR_1->write = '\r';
  }

  while (!(*VAR_1->read & FUNC_0(VAR_0, VAR_2)))
   ;
  *VAR_1->write = VAR_4[VAR_6];
 }







 FUNC_3();

 FUNC_1(VAR_7);
}
