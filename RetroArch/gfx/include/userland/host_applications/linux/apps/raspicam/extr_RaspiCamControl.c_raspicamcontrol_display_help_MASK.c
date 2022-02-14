
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {char* mode; } ;
struct TYPE_11__ {char* mode; } ;
struct TYPE_10__ {char* mode; } ;
struct TYPE_9__ {char* mode; } ;
struct TYPE_8__ {char* mode; } ;
struct TYPE_7__ {char* mode; } ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;

void FUNC_2()
{
   int VAR_15;

   FUNC_0(VAR_14, "\nImage parameter commands\n\n");

   FUNC_1(VAR_2, VAR_3);

   FUNC_0(VAR_14, "\n\nNotes\n\nExposure mode options :\n%s", VAR_6[0].mode );

   for (VAR_15=1; VAR_15<VAR_7; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_6[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n\nFlicker avoid mode options :\n%s", VAR_8[0].mode );

   for (VAR_15=1; VAR_15<VAR_9; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_8[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n\nAWB mode options :\n%s", VAR_0[0].mode );

   for (VAR_15=1; VAR_15<VAR_1; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_0[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n\nImage Effect mode options :\n%s", VAR_10[0].mode );

   for (VAR_15=1; VAR_15<VAR_11; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_10[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n\nMetering Mode options :\n%s", VAR_12[0].mode );

   for (VAR_15=1; VAR_15<VAR_13; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_12[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n\nDynamic Range Compression (DRC) options :\n%s", VAR_4[0].mode );

   for (VAR_15=1; VAR_15<VAR_5; VAR_15++)
   {
      FUNC_0(VAR_14, ",%s", VAR_4[VAR_15].mode);
   }

   FUNC_0(VAR_14, "\n");
}
