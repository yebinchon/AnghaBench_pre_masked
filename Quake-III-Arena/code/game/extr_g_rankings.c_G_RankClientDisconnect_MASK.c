
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* persistant; } ;
struct TYPE_7__ {int enterTime; } ;
struct TYPE_8__ {TYPE_1__ ps; TYPE_2__ pers; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_10__ {TYPE_3__* client; } ;
struct TYPE_9__ {scalar_t__ warmupTime; int time; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (int,int,int ,int,int ) ;

void FUNC_1( int VAR_4 )
{
 gclient_t* VAR_5;
 int VAR_6;
 int VAR_7;

 if( VAR_3.warmupTime != 0 )
 {

  return;
 }


 VAR_5 = VAR_2[VAR_4].client;
 VAR_6 = (VAR_3.time - VAR_5->pers.enterTime) / 1000;
 if( VAR_6 < 60 )
 {
  VAR_7 = 0;
 }
 else
 {
  VAR_7 = VAR_5->ps.persistant[VAR_0] / VAR_6;
 }
 FUNC_0( VAR_4, -1, VAR_1, VAR_7, 0 );
}
