
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int faceflags; TYPE_3__* frontarea; struct TYPE_5__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {int contents; int presencetype; int areaflags; int modelnum; } ;
typedef TYPE_2__ tmp_areasettings_t ;
struct TYPE_7__ {int contents; int presencetype; TYPE_2__* settings; TYPE_1__* tmpfaces; int modelnum; scalar_t__ invalid; struct TYPE_7__* l_next; } ;
typedef TYPE_3__ tmp_area_t ;
struct TYPE_8__ {TYPE_3__* areas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 TYPE_4__ VAR_8 ;

void FUNC_4(void)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 tmp_face_t *VAR_15;
 tmp_area_t *VAR_16;

 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;
 FUNC_2("AAS_CreateAreaSettings\r\n");
 VAR_9 = 0;
 FUNC_3("%6d areas provided with settings", VAR_9);
 for (VAR_16 = VAR_8.areas; VAR_16; VAR_16 = VAR_16->l_next)
 {

  if (VAR_16->invalid) continue;

  VAR_16->settings = (tmp_areasettings_t *) FUNC_0(sizeof(tmp_areasettings_t));
  VAR_16->settings->contents = VAR_16->contents;
  VAR_16->settings->modelnum = VAR_16->modelnum;
  VAR_10 = 0;
  for (VAR_15 = VAR_16->tmpfaces; VAR_15; VAR_15 = VAR_15->next[VAR_11])
  {
   VAR_11 = VAR_15->frontarea != VAR_16;
   VAR_10 |= VAR_15->faceflags;
  }
  VAR_16->settings->areaflags = 0;
  if (VAR_10 & VAR_6)
  {
   VAR_16->settings->areaflags |= VAR_3;
   VAR_12++;
  }
  if (VAR_10 & VAR_7)
  {
   VAR_16->settings->areaflags |= VAR_4;
   VAR_13++;
  }
  if (VAR_16->contents & (VAR_2 |
           VAR_1 |
           VAR_0))
  {
   VAR_16->settings->areaflags |= VAR_5;
   VAR_14++;
  }

  VAR_16->settings->presencetype = VAR_16->presencetype;

  FUNC_3("\r%6d", ++VAR_9);
 }
 FUNC_3("\n");





}
