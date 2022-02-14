
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef TYPE_3__* i2eBordStrPtr ;
struct TYPE_5__ {int porID; } ;
struct TYPE_6__ {TYPE_1__ e; } ;
struct TYPE_7__ {int* i2eChannelMap; int i2eDataWidth16; TYPE_2__ i2ePom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 TYPE_3__** VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 i2eBordStrPtr VAR_17;
 char *VAR_18;

 FUNC_0(VAR_9, "ip2info: 1.0 driver: %s\n", VAR_8);
 FUNC_0(VAR_9, "Driver: SMajor=%d CMajor=%d IMajor=%d MaxBoards=%d MaxBoxes=%d MaxPorts=%d\n",
   VAR_5, VAR_2, VAR_3,
   VAR_4, VAR_1, VAR_0);

 for( VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11 ) {

  VAR_14 = 0;
  VAR_17 = VAR_7[VAR_11];
  if( VAR_17 ) {
   switch( VAR_17->i2ePom.e.porID & ~VAR_6 )
   {
   case 131:
    FUNC_0(VAR_9, "Board %d: EX ports=", VAR_11);
    VAR_18 = "";
    for( VAR_13 = 0; VAR_13 < VAR_1; ++VAR_13 )
    {
     VAR_15 = 0;

     if( VAR_17->i2eChannelMap[VAR_13] != 0 ) ++VAR_14;
     for( VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12 )
     {
      if( VAR_17->i2eChannelMap[VAR_13] & 1<< VAR_12 ) {
       ++VAR_15;
      }
     }
     FUNC_0(VAR_9, "%s%d", VAR_18, VAR_15);
     VAR_18 = ",";
     VAR_16 += VAR_15;
    }
    FUNC_0(VAR_9, " boxes=%d width=%d", VAR_14, VAR_17->i2eDataWidth16 ? 16 : 8);
    break;

   case 130:
    FUNC_0(VAR_9, "Board %d: ISA-4 ports=4 boxes=1", VAR_11);
    VAR_16 = VAR_15 = 4;
    break;

   case 129:
    FUNC_0(VAR_9, "Board %d: ISA-8-std ports=8 boxes=1", VAR_11);
    VAR_16 = VAR_15 = 8;
    break;

   case 128:
    FUNC_0(VAR_9, "Board %d: ISA-8-RJ11 ports=8 boxes=1", VAR_11);
    VAR_16 = VAR_15 = 8;
    break;

   default:
    FUNC_0(VAR_9, "Board %d: unknown", VAR_11);

    VAR_16 = VAR_15 = 0;
   }

  } else {

   FUNC_0(VAR_9, "Board %d: vacant", VAR_11);
   VAR_16 = VAR_15 = 0;
  }

  if( VAR_16 ) {
   FUNC_2(VAR_9, " minors=");
   VAR_18 = "";
   for ( VAR_13 = 0; VAR_13 < VAR_1; ++VAR_13 )
   {
    for ( VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12 )
    {
     if ( VAR_17->i2eChannelMap[VAR_13] & (1 << VAR_12) )
     {
      FUNC_0(VAR_9, "%s%d", VAR_18,
       VAR_12 + VAR_0 *
       (VAR_13+VAR_11*VAR_1));
      VAR_18 = ",";
     }
    }
   }
  }
  FUNC_1(VAR_9, '\n');
 }
 return 0;
 }
