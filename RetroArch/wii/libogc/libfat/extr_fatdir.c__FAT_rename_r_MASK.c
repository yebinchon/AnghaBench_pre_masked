
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct _reent {void* _errno; } ;
struct TYPE_15__ {int filename; int entryData; } ;
struct TYPE_14__ {int lock; int cache; int cwdCluster; scalar_t__ readOnly; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,int) ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (int ,char const*,scalar_t__) ;
 char* FUNC_12 (char const*,int ) ;

int FUNC_13 (struct _reent *VAR_11, const char *VAR_12, const char *VAR_13) {
 PARTITION* VAR_14 = ((void*)0);
 DIR_ENTRY VAR_15;
 DIR_ENTRY VAR_16;
 const char *VAR_17;
 uint32_t VAR_18;


 VAR_14 = FUNC_7 (VAR_12);
 if (VAR_14 == ((void*)0)) {
  VAR_11->_errno = VAR_4;
  return -1;
 }

 FUNC_6(&VAR_14->lock);


 if (VAR_14 != FUNC_7 (VAR_13)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_9;
  return -1;
 }


 if (VAR_14->readOnly) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_8;
  return -1;
 }


 if (FUNC_10 (VAR_12, ':') != ((void*)0)) {
  VAR_12 = FUNC_10 (VAR_12, ':') + 1;
 }
 if (FUNC_10 (VAR_12, ':') != ((void*)0)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_2;
  return -1;
 }
 if (FUNC_10 (VAR_13, ':') != ((void*)0)) {
  VAR_13 = FUNC_10 (VAR_13, ':') + 1;
 }
 if (FUNC_10 (VAR_13, ':') != ((void*)0)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_2;
  return -1;
 }


 if (!FUNC_2 (VAR_14, &VAR_15, VAR_12, ((void*)0))) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_5;
  return -1;
 }


 if (FUNC_2 (VAR_14, &VAR_16, VAR_13, ((void*)0))) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_1;
  return -1;
 }



 VAR_17 = FUNC_12 (VAR_13, VAR_0);
 if (VAR_17 == ((void*)0)) {

  VAR_18 = VAR_14->cwdCluster;
  VAR_17 = VAR_13;
 } else {


  if (!FUNC_2 (VAR_14, &VAR_16, VAR_13, VAR_17) ||
   !FUNC_4(&VAR_16)) {
   FUNC_8(&VAR_14->lock);
   VAR_11->_errno = VAR_7;
   return -1;
  }
  VAR_18 = FUNC_3 (VAR_14, VAR_16.entryData);

  VAR_17 += 1;
 }


 FUNC_9 (&VAR_16, &VAR_15, sizeof(DIR_ENTRY));


 FUNC_11 (VAR_16.filename, VAR_17, VAR_10 - 1);


 if (!FUNC_1 (VAR_14, &VAR_16, VAR_18)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_6;
  return -1;
 }


 if (!FUNC_5 (VAR_14, &VAR_15)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_3;
  return -1;
 }


 if (!FUNC_0 (VAR_14->cache)) {
  FUNC_8(&VAR_14->lock);
  VAR_11->_errno = VAR_3;
  return -1;
 }

 FUNC_8(&VAR_14->lock);
 return 0;
}
