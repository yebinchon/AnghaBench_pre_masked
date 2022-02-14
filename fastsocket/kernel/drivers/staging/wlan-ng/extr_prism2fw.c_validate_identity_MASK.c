
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int variant; int top; int bottom; int id; } ;
struct TYPE_15__ {int id; int variant; int minor; int major; } ;
struct TYPE_14__ {int bottom; int top; int variant; int id; } ;
struct TYPE_13__ {int top; int bottom; int variant; int id; } ;
struct TYPE_10__ {int id; int variant; int minor; int major; } ;
struct TYPE_9__ {int role; int id; int top; int bottom; int variant; } ;
struct TYPE_11__ {int buildseq; TYPE_2__ version; TYPE_1__ compat; } ;
struct TYPE_12__ {int type; int len; TYPE_3__ info; } ;


 TYPE_8__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;

int FUNC_1(void)
{
 int VAR_6;
 int VAR_7 = 1;
 int VAR_8 = 0;

 FUNC_0("NIC ID: %#x v%d.%d.%d\n",
   VAR_1.id, VAR_1.major, VAR_1.minor, VAR_1.variant);
 FUNC_0("MFI ID: %#x v%d %d->%d\n",
   VAR_4.id, VAR_4.variant, VAR_4.bottom, VAR_4.top);
 FUNC_0("CFI ID: %#x v%d %d->%d\n",
   VAR_0.id, VAR_0.variant, VAR_0.bottom, VAR_0.top);
 FUNC_0("PRI ID: %#x v%d %d->%d\n",
   VAR_3.id, VAR_3.variant, VAR_3.bottom, VAR_3.top);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  switch (VAR_5[VAR_6].type) {
  case 1:
   FUNC_0("Version:  ID %#x %d.%d.%d\n",
     VAR_5[VAR_6].info.version.id,
     VAR_5[VAR_6].info.version.major,
     VAR_5[VAR_6].info.version.minor,
     VAR_5[VAR_6].info.version.variant);
   break;
  case 2:
   FUNC_0("Compat: Role %#x Id %#x v%d %d->%d\n",
     VAR_5[VAR_6].info.compat.role,
     VAR_5[VAR_6].info.compat.id,
     VAR_5[VAR_6].info.compat.variant,
     VAR_5[VAR_6].info.compat.bottom,
     VAR_5[VAR_6].info.compat.top);


   if ((VAR_5[VAR_6].info.compat.role == 1) &&
       (VAR_5[VAR_6].info.compat.id == 2)) {
    if (VAR_5[VAR_6].info.compat.variant !=
        VAR_0.variant) {
     VAR_7 = 2;
    }
   }


   if ((VAR_5[VAR_6].info.compat.role == 1) &&
       (VAR_5[VAR_6].info.compat.id == 3)) {
    if ((VAR_5[VAR_6].info.compat.bottom > VAR_3.top)
        || (VAR_5[VAR_6].info.compat.top <
     VAR_3.bottom)) {
     VAR_7 = 3;
    }
   }

   if ((VAR_5[VAR_6].info.compat.role == 1) &&
       (VAR_5[VAR_6].info.compat.id == 4)) {

   }

   break;
  case 3:
   FUNC_0("Seq: %#x\n", VAR_5[VAR_6].info.buildseq);

   break;
  case 4:
   FUNC_0("Platform:  ID %#x %d.%d.%d\n",
     VAR_5[VAR_6].info.version.id,
     VAR_5[VAR_6].info.version.major,
     VAR_5[VAR_6].info.version.minor,
     VAR_5[VAR_6].info.version.variant);

   if (VAR_1.id != VAR_5[VAR_6].info.version.id)
    continue;
   if (VAR_1.major != VAR_5[VAR_6].info.version.major)
    continue;
   if (VAR_1.minor != VAR_5[VAR_6].info.version.minor)
    continue;
   if ((VAR_1.variant != VAR_5[VAR_6].info.version.variant) &&
       (VAR_1.id != 0x8008))
    continue;

   VAR_8 = 1;
   break;
  case 0x8001:
   FUNC_0("name inforec len %d\n", VAR_5[VAR_6].len);

   break;
  default:
   FUNC_0("Unknown inforec type %d\n", VAR_5[VAR_6].type);
  }
 }


 if (VAR_8 && (VAR_7 != 2)) VAR_7 = 0;
 return VAR_7;
}
