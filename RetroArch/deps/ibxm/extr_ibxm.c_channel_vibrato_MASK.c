
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int vibrato_type; int vibrato_add; int vibrato_depth; int vibrato_phase; } ;


 int FUNC_0 (struct channel*,int ,int) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_0, int VAR_1 ) {
 int VAR_2 = FUNC_0( VAR_0, VAR_0->vibrato_phase, VAR_0->vibrato_type & 0x3 );
 VAR_0->vibrato_add = VAR_2 * VAR_0->vibrato_depth >> ( VAR_1 ? 7 : 5 );
}
