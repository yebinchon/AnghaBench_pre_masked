
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef size_t UINT ;
struct TYPE_11__ {scalar_t__ fs_type; scalar_t__* lfnbuf; int dirbuf; } ;
struct TYPE_8__ {TYPE_4__* fs; } ;
struct TYPE_10__ {scalar_t__ sect; int blk_ofs; scalar_t__* dir; TYPE_1__ obj; } ;
struct TYPE_9__ {char* fname; char* altname; int fattrib; void* fdate; void* ftime; int fsize; } ;
typedef char TCHAR ;
typedef TYPE_2__ FILINFO ;
typedef TYPE_3__ FF_DIR ;
typedef TYPE_4__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int*) ;
 void* FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,size_t) ;

__attribute__((used)) static void FUNC_9 (
 FF_DIR* VAR_12,
 FILINFO* VAR_13
)
{
 UINT VAR_14, VAR_15;





 TCHAR VAR_16;



 VAR_13->fname[0] = 0;
 if (VAR_12->sect == 0) return;
 VAR_14 = VAR_15 = 0;
 while (VAR_14 < 11) {
  VAR_16 = (TCHAR)VAR_12->dir[VAR_14++];
  if (VAR_16 == ' ') continue;
  if (VAR_16 == VAR_11) VAR_16 = VAR_1;
  if (VAR_14 == 9) VAR_13->fname[VAR_15++] = '.';
  VAR_13->fname[VAR_15++] = VAR_16;
 }
 VAR_13->fname[VAR_15] = 0;


 VAR_13->fattrib = VAR_12->dir[VAR_2];
 VAR_13->fsize = FUNC_6(VAR_12->dir + VAR_3);
 VAR_13->ftime = FUNC_7(VAR_12->dir + VAR_4 + 0);
 VAR_13->fdate = FUNC_7(VAR_12->dir + VAR_4 + 2);
}
