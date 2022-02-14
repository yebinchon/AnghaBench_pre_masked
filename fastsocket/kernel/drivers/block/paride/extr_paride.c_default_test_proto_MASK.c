
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mode; int port; TYPE_1__* proto; int device; } ;
struct TYPE_8__ {int name; int (* disconnect ) (TYPE_2__*) ;int (* connect ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(PIA * VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5[2] = { 0, 0 };

 VAR_0->proto->connect(VAR_0);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_1(VAR_0, 0, 6, 0xa0 + VAR_3 * 0x10);
  for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
   FUNC_1(VAR_0, 0, 2, VAR_4 ^ 0xaa);
   FUNC_1(VAR_0, 0, 3, VAR_4 ^ 0x55);
   if (FUNC_0(VAR_0, 0, 2) != (VAR_4 ^ 0xaa))
    VAR_5[VAR_3]++;
  }
 }
 VAR_0->proto->disconnect(VAR_0);

 if (VAR_2)
  FUNC_2("%s: %s: port 0x%x, mode  %d, test=(%d,%d)\n",
         VAR_0->device, VAR_0->proto->name, VAR_0->port,
         VAR_0->mode, VAR_5[0], VAR_5[1]);

 return (VAR_5[0] && VAR_5[1]);
}
