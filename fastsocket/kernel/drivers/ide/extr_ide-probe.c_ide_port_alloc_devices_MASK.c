
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** devices; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int * id; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int FUNC_2(ide_hwif_t *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  ide_drive_t *VAR_7;

  VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1, VAR_5);
  if (VAR_7 == ((void*)0))
   goto out_nomem;
  VAR_7->id = FUNC_1(VAR_3, VAR_1, VAR_5);
  if (VAR_7->id == ((void*)0))
   goto out_nomem;

  VAR_4->devices[VAR_6] = VAR_7;
 }
 return 0;

out_nomem:
 FUNC_0(VAR_4);
 return -VAR_0;
}
