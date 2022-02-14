
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; scalar_t__ sector; scalar_t__ cluster; } ;
struct TYPE_8__ {char* filename; char* entryData; TYPE_1__ dataStart; TYPE_1__ dataEnd; } ;
struct TYPE_7__ {int rootDirCluster; } ;
typedef TYPE_2__ PARTITION ;
typedef TYPE_3__ DIR_ENTRY ;


 char VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,int ,int) ;

bool FUNC_2 (PARTITION* VAR_6, DIR_ENTRY* VAR_7) {
 VAR_7->dataStart.cluster = 0;
 VAR_7->dataStart.sector = 0;
 VAR_7->dataStart.offset = 0;

 VAR_7->dataEnd = VAR_7->dataStart;

 FUNC_0 (VAR_7->filename, '\0', VAR_5);
 VAR_7->filename[0] = '.';

 FUNC_0 (VAR_7->entryData, 0, VAR_1);
 FUNC_0 (VAR_7->entryData, ' ', 11);
 VAR_7->entryData[0] = '.';

 VAR_7->entryData[VAR_2] = VAR_0;

 FUNC_1 (VAR_7->entryData, VAR_3, VAR_6->rootDirCluster);
 FUNC_1 (VAR_7->entryData, VAR_4, VAR_6->rootDirCluster >> 16);

 return 1;
}
