
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adi {int axes10; int axes8; int hats; int pad; int* abs; scalar_t__ id; TYPE_1__* dev; int length; } ;
struct TYPE_2__ {int* abs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct adi *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (!VAR_3->length)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->axes10 + VAR_3->axes8 + (VAR_3->hats + (VAR_3->pad != -1)) * 2; VAR_4++) {

  VAR_5 = VAR_3->abs[VAR_4];
  VAR_6 = VAR_3->dev->abs[VAR_5];

  if (VAR_5 == VAR_1 || VAR_5 == VAR_0 || VAR_3->id == VAR_2)
   VAR_6 = VAR_4 < VAR_3->axes10 ? 512 : 128;

  if (VAR_4 < VAR_3->axes10)
   FUNC_0(VAR_3->dev, VAR_5, 64, VAR_6 * 2 - 64, 2, 16);
  else if (VAR_4 < VAR_3->axes10 + VAR_3->axes8)
   FUNC_0(VAR_3->dev, VAR_5, 48, VAR_6 * 2 - 48, 1, 16);
  else
   FUNC_0(VAR_3->dev, VAR_5, -1, 1, 0, 0);
 }
}
