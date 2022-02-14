
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mipmap; } ;
typedef TYPE_1__ image_t ;
struct TYPE_11__ {scalar_t__ hardwareType; } ;
struct TYPE_10__ {int maximize; int minimize; int name; } ;
struct TYPE_9__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_8__ {int numImages; TYPE_1__** images; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*) ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__ VAR_10 ;

void FUNC_5( const char *VAR_11 ) {
 int VAR_12;
 image_t *VAR_13;

 for ( VAR_12=0 ; VAR_12< 6 ; VAR_12++ ) {
  if ( !FUNC_1( VAR_8[VAR_12].name, VAR_11 ) ) {
   break;
  }
 }



 if ( VAR_12 == 5 && VAR_5.hardwareType == VAR_0 ) {
  VAR_9.Printf( VAR_4, "Refusing to set trilinear on a voodoo.\n" );
  VAR_12 = 3;
 }


 if ( VAR_12 == 6 ) {
  VAR_9.Printf (VAR_4, "bad filter name\n");
  return;
 }

 VAR_7 = VAR_8[VAR_12].minimize;
 VAR_6 = VAR_8[VAR_12].maximize;


 for ( VAR_12 = 0 ; VAR_12 < VAR_10.numImages ; VAR_12++ ) {
  VAR_13 = VAR_10.images[ VAR_12 ];
  if ( VAR_13->mipmap ) {
   FUNC_0 (VAR_13);
   FUNC_2(VAR_1, VAR_3, VAR_7);
   FUNC_2(VAR_1, VAR_2, VAR_6);
  }
 }
}
