
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int cache; } ;
struct TYPE_5__ {int offset; scalar_t__ sector; int cluster; } ;
struct TYPE_6__ {int modified; int startCluster; TYPE_4__* partition; TYPE_1__ dirEntryEnd; int filesize; scalar_t__ write; int inUse; } ;
typedef TYPE_2__ FILE_STRUCT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,scalar_t__,int,int) ;
 int FUNC_2 (int ,int *,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8 (FILE_STRUCT* VAR_11) {
 uint8_t VAR_12[VAR_1];

 if (!VAR_11 || !VAR_11->inUse) {
  return VAR_9;
 }

 if (VAR_11->write && VAR_11->modified) {

  FUNC_1 (VAR_11->partition->cache, VAR_12,
   FUNC_3(VAR_11->partition, VAR_11->dirEntryEnd.cluster) + VAR_11->dirEntryEnd.sector,
   VAR_11->dirEntryEnd.offset * VAR_1, VAR_1);



  FUNC_7 (VAR_12, VAR_6, VAR_11->filesize);


  FUNC_6 (VAR_12, VAR_4, VAR_11->startCluster);
  FUNC_6 (VAR_12, VAR_5, VAR_11->startCluster >> 16);


  FUNC_6 (VAR_12, VAR_8, FUNC_5());
  FUNC_6 (VAR_12, VAR_7, FUNC_4());


  FUNC_6 (VAR_12, VAR_2, FUNC_4());


  VAR_12[VAR_3] |= VAR_0;


  FUNC_2 (VAR_11->partition->cache, VAR_12,
   FUNC_3(VAR_11->partition, VAR_11->dirEntryEnd.cluster) + VAR_11->dirEntryEnd.sector,
   VAR_11->dirEntryEnd.offset * VAR_1, VAR_1);


  if (!FUNC_0(VAR_11->partition->cache)) {
   return VAR_10;
  }
 }

 VAR_11->modified = 0;

 return 0;
}
