
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int startTime; scalar_t__ retrieved; int address; } ;
typedef TYPE_1__ serverStatus_t ;
typedef int netadr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

serverStatus_t *FUNC_1( netadr_t VAR_3 ) {
 serverStatus_t *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ( FUNC_0( VAR_3, VAR_1[VAR_5].address ) ) {
   return &VAR_1[VAR_5];
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ( VAR_1[VAR_5].retrieved ) {
   return &VAR_1[VAR_5];
  }
 }
 VAR_6 = -1;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_6 == -1 || VAR_1[VAR_5].startTime < VAR_7) {
   VAR_6 = VAR_5;
   VAR_7 = VAR_1[VAR_5].startTime;
  }
 }
 if (VAR_6 != -1) {
  return &VAR_1[VAR_6];
 }
 VAR_2++;
 return &VAR_1[VAR_2 & (VAR_0-1)];
}
