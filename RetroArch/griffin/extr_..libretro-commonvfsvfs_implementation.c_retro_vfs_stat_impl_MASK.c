
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
struct stat {int st_mode; scalar_t__ st_size; } ;
struct _stat {scalar_t__ st_size; } ;
struct TYPE_7__ {int mode; scalar_t__ size; } ;
typedef TYPE_1__ iox_stat_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {int st_mode; scalar_t__ st_size; } ;
struct TYPE_8__ {int st_mode; scalar_t__ st_size; } ;
typedef TYPE_2__ SceIoStat ;
typedef int DWORD ;
typedef TYPE_3__ CellFsStat ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct _stat*) ;
 int FUNC_6 (char*,struct _stat*) ;
 scalar_t__ FUNC_7 (char const*,TYPE_3__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_15 (char const*,struct stat*) ;
 char* FUNC_16 (char const*) ;
 int FUNC_17 (char*) ;
 size_t FUNC_18 (char*) ;
 char* FUNC_19 (char const*) ;
 char* FUNC_20 (char const*) ;

int FUNC_21(const char *VAR_7, int32_t *VAR_8)
{
   bool VAR_9, VAR_10;
   struct stat VAR_11;

   if (!VAR_7 || !*VAR_7)
      return 0;
   if (FUNC_15(VAR_7, &VAR_11) < 0)
      return 0;

   if (VAR_8)
      *VAR_8 = (int32_t)VAR_11.st_size;

   VAR_9 = FUNC_4(VAR_11.st_mode);
   VAR_10 = FUNC_3(VAR_11.st_mode);

   return VAR_4 | (VAR_9 ? VAR_3 : 0) | (VAR_10 ? VAR_2 : 0);

}
