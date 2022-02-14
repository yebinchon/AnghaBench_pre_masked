
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct _reent {void* _errno; } ;
struct TYPE_14__ {char* entryData; int filename; } ;
struct TYPE_13__ {int cwdCluster; int rootDirCluster; int lock; int cache; scalar_t__ readOnly; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,char const*,char const*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char,int) ;
 char* FUNC_16 (char const*,char) ;
 int FUNC_17 (int ,char const*,scalar_t__) ;
 char* FUNC_18 (char const*,int ) ;
 int FUNC_19 (char*,int ,int) ;

int FUNC_20 (struct _reent *VAR_23, const char *VAR_24, int VAR_25)
{
 PARTITION* VAR_26 = ((void*)0);
 bool VAR_27;
 DIR_ENTRY VAR_28;
 const char* VAR_29;
 uint32_t VAR_30, VAR_31;
 uint8_t VAR_32[VAR_2];

 VAR_26 = FUNC_13 (VAR_24);
 if (VAR_26 == ((void*)0))
   {
  VAR_23->_errno = VAR_17;
  return -1;
 }


 if (FUNC_16 (VAR_24, ':') != ((void*)0))
  VAR_24 = FUNC_16 (VAR_24, ':') + 1;
 if (FUNC_16 (VAR_24, ':') != ((void*)0))
   {
  VAR_23->_errno = VAR_15;
  return -1;
 }

 FUNC_12(&VAR_26->lock);


 VAR_27 = FUNC_4 (VAR_26, &VAR_28, VAR_24, ((void*)0));


 if (VAR_27)
   {
  FUNC_14(&VAR_26->lock);
  VAR_23->_errno = VAR_14;
  return -1;
 }

 if (VAR_26->readOnly)
   {

  FUNC_14(&VAR_26->lock);
  VAR_23->_errno = VAR_20;
  return -1;
 }


 VAR_29 = FUNC_18 (VAR_24, VAR_13);
 if (VAR_29 == ((void*)0))
   {

  VAR_30 = VAR_26->cwdCluster;
  VAR_29 = VAR_24;
 }
   else
   {


  if (!FUNC_4 (VAR_26, &VAR_28, VAR_24, VAR_29) ||
   !FUNC_6(&VAR_28))
      {
   FUNC_14(&VAR_26->lock);
   VAR_23->_errno = VAR_19;
   return -1;
  }
  VAR_30 = FUNC_5 (VAR_26, VAR_28.entryData);

  VAR_29 += 1;
 }

 FUNC_17 (VAR_28.filename, VAR_29, VAR_22 - 1);
 FUNC_15 (VAR_28.entryData, 0, VAR_2);


 VAR_28.entryData[VAR_7] = 0;
 FUNC_19 (VAR_28.entryData, VAR_6, FUNC_11());
 FUNC_19 (VAR_28.entryData, VAR_5, FUNC_10());
 FUNC_19 (VAR_28.entryData, VAR_11, FUNC_11());
 FUNC_19 (VAR_28.entryData, VAR_10, FUNC_10());
 FUNC_19 (VAR_28.entryData, VAR_3, FUNC_10());


 VAR_28.entryData[VAR_4] = VAR_0;


 VAR_31 = FUNC_9 (VAR_26, VAR_1);
 if (!FUNC_8(VAR_26, VAR_31))
   {

  FUNC_14(&VAR_26->lock);
  VAR_23->_errno = VAR_18;
  return -1;
 }
 FUNC_19 (VAR_28.entryData, VAR_8, VAR_31);
 FUNC_19 (VAR_28.entryData, VAR_9, VAR_31 >> 16);


 if (!FUNC_3 (VAR_26, &VAR_28, VAR_30))
   {
  FUNC_14(&VAR_26->lock);
  VAR_23->_errno = VAR_18;
  return -1;
 }


 FUNC_15 (VAR_32, 0, VAR_2);
 FUNC_15 (VAR_32, ' ', 11);
 VAR_32[VAR_12] = '.';
 VAR_32[VAR_4] = VAR_0;
 FUNC_19 (VAR_32, VAR_8, VAR_31);
 FUNC_19 (VAR_32, VAR_9, VAR_31 >> 16);


 FUNC_0 ( VAR_26->cache, VAR_32,
  FUNC_7 (VAR_26, VAR_31), 0, VAR_2);





 if(VAR_30 == VAR_26->rootDirCluster)
  VAR_30 = VAR_21;

 VAR_32[VAR_12 + 1] = '.';
 FUNC_19 (VAR_32, VAR_8, VAR_30);
 FUNC_19 (VAR_32, VAR_9, VAR_30 >> 16);


 FUNC_2 ( VAR_26->cache, VAR_32,
  FUNC_7 (VAR_26, VAR_31), VAR_2, VAR_2);


 if (!FUNC_1(VAR_26->cache))
   {
  FUNC_14(&VAR_26->lock);
  VAR_23->_errno = VAR_16;
  return -1;
 }

 FUNC_14(&VAR_26->lock);
 return 0;
}
