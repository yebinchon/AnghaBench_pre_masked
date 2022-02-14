
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel {int av_count; int vibrato_add; TYPE_1__* instrument; } ;
struct TYPE_2__ {int vib_depth; int vib_sweep; int vib_rate; int vib_type; } ;


 int FUNC_0 (struct channel*,int,int) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_0 ) {
 int VAR_1, VAR_2, VAR_3, VAR_4;
 int VAR_5 = VAR_0->instrument->vib_depth & 0x7F;
 if( VAR_5 > 0 ) {
  VAR_1 = VAR_0->instrument->vib_sweep & 0x7F;
  VAR_2 = VAR_0->instrument->vib_rate & 0x7F;
  VAR_3 = VAR_0->instrument->vib_type;
  if( VAR_0->av_count < VAR_1 ) {
   VAR_5 = VAR_5 * VAR_0->av_count / VAR_1;
  }
  VAR_4 = FUNC_0( VAR_0, VAR_0->av_count * VAR_2 >> 2, VAR_3 + 4 );
  VAR_0->vibrato_add += VAR_4 * VAR_5 >> 8;
  VAR_0->av_count++;
 }
}
