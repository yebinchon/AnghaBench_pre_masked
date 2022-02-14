
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acoustic; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_1(ide_drive_t *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 > 254)
  return -VAR_0;

 FUNC_0(VAR_3,
  VAR_4 ? VAR_2 : VAR_1, VAR_4);

 VAR_3->acoustic = VAR_4;

 return 0;
}
