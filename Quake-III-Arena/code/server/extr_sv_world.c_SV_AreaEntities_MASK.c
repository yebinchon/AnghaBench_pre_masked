
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int* list; int count; int maxcount; int maxs; int mins; } ;
typedef TYPE_1__ areaParms_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1( const vec3_t VAR_1, const vec3_t VAR_2, int *VAR_3, int VAR_4 ) {
 areaParms_t VAR_5;

 VAR_5.mins = VAR_1;
 VAR_5.maxs = VAR_2;
 VAR_5.list = VAR_3;
 VAR_5.count = 0;
 VAR_5.maxcount = VAR_4;

 FUNC_0( VAR_0, &VAR_5 );

 return VAR_5.count;
}
