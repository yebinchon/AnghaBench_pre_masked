
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atari_format_descr {int track; int head; int sect_offset; } ;
struct TYPE_5__ {int blocks; int spt; } ;
struct TYPE_4__ {scalar_t__ drive_types; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 TYPE_1__* VAR_18 ;
 int VAR_19 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(int VAR_20, int VAR_21, struct atari_format_descr *VAR_22)
{
 unsigned char *VAR_23;
 int VAR_24, VAR_25;
 unsigned long VAR_26;

 FUNC_0(("do_format( dr=%d tr=%d he=%d offs=%d )\n",
  VAR_20, VAR_22->track, VAR_22->head, VAR_22->sect_offset ));

 FUNC_6(VAR_26);
 while( VAR_14 ) FUNC_8( &VAR_15 );
 VAR_14 = 1;
 FUNC_9(VAR_16, ((void*)0));
 FUNC_2( VAR_6 );
 FUNC_5(VAR_26);

 if (VAR_21) {
  if (--VAR_21 >= VAR_8 ||
      VAR_18[VAR_21].drive_types > VAR_2) {
   FUNC_7();
   return -VAR_3;
  }
  VAR_21 = VAR_18[VAR_21].index;
  VAR_12 = &VAR_13[VAR_21];
 }

 if (!VAR_12 || VAR_22->track >= VAR_12->blocks/VAR_12->spt/2 || VAR_22->head >= 2) {
  FUNC_7();
  return -VAR_3;
 }

 VAR_25 = VAR_12->spt;
 VAR_23 = VAR_11;


 VAR_1 = -1;

 FUNC_3( &VAR_19 );

 FUNC_1( 60 * (VAR_25 / 9), 0x4e );
 for( VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24 ) {
  FUNC_1( 12, 0 );
  FUNC_1( 3, 0xf5 );
  *VAR_23++ = 0xfe;
  *VAR_23++ = VAR_22->track;
  *VAR_23++ = VAR_22->head;
  *VAR_23++ = (VAR_25 + VAR_24 - VAR_22->sect_offset) % VAR_25 + 1;
  *VAR_23++ = 2;
  *VAR_23++ = 0xf7;
  FUNC_1( 22, 0x4e );
  FUNC_1( 12, 0 );
  FUNC_1( 3, 0xf5 );
  *VAR_23++ = 0xfb;
  FUNC_1( 512, 0xe5 );
  *VAR_23++ = 0xf7;
  FUNC_1( 40, 0x4e );
 }
 FUNC_1( VAR_11+VAR_0-VAR_23, 0x4e );

 VAR_7 = 1;
 VAR_5 = 0;
 VAR_10 = VAR_22->track;
 VAR_9 = VAR_22->head;
 FUNC_4( VAR_20 );

 FUNC_8( &VAR_17 );

 FUNC_7();
 return( VAR_5 ? -VAR_4 : 0 );
}
