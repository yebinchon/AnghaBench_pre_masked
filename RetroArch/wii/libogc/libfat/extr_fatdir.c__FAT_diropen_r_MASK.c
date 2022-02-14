
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_15__ {int lock; } ;
struct TYPE_14__ {int entryData; } ;
struct TYPE_13__ {scalar_t__ dirStruct; } ;
struct TYPE_12__ {int inUse; TYPE_4__* partition; int startCluster; int currentEntry; int validEntry; } ;
typedef TYPE_1__ DIR_STATE_STRUCT ;
typedef TYPE_2__ DIR_ITER ;
typedef TYPE_3__ DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,char const*,int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char const*,char) ;

DIR_ITER* FUNC_8(struct _reent *VAR_4, DIR_ITER *VAR_5, const char *VAR_6) {
 DIR_ENTRY VAR_7;
 DIR_STATE_STRUCT* VAR_8 = (DIR_STATE_STRUCT*) (VAR_5->dirStruct);
 bool VAR_9;

 VAR_8->partition = FUNC_5 (VAR_6);
 if (VAR_8->partition == ((void*)0)) {
  VAR_4->_errno = VAR_1;
  return ((void*)0);
 }


 if (FUNC_7 (VAR_6, ':') != ((void*)0)) {
  VAR_6 = FUNC_7 (VAR_6, ':') + 1;
 }
 if (FUNC_7 (VAR_6, ':') != ((void*)0)) {
  VAR_4->_errno = VAR_0;
  return ((void*)0);
 }

 FUNC_4(&VAR_8->partition->lock);


 VAR_9 = FUNC_0 (VAR_8->partition, &VAR_7, VAR_6, ((void*)0));

 if (!VAR_9) {
  FUNC_6(&VAR_8->partition->lock);
  VAR_4->_errno = VAR_2;
  return ((void*)0);
 }


 if (! FUNC_3 (&VAR_7)) {
  FUNC_6(&VAR_8->partition->lock);
  VAR_4->_errno = VAR_3;
  return ((void*)0);
 }


 VAR_8->startCluster = FUNC_1 (VAR_8->partition, VAR_7.entryData);


 VAR_8->validEntry =
  FUNC_2 (VAR_8->partition, &(VAR_8->currentEntry), VAR_8->startCluster);


 VAR_8->inUse = 1;
 FUNC_6(&VAR_8->partition->lock);
 return (DIR_ITER*) VAR_8;
}
