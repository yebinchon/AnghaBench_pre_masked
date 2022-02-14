
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay {int sample_rate; int tempo; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct replay*,int ) ;
 int FUNC_2 (struct replay*) ;

int FUNC_3( struct replay *VAR_0 ) {
 int VAR_1 = 0, VAR_2 = 0;
 FUNC_1( VAR_0, 0 );
 while( VAR_1 < 1 ) {
  VAR_2 += FUNC_0( VAR_0->tempo, VAR_0->sample_rate );
  VAR_1 = FUNC_2( VAR_0 );
 }
 FUNC_1( VAR_0, 0 );
 return VAR_2;
}
