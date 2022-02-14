
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern {int num_channels; int num_rows; int * data; } ;
struct note {int param; int effect; int volume; int instrument; int key; } ;


 int FUNC_0 (struct note*,int ,int) ;

__attribute__((used)) static void FUNC_1( struct pattern *VAR_0, int VAR_1, int VAR_2, struct note *VAR_3 ) {
 int VAR_4 = ( VAR_1 * VAR_0->num_channels + VAR_2 ) * 5;
 if( VAR_4 >= 0 && VAR_1 < VAR_0->num_rows && VAR_2 < VAR_0->num_channels ) {
  VAR_3->key = VAR_0->data[ VAR_4 ];
  VAR_3->instrument = VAR_0->data[ VAR_4 + 1 ];
  VAR_3->volume = VAR_0->data[ VAR_4 + 2 ];
  VAR_3->effect = VAR_0->data[ VAR_4 + 3 ];
  VAR_3->param = VAR_0->data[ VAR_4 + 4 ];
 } else {
  FUNC_0( VAR_3, 0, sizeof( struct note ) );
 }
}
