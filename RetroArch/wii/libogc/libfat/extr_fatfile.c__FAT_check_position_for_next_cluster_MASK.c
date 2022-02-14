
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct _reent {int _errno; } ;
struct TYPE_9__ {scalar_t__ sector; scalar_t__ cluster; } ;
struct TYPE_8__ {scalar_t__ sectorsPerCluster; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ FILE_POSITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct _reent *VAR_4,
  FILE_POSITION *VAR_5, PARTITION* VAR_6, size_t VAR_7, bool *VAR_8)
{
 uint32_t VAR_9;

 if (VAR_7 == 0) return 1;
 if (VAR_8 && *VAR_8 == 0) return 0;
 if (VAR_5->sector > VAR_6->sectorsPerCluster) {

  VAR_4->_errno = VAR_2;
  goto err;
 }
 if (VAR_5->sector == VAR_6->sectorsPerCluster) {

  VAR_9 = FUNC_2(VAR_6, VAR_5->cluster);
  if ((VAR_9 == VAR_0) || (VAR_9 == VAR_1)) {

   VAR_9 = FUNC_1(VAR_6, VAR_5->cluster);
  }
  if (!FUNC_0(VAR_6, VAR_9)) {

   VAR_4->_errno = VAR_3;
   goto err;
  }
  VAR_5->sector = 0;
  VAR_5->cluster = VAR_9;
 }
 return 1;
err:
 if (VAR_8) *VAR_8 = 0;
 return 0;
}
