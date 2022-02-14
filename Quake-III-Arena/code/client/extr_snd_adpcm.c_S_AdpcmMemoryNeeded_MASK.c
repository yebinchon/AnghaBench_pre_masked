
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float samples; scalar_t__ rate; } ;
typedef TYPE_1__ wavinfo_t ;
typedef int adpcm_state_t ;
struct TYPE_5__ {float speed; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_0( const wavinfo_t *VAR_2 ) {
 float VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_3 = (float)VAR_2->rate / VAR_1.speed;


 VAR_4 = VAR_2->samples / VAR_3;


 VAR_5 = VAR_4 / 2;


 VAR_6 = VAR_4 / VAR_0;
 if( VAR_4 % VAR_0 ) {
  VAR_6++;
 }


 VAR_7 = VAR_6 * sizeof(adpcm_state_t);

 return VAR_5 + VAR_7;
}
