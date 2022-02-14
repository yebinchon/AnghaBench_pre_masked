
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_11__ {scalar_t__ cluster; int offset; scalar_t__ sector; } ;
struct TYPE_12__ {TYPE_2__ dataEnd; } ;
struct TYPE_10__ {scalar_t__ rootDirCluster; int cache; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY_POSITION ;
typedef TYPE_3__ DIR_ENTRY ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

bool FUNC_4 (PARTITION* VAR_7, char *VAR_8) {
 DIR_ENTRY VAR_9;
 DIR_ENTRY_POSITION VAR_10;
 uint8_t VAR_11[VAR_1];
 int VAR_12;
 bool VAR_13;

 FUNC_1(VAR_7, &VAR_9);

 VAR_10 = VAR_9.dataEnd;


 if (VAR_10.cluster == VAR_6) {
  VAR_10.cluster = VAR_7->rootDirCluster;
 }

 VAR_8[0]='\0';
 VAR_8[11]='\0';
 VAR_13 = 0;

 while(!VAR_13) {
  if(!FUNC_0 (VAR_7->cache, VAR_11,
   FUNC_3(VAR_7, VAR_10.cluster) + VAR_10.sector,
   VAR_10.offset * VAR_1, VAR_1))
  {
   return 0;
  }

  if (VAR_11[VAR_4] == VAR_0 && VAR_11[0] != VAR_2) {
   for (VAR_12 = 0; VAR_12 < 11; VAR_12++) {
    VAR_8[VAR_12] = VAR_11[VAR_5 + VAR_12];
   }
   return 1;
  } else if (VAR_11[0] == VAR_3) {
   VAR_13 = 1;
  }

  if (FUNC_2 (VAR_7, &VAR_10, 0) == 0) {
   VAR_13 = 1;
  }
 }
 return 0;
}
