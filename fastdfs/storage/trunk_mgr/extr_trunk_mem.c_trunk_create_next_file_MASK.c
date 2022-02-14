
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int full_filename ;
struct TYPE_7__ {int sub_path_high; int sub_path_low; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {TYPE_2__ path; TYPE_1__ file; } ;
typedef TYPE_3__ FDFSTrunkFullInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,int*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int*,int*) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(FDFSTrunkFullInfo *VAR_4)
{
 char VAR_5[32];
 int VAR_6;
 int VAR_7;
 char VAR_8[64];
 char VAR_9[VAR_0];
 int VAR_10;
 int VAR_11;

 while (1)
 {
  FUNC_3(&VAR_3);
  VAR_4->file.id = ++VAR_1;
  VAR_6 = FUNC_6();
  FUNC_4(&VAR_3);
  if (VAR_6 != 0)
  {
   return VAR_6;
  }

  FUNC_2(VAR_4->file.id, VAR_5);
  FUNC_0(&VAR_2, VAR_5, sizeof(int), VAR_8, &VAR_7, 0);


  FUNC_5(VAR_8, VAR_7, &VAR_10, &VAR_11);


  VAR_4->path.sub_path_high = VAR_10;
  VAR_4->path.sub_path_low = VAR_11;

  FUNC_7(VAR_4, VAR_9, sizeof(VAR_9));

  if (!FUNC_1(VAR_9))
  {
   break;
  }
 }

 if ((VAR_6=FUNC_8(VAR_9)) != 0)
 {
  return VAR_6;
 }

 return 0;
}
