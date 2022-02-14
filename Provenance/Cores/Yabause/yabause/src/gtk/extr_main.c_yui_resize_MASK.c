
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float guint ;
typedef int gboolean ;
struct TYPE_10__ {TYPE_2__* menu; int area; } ;
struct TYPE_9__ {float min_aspect; float max_aspect; } ;
struct TYPE_7__ {scalar_t__ height; } ;
struct TYPE_8__ {TYPE_1__ allocation; } ;
typedef TYPE_3__ GdkGeometry ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (int ,float,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__*,int ) ;

void FUNC_6(guint VAR_3, guint VAR_4, gboolean VAR_5) {
 if (VAR_3 <= 0) VAR_3 = 320;
 if (VAR_4 <= 0) VAR_4 = 224;

 if (FUNC_2(VAR_1, "General", "KeepRatio", 0))
 {
  GdkGeometry VAR_6;
  VAR_6.min_aspect = (float) VAR_3 / VAR_4;
  VAR_6.max_aspect = (float) VAR_3 / VAR_4;
  FUNC_4(FUNC_0(VAR_2), FUNC_1(VAR_2)->area, &VAR_6, VAR_0);
 }
 else
 {
  FUNC_4(FUNC_0(VAR_2), FUNC_1(VAR_2)->area, ((void*)0), 0);
 }

 FUNC_3(FUNC_0(VAR_2), VAR_3, VAR_4 + FUNC_1(VAR_2)->menu->allocation.height);

 FUNC_5(FUNC_1(VAR_2), VAR_5);
}
