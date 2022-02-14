
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crisv32_watch_entry {int dummy; } ;
struct TYPE_3__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__** VAR_9 ;

int FUNC_6(int VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_2();

 FUNC_4(&VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  int VAR_13;

  if (VAR_11)
   VAR_12 = FUNC_0(VAR_4, VAR_6,
    VAR_8);
  else
   VAR_12 = FUNC_0(VAR_5, VAR_7,
    VAR_8);

  VAR_13 = (VAR_10 & (0xff << (VAR_11 + 8))) >> (VAR_11 + 8);
  if (VAR_13 == 0)
   continue;
  VAR_13--;
  if ((VAR_13 >= VAR_2) || (!VAR_9[VAR_11][VAR_13].used)) {
   FUNC_5(&VAR_3);
   return -VAR_1;
  }

  FUNC_3(&VAR_9[VAR_11][VAR_13], 0,
   sizeof(struct crisv32_watch_entry));

  if (VAR_13 == 0)
   VAR_12 &= ~1;
  else if (VAR_13 == 1)
   VAR_12 &= ~2;
  else if (VAR_13 == 2)
   VAR_12 &= ~4;
  else if (VAR_13 == 3)
   VAR_12 &= ~8;

  if (VAR_11)
   FUNC_1(VAR_4, VAR_6, VAR_8,
    VAR_12);
  else
   FUNC_1(VAR_5, VAR_7, VAR_8,
    VAR_12);
 }

 FUNC_5(&VAR_3);
 return 0;
}
