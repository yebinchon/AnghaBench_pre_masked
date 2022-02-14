
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int tremolo_type; int tremolo_add; int tremolo_depth; int tremolo_phase; } ;


 int FUNC_0 (struct channel*,int ,int) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_0 ) {
 int VAR_1 = FUNC_0( VAR_0, VAR_0->tremolo_phase, VAR_0->tremolo_type & 0x3 );
 VAR_0->tremolo_add = VAR_1 * VAR_0->tremolo_depth >> 6;
}
