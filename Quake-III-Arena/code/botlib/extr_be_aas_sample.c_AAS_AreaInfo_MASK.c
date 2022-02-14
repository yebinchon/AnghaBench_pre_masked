
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int presencetype; int areaflags; int contents; int cluster; } ;
typedef TYPE_2__ aas_areasettings_t ;
struct TYPE_9__ {int center; int maxs; int mins; int presencetype; int flags; int contents; int cluster; } ;
typedef TYPE_3__ aas_areainfo_t ;
struct TYPE_11__ {int numareas; TYPE_1__* areas; TYPE_2__* areasettings; } ;
struct TYPE_10__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_7__ {int center; int maxs; int mins; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2( int VAR_3, aas_areainfo_t *VAR_4 )
{
 aas_areasettings_t *VAR_5;
 if (!VAR_4)
  return 0;
 if (VAR_3 <= 0 || VAR_3 >= VAR_1.numareas)
 {
  VAR_2.Print(VAR_0, "AAS_AreaInfo: areanum %d out of range\n", VAR_3);
  return 0;
 }
 VAR_5 = &VAR_1.areasettings[VAR_3];
 VAR_4->cluster = VAR_5->cluster;
 VAR_4->contents = VAR_5->contents;
 VAR_4->flags = VAR_5->areaflags;
 VAR_4->presencetype = VAR_5->presencetype;
 FUNC_0(VAR_1.areas[VAR_3].mins, VAR_4->mins);
 FUNC_0(VAR_1.areas[VAR_3].maxs, VAR_4->maxs);
 FUNC_0(VAR_1.areas[VAR_3].center, VAR_4->center);
 return sizeof(aas_areainfo_t);
}
