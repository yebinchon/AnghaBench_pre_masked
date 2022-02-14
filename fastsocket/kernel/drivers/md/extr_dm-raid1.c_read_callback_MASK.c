
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror {TYPE_1__* dev; int ms; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bio*,int ) ;
 struct mirror* FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int *) ;
 int FUNC_6 (struct mirror*) ;
 int FUNC_7 (struct mirror*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,struct bio*) ;
 int FUNC_10 (int ,struct bio*,int ) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_2, void *VAR_3)
{
 struct bio *VAR_4 = VAR_3;
 struct mirror *VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 FUNC_5(VAR_4, ((void*)0));

 if (FUNC_8(!VAR_2)) {
  FUNC_2(VAR_4, 0);
  return;
 }

 FUNC_7(VAR_5, VAR_0);

 if (FUNC_8(FUNC_6(VAR_5)) || FUNC_9(VAR_5->ms, VAR_4)) {
  FUNC_1("Read failure on mirror device %s.  "
        "Trying alternative device.",
        VAR_5->dev->name);
  FUNC_10(VAR_5->ms, VAR_4, FUNC_4(VAR_4));
  return;
 }

 FUNC_0("Read failure on mirror device %s.  Failing I/O.",
      VAR_5->dev->name);
 FUNC_2(VAR_4, -VAR_1);
}
