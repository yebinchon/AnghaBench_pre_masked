
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int latestSnapshotNum; TYPE_1__* snap; } ;
struct TYPE_5__ {int serverCommandSequence; } ;
struct TYPE_4__ {int serverTime; } ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,float,char*,float) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 char* FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static float FUNC_3( float VAR_4 ) {
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2( "time:%i snap:%i cmd:%i", VAR_2.snap->serverTime,
  VAR_2.latestSnapshotNum, VAR_3.serverCommandSequence );
 VAR_6 = FUNC_1( VAR_5 ) * VAR_1;

 FUNC_0( 635 - VAR_6, VAR_4 + 2, VAR_5, 1.0F);

 return VAR_4 + VAR_0 + 4;
}
