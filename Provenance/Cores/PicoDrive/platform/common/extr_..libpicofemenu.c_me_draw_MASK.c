
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; char* (* generate_name ) (int ,int*) ;int beh; char* help; scalar_t__ var; scalar_t__ data; int id; int enabled; } ;
typedef TYPE_1__ menu_entry ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,char const*,int) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int ,int*) ;
 char* FUNC_11 (int ,int*) ;
 char* FUNC_12 (int ,int*) ;
 char* FUNC_13 (int ,int*) ;
 int FUNC_14 (int,int,...) ;

__attribute__((used)) static void FUNC_15(const menu_entry *VAR_7, int VAR_8, void (*VAR_9)(void))
{
 const menu_entry *VAR_10, *VAR_11 = VAR_7;
 int VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
 int VAR_16, VAR_17 = 27 * VAR_3;
 int VAR_18 = 0;
 const char *VAR_19;
 int VAR_20, VAR_21;


 for (VAR_10 = VAR_7, VAR_20 = VAR_21 = 0; VAR_10->name; VAR_10++, VAR_20++)
 {
  int VAR_22;

  if (!VAR_10->enabled)
   continue;

  if (VAR_20 == VAR_8) {
   VAR_11 = VAR_10;
   VAR_18 = VAR_21;
  }

  VAR_19 = ((void*)0);
  VAR_22 = FUNC_9(VAR_10->name) * VAR_3;
  if (VAR_22 == 0 && VAR_10->generate_name)
   VAR_19 = VAR_10->generate_name(VAR_10->id, &VAR_16);
  if (VAR_19 != ((void*)0))
   VAR_22 = FUNC_9(VAR_19) * VAR_3;

  if (VAR_10->beh != 134)
  {
   if (VAR_22 > VAR_17)
    VAR_17 = VAR_22 + VAR_3;
   VAR_22 = VAR_17;

   switch (VAR_10->beh) {
   case 134:
    break;
   case 129:
   case 128:
    VAR_22 += VAR_3 * 3;
    break;
   case 133:
   case 132:
   case 131:
    VAR_19 = ((void*)0);
    VAR_16 = 0;
    if (VAR_10->generate_name != ((void*)0))
     VAR_19 = VAR_10->generate_name(VAR_10->id, &VAR_16);
    if (VAR_19 != ((void*)0))
     VAR_22 += (FUNC_9(VAR_19) + VAR_16) * VAR_3;
    break;
   case 130:
    VAR_22 += 10 * VAR_3;
    break;
   }
  }

  if (VAR_22 > VAR_14)
   VAR_14 = VAR_22;
  VAR_21++;
 }
 VAR_15 = VAR_21 * VAR_2;
 VAR_14 += VAR_3 * 2;

 if (VAR_14 > VAR_1) {
  FUNC_0("width %d > %d\n", VAR_14, VAR_1);
  VAR_14 = VAR_1;
 }
 if (VAR_15 > VAR_0) {
  FUNC_0("height %d > %d\n", VAR_14, VAR_0);
  VAR_15 = VAR_0;
 }

 VAR_12 = VAR_1 / 2 - VAR_14 / 2;
 VAR_13 = VAR_0 / 2 - VAR_15 / 2;





 FUNC_2(1, 0);
 FUNC_4(VAR_12, VAR_13 + VAR_18 * VAR_2, VAR_14);
 VAR_12 += VAR_3 * 2;

 for (VAR_10 = VAR_7; VAR_10->name; VAR_10++)
 {
  const char **VAR_23;
  int VAR_24, VAR_25 = 0;

  if (!VAR_10->enabled)
   continue;

  VAR_19 = VAR_10->name;
  if (FUNC_9(VAR_19) == 0) {
   if (VAR_10->generate_name)
    VAR_19 = VAR_10->generate_name(VAR_10->id, &VAR_16);
  }
  if (VAR_19 != ((void*)0)) {
   FUNC_14(VAR_12, VAR_13, VAR_19);
   VAR_25 = VAR_12 + (FUNC_9(VAR_19) + 1) * VAR_3;
  }

  switch (VAR_10->beh) {
  case 134:
   break;
  case 129:
   FUNC_14(VAR_12 + VAR_17, VAR_13, FUNC_1(VAR_10) ? "ON" : "OFF");
   break;
  case 128:
   FUNC_14(VAR_12 + VAR_17, VAR_13, "%i", *(int *)VAR_10->var);
   break;
  case 133:
  case 132:
  case 131:
   VAR_19 = ((void*)0);
   VAR_16 = 0;
   if (VAR_10->generate_name)
    VAR_19 = VAR_10->generate_name(VAR_10->id, &VAR_16);
   if (VAR_19 != ((void*)0))
    FUNC_14(VAR_12 + VAR_17 + VAR_16 * VAR_3, VAR_13, "%s", VAR_19);
   break;
  case 130:
   VAR_23 = (const char **)VAR_10->data;
   for (VAR_20 = 0; VAR_23[VAR_20] != ((void*)0); VAR_20++) {
    VAR_16 = VAR_12 + VAR_17;
    VAR_24 = FUNC_9(VAR_23[VAR_20]);
    if (VAR_24 > 10)
     VAR_16 += (10 - VAR_24 - 2) * VAR_3;
    if (VAR_16 < VAR_25)
     VAR_16 = VAR_25;
    if (VAR_20 == *(unsigned char *)VAR_10->var) {
     FUNC_14(VAR_16, VAR_13, "%s", VAR_23[VAR_20]);
     break;
    }
   }
   break;
  }

  VAR_13 += VAR_2;
 }

 FUNC_5();


 VAR_15 = (VAR_0 - VAR_15) / 2;
 if (VAR_5[0] != 0) {
  if (VAR_15 >= VAR_2 + 4)
   FUNC_14(5, VAR_0 - VAR_2 - 4, VAR_5);
  else
   FUNC_0("menu msg doesn't fit!\n");

  if (FUNC_6() - VAR_6 > 2048)
   VAR_5[0] = 0;
 }
 else if (VAR_11->help != ((void*)0)) {
  const char *VAR_26 = VAR_11->help;
  int VAR_27;
  for (VAR_27 = 0; VAR_26 != ((void*)0) && *VAR_26 != 0; VAR_27++)
   VAR_26 = FUNC_8(VAR_26 + 1, '\n');
  if (VAR_15 >= VAR_27 * VAR_4 + 4)
   for (VAR_26 = VAR_11->help; VAR_27 > 0; VAR_27--, VAR_26 = FUNC_8(VAR_26, '\n') + 1)
    FUNC_7(5, VAR_0 - (VAR_27 * VAR_4 + 4), VAR_26, 0xffff);
 }

 FUNC_5();

 if (VAR_9 != ((void*)0))
  VAR_9();

 FUNC_3();
}
