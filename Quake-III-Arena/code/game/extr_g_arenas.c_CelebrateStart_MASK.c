
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int torsoAnim; } ;
struct TYPE_7__ {int think; scalar_t__ nextthink; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_8__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_1( gentity_t *VAR_6 ) {
 VAR_6->s.torsoAnim = ( ( VAR_6->s.torsoAnim & VAR_0 ) ^ VAR_0 ) | VAR_4;
 VAR_6->nextthink = VAR_5.time + VAR_3;
 VAR_6->think = VAR_1;






 FUNC_0(VAR_6, VAR_2, 0);
}
