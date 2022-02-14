
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qhandle_t ;
struct TYPE_3__ {int assaultShader; int escortShader; int retrieveShader; int campShader; int followShader; int patrolShader; int defendShader; } ;
struct TYPE_4__ {TYPE_1__ media; } ;
 TYPE_2__ VAR_0 ;

qhandle_t FUNC_0(int VAR_1) {
 qhandle_t VAR_2 = VAR_0.media.assaultShader;
 switch (VAR_1) {
  case 130 :
   VAR_2 = VAR_0.media.assaultShader;
   break;
  case 133 :
   VAR_2 = VAR_0.media.defendShader;
   break;
  case 129 :
   VAR_2 = VAR_0.media.patrolShader;
   break;
  case 131 :
   VAR_2 = VAR_0.media.followShader;
   break;
  case 134 :
   VAR_2 = VAR_0.media.campShader;
   break;
  case 128 :
   VAR_2 = VAR_0.media.retrieveShader;
   break;
  case 132 :
   VAR_2 = VAR_0.media.escortShader;
   break;
  default :
   VAR_2 = VAR_0.media.assaultShader;
   break;
 }
 return VAR_2;
}
