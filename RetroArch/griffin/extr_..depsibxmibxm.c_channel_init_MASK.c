
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct replay {TYPE_1__* module; } ;
struct channel {int id; int random_seed; TYPE_2__* instrument; int * sample; int panning; struct replay* replay; } ;
struct TYPE_4__ {int * samples; } ;
struct TYPE_3__ {TYPE_2__* instruments; int * default_panning; } ;


 int FUNC_0 (struct channel*,int ,int) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_0, struct replay *VAR_1, int VAR_2 ) {
 FUNC_0( VAR_0, 0, sizeof( struct channel ) );
 VAR_0->replay = VAR_1;
 VAR_0->id = VAR_2;
 VAR_0->panning = VAR_1->module->default_panning[ VAR_2 ];
 VAR_0->instrument = &VAR_1->module->instruments[ 0 ];
 VAR_0->sample = &VAR_0->instrument->samples[ 0 ];
 VAR_0->random_seed = ( VAR_2 + 1 ) * 0xABCDEF;
}
